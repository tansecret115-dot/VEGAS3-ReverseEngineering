/* Module: pncrt.dll
   Function: _fgetwchar
   Address: 78024e70
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl _fgetwchar(void)

{
  wint_t wVar1;
  
                    /* 0x24e70  227  _fgetwchar */
  wVar1 = fgetwc((FILE *)&_iob);
  return wVar1;
}


