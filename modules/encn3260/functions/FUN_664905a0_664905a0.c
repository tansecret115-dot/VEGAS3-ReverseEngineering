/* Module: encn3260.dll
   Function: FUN_664905a0
   Address: 664905a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_664905a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  FUN_6648d310(this,param_2);
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_664de358;
  *(undefined4 *)((int)this + 0x82) = 1000;
  *(undefined4 *)((int)this + 0xae) = 1000;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x86) = 200;
  *(undefined4 *)((int)this + 0x8e) = 0;
  *(undefined4 *)((int)this + 0x92) = 0;
  *(undefined4 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x9a) = 0;
  *(undefined4 *)((int)this + 0x9e) = 0;
  *(undefined4 *)((int)this + 0xa2) = 0;
  *(undefined4 *)((int)this + 0xa6) = 0;
  *(undefined4 *)((int)this + 0xaa) = 0;
  *(undefined4 *)((int)this + 0xb2) = param_3;
  *(undefined4 *)((int)this + 0xb6) = 0;
  *(undefined4 *)((int)this + 0xba) = 0;
  *(undefined4 *)((int)this + 0xbe) = 0;
  *(undefined4 *)((int)this + 0xc2) = param_1;
  *(undefined4 *)((int)this + 0xc6) = param_4;
  *(undefined4 *)((int)this + 0xca) = 0;
  *(undefined ***)this = &PTR_FUN_664de6c0;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_664de6a8;
  *(undefined4 *)((int)this + 0x58) = 0xff00;
  puVar1 = operator_new(8);
  *(undefined4 **)((int)this + 0x8a) = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(*(int *)((int)this + 0x8a) + 4) = 0;
  return this;
}


