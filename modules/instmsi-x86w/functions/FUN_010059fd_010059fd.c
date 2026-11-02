/* Module: InstMsi-x86w.exe
   Function: FUN_010059fd
   Address: 010059fd
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010059fd(LPCSTR param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~DVar1 >> 4 & 1;
  }
  return uVar2;
}


