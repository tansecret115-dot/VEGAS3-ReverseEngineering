/* Module: sfpagepeel.dll
   Function: FUN_00413ab0
   Address: 00413ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00413ab0(HWND param_1)

{
  undefined4 *puVar1;
  UINT_PTR UVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,0);
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[0xe] == 0)) {
    UVar2 = SetTimer(param_1,0x33,0x82,(TIMERPROC)0x0);
    puVar1[0xe] = UVar2;
  }
  iVar3 = FUN_00413830(puVar1,(LONG *)0x0);
  if (iVar3 != puVar1[1]) {
    puVar1[1] = iVar3;
    InvalidateRect(param_1,(RECT *)0x0,1);
  }
  return;
}


