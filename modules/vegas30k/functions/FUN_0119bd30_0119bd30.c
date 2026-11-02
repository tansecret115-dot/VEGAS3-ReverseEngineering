/* Module: vegas30k.dll
   Function: FUN_0119bd30
   Address: 0119bd30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119bd30(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x160))(0);
  if (-1 < iVar1) {
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xffffffef);
    param_1[8] = param_1[8] & 0xffff3fef;
  }
  return iVar1;
}


