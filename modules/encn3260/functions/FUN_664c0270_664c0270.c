/* Module: encn3260.dll
   Function: FUN_664c0270
   Address: 664c0270
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_664c0270(void *this,uint param_1)

{
  return (1 << ((byte)param_1 & 0x1f) & *(uint *)(*(int *)this + (param_1 >> 5) * 4)) != 0;
}


