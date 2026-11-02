/* Module: wmfdist2.exe
   Function: FUN_0100274b
   Address: 0100274b
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0100274b(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 1) == 0) {
    uVar1 = -(uint)((param_1 & 2) != 0) & 0x101;
  }
  else {
    uVar1 = 0x104;
  }
  return uVar1;
}


