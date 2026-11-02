/* Module: sfcd.cdd
   Function: FUN_004127f0
   Address: 004127f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004127f0(byte *param_1,uint *param_2)

{
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (param_1 == (byte *)0x0) {
    return 0x80004003;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 1;
  FUN_00412720(param_1,(int)param_2);
  FUN_0041f150(param_1 + 1,*param_2);
  FUN_0041eec0(&local_c,param_2[5]);
  FUN_0041f150(param_1 + 2,local_c);
  FUN_0041f150(param_1 + 3,local_8);
  FUN_0041f150(param_1 + 4,local_4);
  return 0;
}


