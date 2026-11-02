/* Module: vegas30k.dll
   Function: FUN_0119e310
   Address: 0119e310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119e310(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  param_1[0x13e] = *param_2;
  param_1[0x13f] = param_2[1];
  param_1[0x140] = param_2[2];
  param_1[0x141] = param_2[3];
  *(short *)(param_1 + 0x142) = (short)param_2[4];
  iVar1 = (**(code **)(*param_1 + 300))(0,param_5);
  if (-1 < iVar1) {
    param_1[0x147] = (int)param_1;
    param_1[0x148] = (int)param_2;
    FUN_011aaf10(param_1);
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 | 1);
    param_1[8] = param_1[8] & 0xffff3fffU | 1;
  }
  return iVar1;
}


