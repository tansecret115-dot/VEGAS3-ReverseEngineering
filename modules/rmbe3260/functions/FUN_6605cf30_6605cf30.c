/* Module: rmbe3260.dll
   Function: FUN_6605cf30
   Address: 6605cf30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6605cf30(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 4) <= param_1) {
    FUN_6605cdc0(this,param_1 + 1,0xffffffff);
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


