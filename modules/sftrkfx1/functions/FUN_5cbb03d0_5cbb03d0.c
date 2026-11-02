/* Module: sftrkfx1.dll
   Function: FUN_5cbb03d0
   Address: 5cbb03d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb03d0(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 + *(int *)(param_2 + 0x90);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xa4) + -1;
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
  }
  if (iVar1 != *(int *)(param_2 + 0x90)) {
    *(int *)(param_2 + 0x90) = iVar1;
    FUN_5cbaf550(param_1,param_2,0);
  }
  return;
}


