/* Module: sfpaplug.dll
   Function: FUN_00433840
   Address: 00433840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00433840(HWND param_1,int param_2,int param_3)

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
    FUN_00432750(param_1,param_2,0);
  }
  return;
}


