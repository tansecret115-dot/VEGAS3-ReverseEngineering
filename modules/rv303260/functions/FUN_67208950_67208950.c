/* Module: rv303260.dll
   Function: FUN_67208950
   Address: 67208950
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_67208950(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
            undefined1 param_5)

{
  if ((*(uint *)this & 0xf0000000) == 0) {
    FUN_67208920(this,param_1,param_2,param_4,param_5);
    return;
  }
  *(undefined1 *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 9) = param_2;
  *(undefined1 *)((int)this + 10) = param_3;
  *(undefined4 *)((int)this + 4) = 6;
  *(undefined4 *)((int)this + 0xb) = param_4;
  *(undefined1 *)((int)this + 0xf) = param_5;
  FUN_672084f0((int)this);
  return;
}


