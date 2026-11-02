/* Module: rmme3260.dll
   Function: FUN_66262670
   Address: 66262670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66262670(void *this,undefined4 param_1)

{
  void *this_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  this_00 = operator_new(0x1c);
  if (this_00 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_66252680(this_00,10);
  }
  *(undefined4 *)this = uVar1;
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_662509f0(puVar2);
  }
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = param_1;
  puVar2 = operator_new(4);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = FUN_66206ea0(puVar2);
    *(undefined4 *)((int)this + 0xc) = uVar1;
    return this;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}


