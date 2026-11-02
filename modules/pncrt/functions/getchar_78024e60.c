/* Module: pncrt.dll
   Function: getchar
   Address: 78024e60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl getchar(void)

{
  int iVar1;
  
  iVar1 = getc((FILE *)&_iob);
  return iVar1;
                    /* 0x24e60  627  getchar */
}


