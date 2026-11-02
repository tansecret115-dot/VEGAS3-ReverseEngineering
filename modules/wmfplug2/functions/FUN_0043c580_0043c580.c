/* Module: wmfplug2.dll
   Function: FUN_0043c580
   Address: 0043c580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043c580(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 + *(int *)(param_2 + 0x9c);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xb0) + -1;
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
  }
  if (iVar1 != *(int *)(param_2 + 0x9c)) {
    *(int *)(param_2 + 0x9c) = iVar1;
    FUN_0043b490(param_1,param_2,0);
  }
  return;
}


