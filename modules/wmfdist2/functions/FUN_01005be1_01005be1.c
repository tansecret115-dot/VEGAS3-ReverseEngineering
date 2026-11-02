/* Module: wmfdist2.exe
   Function: FUN_01005be1
   Address: 01005be1
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01005be1(LPCSTR param_1)

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


