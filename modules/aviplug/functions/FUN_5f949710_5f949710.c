/* Module: aviplug.dll
   Function: FUN_5f949710
   Address: 5f949710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f949710(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_5f9472f0(this,param_1);
  *(undefined4 *)((int)this + 0x2e8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2b8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2dc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2e0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2ec) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined ***)this = &PTR_FUN_5f9d80ec;
  *(undefined ***)((int)this + 0x198) = &PTR_LAB_5f9d80a4;
  puVar2 = (undefined4 *)((int)this + 0x308);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}


