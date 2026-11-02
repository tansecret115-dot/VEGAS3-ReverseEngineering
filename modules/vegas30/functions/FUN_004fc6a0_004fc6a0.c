/* Module: vegas30.exe
   Function: FUN_004fc6a0
   Address: 004fc6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fc6a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  HCURSOR hCursor;
  HCURSOR pHVar1;
  
  if (param_3 != 1) {
    return 0;
  }
  hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
  pHVar1 = GetCursor();
  if (pHVar1 != hCursor) {
    SetCursor(hCursor);
  }
  return 1;
}


