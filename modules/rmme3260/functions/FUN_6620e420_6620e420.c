/* Module: rmme3260.dll
   Function: FUN_6620e420
   Address: 6620e420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6620e420(void *this,uint param_1,undefined4 param_2)

{
  *(undefined4 *)((param_1 & 0xffff) * 0x10 + 4 + *(int *)((int)this + 4)) = param_2;
  return;
}


