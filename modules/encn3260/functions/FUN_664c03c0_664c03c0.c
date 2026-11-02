/* Module: encn3260.dll
   Function: FUN_664c03c0
   Address: 664c03c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c03c0(void *this,uint param_1)

{
  undefined4 *puVar1;
  void *this_00;
  
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_664c3a90(puVar1);
  }
  *(void **)this = this_00;
  FUN_664c3ab0(this_00,param_1,0xffffffff);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 1;
  return;
}


