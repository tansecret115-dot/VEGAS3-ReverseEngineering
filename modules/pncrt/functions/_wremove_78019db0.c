/* Module: pncrt.dll
   Function: _wremove
   Address: 78019db0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wremove(wchar_t *_Filename)

{
  BOOL BVar1;
  uint uVar2;
  
                    /* 0x19db0  543  _wremove */
  BVar1 = DeleteFileW(_Filename);
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


