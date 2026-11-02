/* Module: sfppack1.dll
   Function: FUN_5cdc3990
   Address: 5cdc3990
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdc3990(void *this,void *param_1,undefined4 param_2,int param_3)

{
  FUN_5ce01676(this,0,param_1,*(undefined4 *)(&DAT_5ce13a30 + param_3 * 8),
               *(undefined4 *)(&DAT_5ce13a34 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5ce13ab8;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5ce13aa8;
  return this;
}


