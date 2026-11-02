/* Module: sfcd.cdd
   Function: FUN_00408fe0
   Address: 00408fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00408fe0(int param_1,byte *param_2,byte param_3,byte param_4,uint param_5)

{
  int iVar1;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (param_2 == (byte *)0x0) {
    return 0x80004003;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *param_2 = param_3;
  if (*(int *)(iVar1 + 0x1d8) != 0) {
    *param_2 = param_3 | 0x40;
  }
  param_2[1] = param_4;
  FUN_0041eec0(&local_c,param_5);
  FUN_0041f150(param_2 + 2,local_c);
  FUN_0041f150(param_2 + 3,local_8);
  FUN_0041f150(param_2 + 4,local_4);
  return 0;
}


