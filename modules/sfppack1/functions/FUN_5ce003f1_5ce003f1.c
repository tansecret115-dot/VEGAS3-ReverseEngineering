/* Module: sfppack1.dll
   Function: FUN_5ce003f1
   Address: 5ce003f1
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5ce003f1(void *this,undefined4 param_1,void *param_2)

{
  FUN_5ce0039c((undefined4 *)((int)this + 4));
  if (param_2 == (void *)0x0) {
    param_2 = this;
  }
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


