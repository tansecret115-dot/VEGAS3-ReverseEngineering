/* Module: InstMsi-x86a.exe
   Function: FUN_01002248
   Address: 01002248
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01002248(LPCSTR param_1)

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


