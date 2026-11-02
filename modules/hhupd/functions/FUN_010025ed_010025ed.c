/* Module: hhupd.exe
   Function: FUN_010025ed
   Address: 010025ed
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010025ed(uint param_1)

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


