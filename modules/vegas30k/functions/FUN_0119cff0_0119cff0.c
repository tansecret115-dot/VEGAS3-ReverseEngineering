/* Module: vegas30k.dll
   Function: FUN_0119cff0
   Address: 0119cff0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119cff0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x144))(0);
  if (-1 < iVar1) {
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xfffffffb);
    param_1[8] = param_1[8] & 0xfffffffb;
  }
  return iVar1;
}


