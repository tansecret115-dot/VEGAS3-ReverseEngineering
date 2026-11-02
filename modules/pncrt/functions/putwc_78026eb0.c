/* Module: pncrt.dll
   Function: putwc
   Address: 78026eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl putwc(wchar_t _Ch,FILE *_File)

{
  wint_t wVar1;
  
                    /* 0x26eb0  684  putwc */
  wVar1 = fputwc(_Ch,_File);
  return wVar1;
}


