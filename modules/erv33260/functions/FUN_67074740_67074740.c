/* Module: erv33260.dll
   Function: FUN_67074740
   Address: 67074740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67074740(void *this,undefined4 *param_1)

{
  int iVar1;
  
  for (iVar1 = 10; this = (void *)((int)this + 4), iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)this;
    param_1 = param_1 + 1;
  }
  return;
}


