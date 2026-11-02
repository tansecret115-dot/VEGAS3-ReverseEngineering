/* Module: pncrt.dll
   Function: _chmod
   Address: 78018e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _chmod(char *_Filename,int _AccessMode)

{
  DWORD DVar1;
  BOOL BVar2;
  
                    /* 0x18e30  186  _chmod */
  DVar1 = GetFileAttributesA(_Filename);
  if (DVar1 != 0xffffffff) {
    if ((_AccessMode & 0x80U) == 0) {
      DVar1 = DVar1 | 1;
    }
    else {
      DVar1 = DVar1 & 0xfffffffe;
    }
    BVar2 = SetFileAttributesA(_Filename,DVar1);
    if (BVar2 != 0) {
      return 0;
    }
  }
  DVar1 = GetLastError();
  FUN_7800a870(DVar1);
  return -1;
}


