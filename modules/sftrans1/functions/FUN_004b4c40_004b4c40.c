/* Module: sftrans1.dll
   Function: FUN_004b4c40
   Address: 004b4c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b4c40(HWND param_1)

{
  LONG LVar1;
  UINT_PTR UVar2;
  int iVar3;
  
  LVar1 = GetWindowLongA(param_1,0);
  if ((LVar1 != 0) && (*(int *)(LVar1 + 0x38) == 0)) {
    UVar2 = SetTimer(param_1,0x33,0x82,(TIMERPROC)0x0);
    *(UINT_PTR *)(LVar1 + 0x38) = UVar2;
  }
  iVar3 = FUN_004b49c0(LVar1,0);
  if (iVar3 != *(int *)(LVar1 + 4)) {
    *(int *)(LVar1 + 4) = iVar3;
    InvalidateRect(param_1,(RECT *)0x0,1);
  }
  return;
}


