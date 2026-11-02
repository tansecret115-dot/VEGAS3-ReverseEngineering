/* Module: vegas30k.dll
   Function: FUN_0111baf0
   Address: 0111baf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111baf0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_3 = param_3 + *(int *)(param_2 + 0x9c);
  if (param_3 < 0) {
    param_3 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xb0) + -1;
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
  }
  if (param_3 != *(int *)(param_2 + 0x9c)) {
    *(int *)(param_2 + 0x9c) = param_3;
    FUN_0111aa00(param_1,param_2,0);
  }
  return;
}


