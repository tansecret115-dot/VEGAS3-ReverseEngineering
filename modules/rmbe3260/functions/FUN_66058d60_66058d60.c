/* Module: rmbe3260.dll
   Function: FUN_66058d60
   Address: 66058d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66058d60(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar1[1] = param_1;
  *puVar1 = param_2;
  puVar1[2] = 0;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}


