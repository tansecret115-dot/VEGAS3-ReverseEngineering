/* Module: pncrt.dll
   Function: getwc
   Address: 78026ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl getwc(FILE *_File)

{
  wint_t wVar1;
  
                    /* 0x26ba0  630  getwc */
  wVar1 = fgetwc(_File);
  return wVar1;
}


