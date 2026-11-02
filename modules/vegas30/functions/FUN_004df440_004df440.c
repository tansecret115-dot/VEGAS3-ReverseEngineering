/* Module: vegas30.exe
   Function: FUN_004df440
   Address: 004df440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004df440(int param_1,LONG param_2,LONG param_3)

{
  undefined4 uVar1;
  HCURSOR hCursor;
  HCURSOR pHVar2;
  
  if (*(int *)(param_1 + 0xcd8) != 0) {
    ClientToScreen(*(HWND *)(param_1 + 4),(LPPOINT)&param_2);
    uVar1 = FUN_0040c4b0(DAT_0064762c,*(undefined4 *)(param_1 + 0xcd8),param_2,param_3);
    hCursor = (HCURSOR)_SfGetUICursor_4(uVar1);
    pHVar2 = GetCursor();
    if (pHVar2 != hCursor) {
      SetCursor(hCursor);
    }
  }
  return;
}


