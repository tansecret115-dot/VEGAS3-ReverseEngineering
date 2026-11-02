/* Module: sfmarket2.dll
   Function: FUN_00407890
   Address: 00407890
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407890(int param_1)

{
  if (*(short *)(param_1 + 2) == -1) {
    return param_1 + 0x10;
  }
  return param_1 + 8;
}


