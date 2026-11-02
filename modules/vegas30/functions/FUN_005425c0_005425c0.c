/* Module: vegas30.exe
   Function: FUN_005425c0
   Address: 005425c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005425c0(undefined4 *param_1)

{
  HCURSOR hCursor;
  
  SetCapture((HWND)*param_1);
  param_1[0x44] = 1;
  param_1[0x45] = 1;
  hCursor = (HCURSOR)_SfGetUICursor_4(0x7f8b);
  SetCursor(hCursor);
  FUN_00404660(&LAB_00542560,param_1);
  DAT_0064767c = DAT_0064767c | 4;
  return;
}


