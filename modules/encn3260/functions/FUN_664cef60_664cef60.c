/* Module: encn3260.dll
   Function: FUN_664cef60
   Address: 664cef60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664cef60(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *this_00;
  
  *(undefined4 *)((int)this + 4) = param_1;
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_664ba900(puVar1);
  }
  *(undefined4 *)this = uVar2;
  this_00 = operator_new(0x1c);
  if (this_00 != (void *)0x0) {
    uVar2 = FUN_664bdbb0(this_00,10);
    *(undefined4 *)((int)this + 8) = uVar2;
    return this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


