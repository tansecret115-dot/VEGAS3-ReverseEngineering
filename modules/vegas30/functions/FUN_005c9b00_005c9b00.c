/* Module: vegas30.exe
   Function: FUN_005c9b00
   Address: 005c9b00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005c9b00(int param_1)

{
  undefined1 uVar1;
  
  if (((param_1 == 2) || (param_1 == 4)) || (param_1 == 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return (CONCAT11((char)((((-(DAT_0064a550 != 0) & 0xfe) + 2 & 3) << 0xc) >> 8),uVar1) | 0xa00) <<
         0x10 | (DAT_0064a528 & 1) << 8;
}


