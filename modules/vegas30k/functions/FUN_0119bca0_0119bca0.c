/* Module: vegas30k.dll
   Function: FUN_0119bca0
   Address: 0119bca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119bca0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x158))(0);
  if (-1 < iVar1) {
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 | 0x10);
    param_1[8] = param_1[8] & 0xffff3fffU | 0x10;
  }
  return iVar1;
}


