/* Module: pncrt.dll
   Function: vfwprintf
   Address: 78028030
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl vfwprintf(FILE *_File,wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  int iVar2;
  
                    /* 0x28030  740  vfwprintf */
  FUN_780094a0((uint)_File);
  iVar1 = FUN_7800e8c0(&_File->_ptr);
  iVar2 = FUN_780285a0(_File,_Format,(undefined4 *)_ArgList);
  FUN_7800e970(iVar1,(int *)_File);
  FUN_78009510((uint)_File);
  return iVar2;
}


