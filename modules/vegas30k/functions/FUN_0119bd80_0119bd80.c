/* Module: vegas30k.dll
   Function: FUN_0119bd80
   Address: 0119bd80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119bd80(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[0x187] == 0) {
    return 0;
  }
  if (param_2 == param_1) {
    return 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x160))(1);
  if (-1 < iVar1) {
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 & 0xffffffef);
    param_1[8] = param_1[8] & 0xffff3fef;
  }
  return iVar1;
}


