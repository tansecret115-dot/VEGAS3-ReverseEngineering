/* Module: encn3260.dll
   Function: FUN_664c0220
   Address: 664c0220
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c0220(void *this,uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)this + (param_1 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  return;
}


