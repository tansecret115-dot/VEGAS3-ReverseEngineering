/* Module: pncrt.dll
   Function: _wrename
   Address: 78019df0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wrename(wchar_t *_OldFilename,wchar_t *_NewFilename)

{
  BOOL BVar1;
  uint uVar2;
  
                    /* 0x19df0  544  _wrename */
  BVar1 = MoveFileW(_OldFilename,_NewFilename);
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


