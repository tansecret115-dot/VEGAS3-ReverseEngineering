/* Module: hhupd.exe
   Function: FUN_010043a0
   Address: 010043a0
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort FUN_010043a0(ushort param_1)

{
  ushort uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = param_1 & 0x27;
  }
  return uVar1;
}


