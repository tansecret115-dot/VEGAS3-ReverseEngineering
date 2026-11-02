/* Module: encn3260.dll
   Function: FUN_664934d0
   Address: 664934d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664934d0(void *this,undefined4 param_1)

{
  FUN_6648d310(this,param_1);
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_664de358;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x75) = 0;
  *(undefined4 *)((int)this + 0x79) = 0;
  *(undefined4 *)((int)this + 0x7d) = 0;
  *(undefined4 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x85) = 0;
  *(undefined4 *)((int)this + 0x89) = 0;
  *(undefined ***)this = &PTR_FUN_664de770;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_664de758;
  *(undefined4 *)((int)this + 0x58) = 0xff00;
  return this;
}


