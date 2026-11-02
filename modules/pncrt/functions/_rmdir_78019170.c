/* Module: pncrt.dll
   Function: _rmdir
   Address: 78019170
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _rmdir(char *_Path)

{
  BOOL BVar1;
  uint uVar2;
  
                    /* 0x19170  419  _rmdir */
  BVar1 = RemoveDirectoryA(_Path);
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


