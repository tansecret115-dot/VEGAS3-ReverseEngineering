/* Module: vegas30.exe
   Function: FUN_00539e30
   Address: 00539e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00539e30(undefined4 param_1)

{
  LPCSTR lpszFormat;
  UINT uFormat;
  
  lpszFormat = (LPCSTR)FUN_00538450(param_1);
  uFormat = RegisterClipboardFormatA(lpszFormat);
  SetClipboardData(uFormat,(HANDLE)0x0);
  return 0;
}


