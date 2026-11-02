/* Module: 50comupd.exe
   Function: FUN_0100223a
   Address: 0100223a
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0100223a(LPCSTR param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  }
  else {
    uVar2 = DVar1 & 0x10;
  }
  return uVar2;
}


