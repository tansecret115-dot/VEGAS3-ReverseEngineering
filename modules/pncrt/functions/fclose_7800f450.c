/* Module: pncrt.dll
   Function: fclose
   Address: 7800f450
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fclose(FILE *_File)

{
  int iVar1;
  
                    /* 0xf450  598  fclose */
  if ((_File->_flag & 0x40) != 0) {
    _File->_flag = 0;
    return -1;
  }
  FUN_780094a0((uint)_File);
  iVar1 = FUN_7800f490((int *)_File);
  FUN_78009510((uint)_File);
  return iVar1;
}


