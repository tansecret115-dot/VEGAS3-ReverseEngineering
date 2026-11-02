/* Module: vidcap30.exe
   Function: FUN_0042cef0
   Address: 0042cef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042cef0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = FUN_0042cf40(param_1,param_2);
  }
  else if (param_2 != *(int *)(param_1 + 0x20)) {
    iVar1 = FUN_0042cf90(param_1);
    if (-1 < iVar1) {
      iVar1 = FUN_0042cf40(param_1,param_2);
      return iVar1;
    }
  }
  return iVar1;
}


