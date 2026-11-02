/* Module: pncrt.dll
   Function: fwprintf
   Address: 78027440
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fwprintf(FILE *_File,wchar_t *_Format,...)

{
  int iVar1;
  int iVar2;
  
                    /* 0x27440  623  fwprintf */
  FUN_780094a0((uint)_File);
  iVar1 = FUN_7800e8c0(&_File->_ptr);
  iVar2 = FUN_780285a0(_File,_Format,(undefined4 *)&stack0x0000000c);
  FUN_7800e970(iVar1,(int *)_File);
  FUN_78009510((uint)_File);
  return iVar2;
}


