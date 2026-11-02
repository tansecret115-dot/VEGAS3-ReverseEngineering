/* Module: vidpcore.dll
   Function: FUN_5dea3960
   Address: 5dea3960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5dea3960(HWND param_1)

{
  LONG LVar1;
  int iVar2;
  HCURSOR hCursor;
  HCURSOR pHVar3;
  UINT_PTR UVar4;
  
  LVar1 = GetWindowLongA(param_1,0);
  iVar2 = FUN_5dea3860(LVar1,0);
  hCursor = (HCURSOR)FUN_5ded90a0(((iVar2 < 1) - 1 & 0xffff8104) + 0x7f00);
  pHVar3 = GetCursor();
  if (pHVar3 != hCursor) {
    SetCursor(hCursor);
  }
  if ((0 < iVar2) && (*(int *)(LVar1 + 0x38) == 0)) {
    UVar4 = SetTimer(param_1,0x33,0x82,(TIMERPROC)0x0);
    *(UINT_PTR *)(LVar1 + 0x38) = UVar4;
  }
  return 1;
}


