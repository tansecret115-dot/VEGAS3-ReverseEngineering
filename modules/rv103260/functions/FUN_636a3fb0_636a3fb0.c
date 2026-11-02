/* Module: rv103260.dll
   Function: FUN_636a3fb0
   Address: 636a3fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_636a3fb0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_636a2ef0(this);
  *(undefined ***)this = &PTR_FUN_636a7250;
  puVar2 = (undefined4 *)((int)this + 0x32);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0xda) = 0;
  *(undefined4 *)((int)this + 0xe2) = 0;
  *(undefined4 *)((int)this + 0xea) = 0;
  *(undefined4 *)((int)this + 0xf2) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x9a) = 0;
  *(undefined4 *)((int)this + 0x9e) = 0;
  *(undefined4 *)((int)this + 0xa2) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0xae) = 0;
  *(undefined4 *)((int)this + 0xb2) = 0;
  *(undefined4 *)((int)this + 0xb6) = 0;
  *(undefined4 *)((int)this + 0xba) = 0;
  *(undefined4 *)((int)this + 0xbe) = 0;
  *(undefined4 *)((int)this + 0xc2) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0xc6) = 0;
  *(undefined4 *)((int)this + 0xde) = 0;
  *(undefined4 *)((int)this + 0xe6) = 0;
  *(undefined4 *)((int)this + 0xee) = 0;
  *(undefined4 *)((int)this + 0xf6) = 0;
  *(undefined4 *)((int)this + 0x106) = 0;
  *(undefined4 *)((int)this + 0x10a) = 0;
  *(undefined4 *)((int)this + 0x6c) = param_1;
  *(undefined4 *)((int)this + 0xca) = 2;
  *(undefined4 *)((int)this + 0xfa) = 3;
  return this;
}


