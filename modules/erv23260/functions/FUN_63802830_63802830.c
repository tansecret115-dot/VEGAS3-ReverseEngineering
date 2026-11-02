/* Module: erv23260.dll
   Function: FUN_63802830
   Address: 63802830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63802830(void *this,uint param_1,uint param_2)

{
  if (*(int *)((int)this + 8) == 0x11) {
    if (((param_1 == 0x80) && (param_2 == 0x60)) || ((param_1 == 0xb0 && (param_2 == 0x90)))) {
      return 1;
    }
    if ((param_1 == 0x160) && (param_2 == 0x120)) {
      return 1;
    }
  }
  else if (((((0x1f < param_1) && (0x1f < param_2)) && ((param_1 & 0xfffffffc) == param_1)) &&
           (((param_2 & 0xfffffffc) == param_2 && (param_1 < 0x801)))) && (param_2 < 0x481)) {
    return 1;
  }
  return 0;
}


