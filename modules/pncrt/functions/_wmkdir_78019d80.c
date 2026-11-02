/* Module: pncrt.dll
   Function: _wmkdir
   Address: 78019d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wmkdir(wchar_t *_Path)

{
  BOOL BVar1;
  uint uVar2;
  
                    /* 0x19d80  536  _wmkdir */
  BVar1 = CreateDirectoryW(_Path,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_7800a870(uVar2);
    return -1;
  }
  return 0;
}


