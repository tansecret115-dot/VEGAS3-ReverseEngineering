/* Module: 50comupd.exe
   Function: FUN_01002627
   Address: 01002627
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01002627(uint param_1)

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


