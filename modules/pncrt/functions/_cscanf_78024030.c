/* Module: pncrt.dll
   Function: _cscanf
   Address: 78024030
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _cscanf(char *_Format,...)

{
  int iVar1;
  
                    /* 0x24030  198  _cscanf */
  iVar1 = FUN_78024050((byte *)_Format,(undefined4 *)&stack0x00000008);
  return iVar1;
}


