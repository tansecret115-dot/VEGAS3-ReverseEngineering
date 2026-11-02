/* Module: pncrt.dll
   Function: getwchar
   Address: 78024e80
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl getwchar(void)

{
  wint_t wVar1;
  
  wVar1 = fgetwc((FILE *)&_iob);
  return wVar1;
                    /* 0x24e80  631  getwchar */
}


