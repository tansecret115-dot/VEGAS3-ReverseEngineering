/* Module: erv33260.dll
   Function: FUN_67072af0
   Address: 67072af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_67072af0(uint param_1,uint param_2)

{
  if ((((0x1f < param_1) && (0x1f < param_2)) && ((param_1 & 0xfffffffc) == param_1)) &&
     ((((param_2 & 0xfffffffc) == param_2 && (param_1 < 0x801)) && (param_2 < 0x481)))) {
    return 1;
  }
  return 0;
}


