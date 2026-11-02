/* Module: encn3260.dll
   Function: FUN_664945a0
   Address: 664945a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_664945a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *this_00;
  undefined4 *puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  this_00 = operator_new(0x10);
  if (this_00 != (void *)0x0) {
    puVar1 = FUN_664c0370(this_00,DAT_664df700);
    *(undefined4 **)this = puVar1;
    return this;
  }
  *(undefined4 *)this = 0;
  return this;
}


