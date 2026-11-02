/* Module: encn3260.dll
   Function: FUN_6648cf90
   Address: 6648cf90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648cf90(void *this,undefined4 param_1)

{
  void *this_00;
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  this_00 = operator_new(0x18);
  if (this_00 != (void *)0x0) {
    uVar1 = FUN_664db520(this_00,10);
    *(undefined4 *)((int)this + 8) = uVar1;
    return this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


