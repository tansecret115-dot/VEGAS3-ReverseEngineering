/* Module: InstMsi-x86w.exe
   Function: FUN_010025f7
   Address: 010025f7
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010025f7(uint param_1)

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


