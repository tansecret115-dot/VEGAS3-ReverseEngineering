/* Module: pncrt.dll
   Function: _wrmdir
   Address: 78019e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wrmdir(wchar_t *_Path)

{
  BOOL BVar1;
  uint uVar2;
  
                    /* 0x19e30  546  _wrmdir */
  BVar1 = RemoveDirectoryW(_Path);
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


