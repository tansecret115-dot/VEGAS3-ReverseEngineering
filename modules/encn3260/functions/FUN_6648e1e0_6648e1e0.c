/* Module: encn3260.dll
   Function: FUN_6648e1e0
   Address: 6648e1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648e1e0(void *this,undefined4 param_1)

{
  FUN_6648d310(this,param_1);
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_664de358;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x76) = 0;
  *(undefined4 *)((int)this + 0x7b) = 0;
  *(undefined4 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x85) = 0;
  *(undefined4 *)((int)this + 0x89) = 0;
  *(undefined4 *)((int)this + 0x8d) = 0;
  *(undefined4 *)((int)this + 0x91) = 0;
  *(undefined4 *)((int)this + 0x72) = 1;
  *(undefined ***)this = &PTR_FUN_664de2e0;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_664de2c8;
  *(undefined4 *)((int)this + 0x58) = 0x10000;
  return this;
}


