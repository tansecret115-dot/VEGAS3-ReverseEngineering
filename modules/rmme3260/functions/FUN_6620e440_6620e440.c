/* Module: rmme3260.dll
   Function: FUN_6620e440
   Address: 6620e440
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6620e440(void *this,int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)((param_2 & 0xffff) * 0x10 + 8 + *(int *)((int)this + 4)) = 1;
  }
  return;
}


