/* Module: erv23260.dll
   Function: FUN_63807550
   Address: 63807550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63807550(void *this,uint *param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(*(int *)((int)this + 0x8a8) + 0x358);
  if (puVar1 == (uint *)0x0) {
    return 1;
  }
  FUN_637f4f40(puVar1,param_1);
  return 0;
}


