/* Module: rmto3260.dll
   Function: FUN_662ed5e0
   Address: 662ed5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662ed5e0(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 4) <= param_1) {
    FUN_662ed470(this,param_1 + 1,0xffffffff);
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


