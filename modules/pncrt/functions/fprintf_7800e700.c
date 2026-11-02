/* Module: pncrt.dll
   Function: fprintf
   Address: 7800e700
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fprintf(FILE *_File,char *_Format,...)

{
  int iVar1;
  int iVar2;
  
                    /* 0xe700  610  fprintf */
  FUN_780094a0((uint)_File);
  iVar1 = FUN_7800e8c0(&_File->_ptr);
  iVar2 = FUN_7800e9b0(_File,_Format,(undefined4 *)&stack0x0000000c);
  FUN_7800e970(iVar1,(int *)_File);
  FUN_78009510((uint)_File);
  return iVar2;
}


