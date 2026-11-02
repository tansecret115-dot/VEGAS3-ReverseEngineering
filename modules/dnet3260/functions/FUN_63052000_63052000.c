/* Module: dnet3260.dll
   Function: FUN_63052000
   Address: 63052000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63052000(void *this,ushort param_1)

{
  if (param_1 < 0xc) {
    *(ushort *)this = param_1;
    return 0;
  }
  return 0x80070057;
}


