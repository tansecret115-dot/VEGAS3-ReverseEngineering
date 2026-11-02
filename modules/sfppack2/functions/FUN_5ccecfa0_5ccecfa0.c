/* Module: sfppack2.dll
   Function: FUN_5ccecfa0
   Address: 5ccecfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccecfa0(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cd404f6(this,0,param_1,*(undefined4 *)(&DAT_5cd52fc0 + param_3 * 8),
               *(undefined4 *)(&DAT_5cd52fc4 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_LAB_5cd533d0;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cd533c0;
  return this;
}


