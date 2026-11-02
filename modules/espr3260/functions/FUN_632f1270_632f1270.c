/* Module: espr3260.dll
   Function: FUN_632f1270
   Address: 632f1270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 __thiscall FUN_632f1270(void *this,ushort param_1)

{
  if (3 < param_1) {
    return 1;
  }
  *(ushort *)((int)this + 0x3526c) = param_1;
  return 0;
}


