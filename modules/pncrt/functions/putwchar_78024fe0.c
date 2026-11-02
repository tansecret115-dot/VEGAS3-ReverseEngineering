/* Module: pncrt.dll
   Function: putwchar
   Address: 78024fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl putwchar(wchar_t _Ch)

{
  wint_t wVar1;
  
                    /* 0x24fe0  685  putwchar */
  wVar1 = _fputwchar(_Ch);
  return wVar1;
}


