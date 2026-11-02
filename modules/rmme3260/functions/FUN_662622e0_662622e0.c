/* Module: rmme3260.dll
   Function: FUN_662622e0
   Address: 662622e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662622e0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *this_00;
  
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_662509f0(puVar1);
  }
  *(undefined4 *)this = uVar2;
  this_00 = operator_new(0x1c);
  if (this_00 != (void *)0x0) {
    uVar2 = FUN_66252680(this_00,10);
    *(undefined4 *)((int)this + 8) = uVar2;
    *(undefined4 *)((int)this + 4) = param_1;
    return this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}


