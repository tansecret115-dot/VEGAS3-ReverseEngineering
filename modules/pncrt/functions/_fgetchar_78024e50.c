/* Module: pncrt.dll
   Function: _fgetchar
   Address: 78024e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _fgetchar(void)

{
  int iVar1;
  
                    /* 0x24e50  226  _fgetchar */
  iVar1 = getc((FILE *)&_iob);
  return iVar1;
}


