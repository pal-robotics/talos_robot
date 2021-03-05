
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int random_sign();

int main(int argc, char *argv[])
{
	srand(time(NULL));
	if(argc !=5)
	{
		fprintf(stderr, "?: Enter output file name, number of joints, limb name, side\n");
		exit(1);
	}
	int n_joints = atoi(argv[2]);
	FILE *offset_file;
	offset_file = fopen(argv[1], "w");

	fprintf(offset_file, "<?xml version=\"1.0\"?>\n");
	fprintf(offset_file, "<!--\n");
	fprintf(offset_file, "  Copyright (c) 2021, PAL Robotics, S.L.\n");
	fprintf(offset_file, "  All rights reserved.\n");
	fprintf(offset_file, "\n");
	fprintf(offset_file, "  This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License.\n");
	fprintf(offset_file, "  To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/3.0/ or send a letter to\n");
	fprintf(offset_file, "  Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.\n");
	fprintf(offset_file, "-->\n");
	fprintf(offset_file, "<robot xmlns:xacro=\"http://ros.org/wiki/xacro\">\n");
	fprintf(offset_file, "\n");

	int i;

	double x_offset;
	double y_offset;
	double z_offset;
	double roll_offset;
	double pitch_offset;
	double yaw_offset;

	for(i = 0; i < n_joints; i++)
	{
		x_offset = random_sign() * (double)rand()/(double)RAND_MAX;
		y_offset = random_sign() * (double)rand()/(double)RAND_MAX;
		z_offset = random_sign() * (double)rand()/(double)RAND_MAX;
		roll_offset = M_PI * random_sign() * (double)rand()/(double)RAND_MAX;
		pitch_offset = M_PI * random_sign() * (double)rand()/(double)RAND_MAX;
		yaw_offset = M_PI * random_sign() * (double)rand()/(double)RAND_MAX;

		fprintf(offset_file,"  <xacro:property name=\"%s_%d_joint_x_offset\"     value=\"%1.10f\" />\n", argv[3], i+1, x_offset);  
		fprintf(offset_file,"  <xacro:property name=\"%s_%d_joint_y_offset\"     value=\"%1.10f\" />\n", argv[3], i+1, y_offset); 
		fprintf(offset_file,"  <xacro:property name=\"%s_%d_joint_z_offset\"     value=\"%1.10f\" />\n", argv[3], i+1, z_offset); 
		fprintf(offset_file,"  <xacro:property name=\"%s_%d_joint_roll_offset\"  value=\"%1.10f\" />\n", argv[3], i+1, roll_offset); 
		fprintf(offset_file,"  <xacro:property name=\"%s_%d_joint_pitch_offset\" value=\"%1.10f\" />\n", argv[3], i+1, pitch_offset); 
		fprintf(offset_file,"  <xacro:property name=\"%s_%d_joint_yaw_offset\"   value=\"%1.10f\" />\n", argv[3], i+1, yaw_offset); 
		fprintf(offset_file, "\n");

		fprintf(stdout, "double %s_%s_%d_joint_x_offset;\n", argv[3], argv[4],i+1);
		fprintf(stdout, "double %s_%s_%d_joint_y_offset;\n", argv[3],argv[4], i+1);
		fprintf(stdout, "double %s_%s_%d_joint_z_offset;\n", argv[3], argv[4],i+1);
		fprintf(stdout, "double %s_%s_%d_joint_roll_offset;\n", argv[3], argv[4],i+1);
		fprintf(stdout, "double %s_%s_%d_joint_pitch_offset;\n", argv[3], argv[4],i+1);
		fprintf(stdout, "double %s_%s_%d_joint_yaw_offset;\n\n", argv[3], argv[4],i+1);

		fprintf(stdout, "%s_%s_%d_joint_x_offset = %1.10f;\n", argv[3], argv[4], i+1, x_offset);
		fprintf(stdout, "%s_%s_%d_joint_y_offset = %1.10f;\n", argv[3], argv[4],i+1, y_offset);
		fprintf(stdout, "%s_%s_%d_joint_z_offset = %1.10f;\n", argv[3], argv[4], i+1, z_offset);
		fprintf(stdout, "%s_%s_%d_joint_roll_offset = %1.10f;\n", argv[3], argv[4], i+1, roll_offset);
		fprintf(stdout, "%s_%s_%d_joint_pitch_offset = %1.10f;\n", argv[3], argv[4], i+1, pitch_offset);
		fprintf(stdout, "%s_%s_%d_joint_yaw_offset = %1.10f;\n\n", argv[3], argv[4], i+1, yaw_offset);
	}
	fprintf(offset_file, "\n");
	fprintf(offset_file, "</robot>\n");
	fprintf(offset_file, "\n");

	fclose(offset_file);
	return 0;
}
int random_sign()
{
	int i = rand()%2;
	if(i == 0)
		return 1;
	else
		return -1;
}
