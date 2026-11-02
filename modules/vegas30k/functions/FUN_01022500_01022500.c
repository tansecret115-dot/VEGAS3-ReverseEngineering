/* Module: vegas30k.dll
   Function: FUN_01022500
   Address: 01022500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01022500(int param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1 == 0xd) || (param_1 == 0xc)) || (((param_2 & 0x10) != 0 && (param_1 != 3)))) {
    uVar1 = 1;
  }
  return uVar1;
}


