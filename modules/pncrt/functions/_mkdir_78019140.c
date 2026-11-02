/* Module: pncrt.dll
   Function: _mkdir
   Address: 78019140
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mkdir(char *_Path)

{
  BOOL BVar1;
  uint uVar2;
  
                    /* 0x19140  396  _mkdir */
  BVar1 = CreateDirectoryA(_Path,(LPSECURITY_ATTRIBUTES)0x0);
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


