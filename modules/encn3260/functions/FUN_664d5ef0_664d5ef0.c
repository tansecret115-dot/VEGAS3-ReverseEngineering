/* Module: encn3260.dll
   Function: FUN_664d5ef0
   Address: 664d5ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * __thiscall FUN_664d5ef0(void *this,uint param_1)

{
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 1;
  FUN_664bb2c0((undefined4 *)((int)this + 0x18));
  *(uint *)((int)this + 0x24) = param_1;
  FUN_664d6000(this);
  return this;
}


