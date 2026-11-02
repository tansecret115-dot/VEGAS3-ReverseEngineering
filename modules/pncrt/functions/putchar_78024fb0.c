/* Module: pncrt.dll
   Function: putchar
   Address: 78024fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl putchar(int _Ch)

{
  int iVar1;
  
                    /* 0x24fb0  682  putchar */
  iVar1 = _fputchar(_Ch);
  return iVar1;
}


