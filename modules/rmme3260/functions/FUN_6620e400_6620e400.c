/* Module: rmme3260.dll
   Function: FUN_6620e400
   Address: 6620e400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6620e400(void *this,uint param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 4) + 4 + (param_1 & 0xffff) * 0x10);
}


