/* Module: vegas30.exe
   Function: FUN_004aa8a0
   Address: 004aa8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004aa8a0(byte param_1)

{
  return (param_1 & 8) != 0 ||
         ((param_1 & 0x20) != 0 ||
         ((param_1 & 0x10) != 0 || ((param_1 & 4) != 0 || (param_1 & 2) != 0)));
}


