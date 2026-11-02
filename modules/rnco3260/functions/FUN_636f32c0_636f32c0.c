/* Module: rnco3260.dll
   Function: FUN_636f32c0
   Address: 636f32c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_636f32c0(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(code **)((int)this + 8) != (code *)0x0) {
    (**(code **)((int)this + 8))
              (param_2,*(undefined4 *)((int)this + 0x38),*(undefined4 *)((int)this + 0x3c),
               *(undefined4 *)((int)this + 0x2c),*(undefined4 *)((int)this + 0x30),
               *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38),
               *(undefined4 *)((int)this + 0x3c),param_1,*(undefined4 *)((int)this + 0x10),
               *(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x28),
               *(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),
               *(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24));
  }
  return;
}


