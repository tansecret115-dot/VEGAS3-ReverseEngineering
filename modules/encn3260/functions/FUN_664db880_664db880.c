/* Module: encn3260.dll
   Function: FUN_664db880
   Address: 664db880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664db880(void *this,int param_1)

{
  *(int *)this = param_1 / 1000 + -0x7c558180;
  *(uint *)((int)this + 4) =
       (param_1 % 1000) * 0x426800 - ((uint)((param_1 % 1000) * 0x1bd8e8) >> 5);
  return;
}


