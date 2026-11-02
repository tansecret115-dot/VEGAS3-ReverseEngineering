/* Module: 50comupd.exe
   Function: FUN_01005a34
   Address: 01005a34
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01005a34(LPCSTR param_1)

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


