/* Module: rmme3260.dll
   Function: FUN_6624ff10
   Address: 6624ff10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6624ff10(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 4) <= param_1) {
    FUN_6624fda0(this,param_1 + 1,0xffffffff);
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


