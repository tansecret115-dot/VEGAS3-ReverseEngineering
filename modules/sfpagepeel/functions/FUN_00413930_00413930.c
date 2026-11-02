/* Module: sfpagepeel.dll
   Function: FUN_00413930
   Address: 00413930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413930(HWND param_1)

{
  undefined4 *puVar1;
  int iVar2;
  HCURSOR hCursor;
  HCURSOR pHVar3;
  UINT_PTR UVar4;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,0);
  iVar2 = FUN_00413830(puVar1,(LONG *)0x0);
  hCursor = (HCURSOR)FUN_004314b0(((iVar2 < 1) - 1 & 0xffff8104) + 0x7f00);
  pHVar3 = GetCursor();
  if (pHVar3 != hCursor) {
    SetCursor(hCursor);
  }
  if ((0 < iVar2) && (puVar1[0xe] == 0)) {
    UVar4 = SetTimer(param_1,0x33,0x82,(TIMERPROC)0x0);
    puVar1[0xe] = UVar4;
  }
  return 1;
}


