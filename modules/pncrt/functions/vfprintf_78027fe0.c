/* Module: pncrt.dll
   Function: vfprintf
   Address: 78027fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl vfprintf(FILE *_File,char *_Format,va_list _ArgList)

{
  int iVar1;
  int iVar2;
  
                    /* 0x27fe0  739  vfprintf */
  FUN_780094a0((uint)_File);
  iVar1 = FUN_7800e8c0(&_File->_ptr);
  iVar2 = FUN_7800e9b0(_File,_Format,(undefined4 *)_ArgList);
  FUN_7800e970(iVar1,(int *)_File);
  FUN_78009510((uint)_File);
  return iVar2;
}


