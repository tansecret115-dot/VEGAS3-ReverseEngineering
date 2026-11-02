/* Module: encn3260.dll
   Function: FUN_664ce5d0
   Address: 664ce5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664ce5d0(void *this,undefined4 param_1)

{
  void *this_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  this_00 = operator_new(0x1c);
  if (this_00 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_664bdbb0(this_00,10);
  }
  *(undefined4 *)this = uVar1;
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_664ba900(puVar2);
  }
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = param_1;
  puVar2 = operator_new(4);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = FUN_664d6bb0(puVar2);
    *(undefined4 *)((int)this + 0xc) = uVar1;
    return this;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}


