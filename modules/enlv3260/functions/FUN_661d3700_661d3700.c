/* Module: enlv3260.dll
   Function: FUN_661d3700
   Address: 661d3700
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_661d3700(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = operator_new(0xc);
  }
  else {
    *(undefined4 *)((int)this + 0xc) = *puVar1;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar1[1] = param_1;
  *puVar1 = param_2;
  puVar1[2] = 0;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


