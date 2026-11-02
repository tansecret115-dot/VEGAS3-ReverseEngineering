/* Module: pncrt.dll
   Function: _fputchar
   Address: 78024f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _fputchar(int _Ch)

{
  int iVar1;
  
                    /* 0x24f90  245  _fputchar */
  iVar1 = putc(_Ch,(FILE *)&DAT_7803f818);
  return iVar1;
}


