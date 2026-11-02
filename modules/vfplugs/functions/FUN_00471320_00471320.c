/* Module: vfplugs.dll
   Function: FUN_00471320
   Address: 00471320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00471320(int *param_1,int *param_2,double *param_3)

{
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  *(undefined4 *)((int)param_3 + 4) = 0x3fe00000;
  *(undefined4 *)((int)param_3 + 0xc) = 0x3fe00000;
  *(undefined4 *)((int)param_3 + 0x1c) = 0x3f800000;
  *(undefined4 *)((int)param_3 + 0x13c) = 0x3f800000;
  *(undefined4 *)(param_3 + 4) = 0x3f000000;
  *(undefined4 *)((int)param_3 + 0x24) = 0x3f000000;
  *(undefined4 *)(param_3 + 2) = 2;
  *(undefined4 *)((int)param_3 + 0x14) = 1;
  *(undefined4 *)(param_3 + 3) = 0xffffffff;
  *(undefined4 *)(param_3 + 5) = 0;
  *(undefined2 *)((int)param_3 + 0x2c) = 0;
  *(undefined4 *)(param_3 + 0x26) = 0;
  *(undefined4 *)((int)param_3 + 0x134) = 0xffffff;
  *(undefined4 *)(param_3 + 0x27) = 0;
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(undefined4 *)((int)param_3 + 0x144) = 0;
  *(undefined4 *)(param_3 + 0x29) = 0;
  *(undefined4 *)((int)param_3 + 0x14c) = 0;
  *(undefined4 *)((int)param_3 + 0x154) = 0;
  *(undefined4 *)(param_3 + 0x2a) = 1;
  *param_3 = (double)*param_1 / (double)(param_2[2] - *param_2);
  param_3[1] = (double)param_1[1] / (double)(param_2[3] - param_2[1]);
  return;
}


