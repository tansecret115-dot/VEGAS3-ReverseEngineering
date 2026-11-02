/* Module: 50comupd.exe
   Function: FUN_0100445c
   Address: 0100445c
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort FUN_0100445c(ushort param_1)

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


