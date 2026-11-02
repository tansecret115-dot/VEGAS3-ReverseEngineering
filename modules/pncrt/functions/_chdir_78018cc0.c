/* Module: pncrt.dll
   Function: _chdir
   Address: 78018cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _chdir(char *_Path)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  CHAR local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  uint local_108 [66];
  
                    /* 0x18cc0  183  _chdir */
  BVar2 = SetCurrentDirectoryA(_Path);
  if (BVar2 != 0) {
    DVar3 = GetCurrentDirectoryA(0x105,(LPSTR)local_108);
    if (DVar3 != 0) {
      cVar1 = (char)local_108[0];
      if (((cVar1 == '\\') || (cVar1 == '/')) && (cVar1 == (char)(local_108[0] >> 8))) {
        return 0;
      }
      local_10c = '=';
      uVar4 = _mbctoupper(local_108[0] & 0xff);
      local_10b = (undefined1)uVar4;
      local_10a = 0x3a;
      local_109 = 0;
      BVar2 = SetEnvironmentVariableA(&local_10c,(LPCSTR)local_108);
      if (BVar2 != 0) {
        return 0;
      }
    }
  }
  DVar3 = GetLastError();
  FUN_7800a870(DVar3);
  return -1;
}


