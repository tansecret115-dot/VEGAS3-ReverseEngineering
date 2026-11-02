/* Module: encn3260.dll
   Function: FUN_664c3c20
   Address: 664c3c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c3c20(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 4) <= param_1) {
    FUN_664c3ab0(this,param_1 + 1,0xffffffff);
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


