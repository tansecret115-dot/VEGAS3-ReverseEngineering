/* Module: pncrt.dll
   Function: _fputwchar
   Address: 78024fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl _fputwchar(wchar_t _Ch)

{
  wint_t wVar1;
  
                    /* 0x24fc0  246  _fputwchar */
  wVar1 = fputwc(_Ch,(FILE *)&DAT_7803f818);
  return wVar1;
}


