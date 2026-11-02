/* Module: vidcap30.exe
   Function: FUN_0041ee70
   Address: 0041ee70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041ee70(undefined4 *param_1)

{
  HCURSOR hCursor;
  
  SetCapture((HWND)*param_1);
  param_1[0x3f] = 1;
  param_1[0x40] = 1;
  hCursor = (HCURSOR)_SfGetUICursor_4(0x7f8b);
  SetCursor(hCursor);
  FUN_00404100(&LAB_0041ee10,param_1);
  return;
}


