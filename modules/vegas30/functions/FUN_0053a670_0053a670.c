/* Module: vegas30.exe
   Function: FUN_0053a670
   Address: 0053a670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053a670(undefined4 param_1)

{
  LPCSTR lpszFormat;
  UINT format;
  
  lpszFormat = (LPCSTR)FUN_00538450(param_1);
  format = RegisterClipboardFormatA(lpszFormat);
  IsClipboardFormatAvailable(format);
  return;
}


