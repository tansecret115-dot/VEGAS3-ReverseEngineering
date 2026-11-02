/* Module: pncrt.dll
   Function: putc
   Address: 78026c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl putc(int _Ch,FILE *_File)

{
  int iVar1;
  
                    /* 0x26c90  681  putc */
  iVar1 = fputc(_Ch,_File);
  return iVar1;
}


