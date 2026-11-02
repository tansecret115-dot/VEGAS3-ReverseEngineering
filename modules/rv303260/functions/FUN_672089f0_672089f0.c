/* Module: rv303260.dll
   Function: FUN_672089f0
   Address: 672089f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_672089f0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_67205ca0(this);
  FUN_67208170((undefined4 *)((int)this + 0x32));
  *(undefined ***)this = &PTR_FUN_672132d8;
  puVar2 = (undefined4 *)((int)this + 0x92);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)((int)this + 0xac);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)((int)this + 0xda) = 0;
  FUN_6720e680();
  *(undefined4 *)((int)this + 0xd6) = param_1;
  *(int *)((int)this + 0xde) = DAT_672167cc;
  DAT_672167cc = DAT_672167cc + 1;
  *(undefined4 *)((int)this + 0xea) = 0;
  *(undefined4 *)((int)this + 0xee) = 6;
  *(undefined4 *)((int)this + 0x225) = 0;
  *(undefined4 *)((int)this + 0x229) = 0;
  *(undefined4 *)((int)this + 0x235) = 0;
  *(undefined4 *)((int)this + 0x196) = 0;
  *(undefined4 *)((int)this + 0xfa) = 999;
  *(undefined4 *)((int)this + 0x1a6) = 0;
  *(undefined4 *)((int)this + 0x219) = 0;
  *(undefined4 *)((int)this + 0xfe) = 0;
  *(undefined4 *)((int)this + 0x102) = 4000;
  *(undefined4 *)((int)this + 0xf2) = 0;
  *(undefined4 *)((int)this + 0xf6) = 0x402e0000;
  *(undefined4 *)((int)this + 0x19e) = 0;
  *(undefined4 *)((int)this + 0x1a2) = 0x402e0000;
  *(undefined4 *)((int)this + 0x17a) = 10000;
  *(undefined4 *)((int)this + 0x17e) = 1;
  *(undefined4 *)((int)this + 0x243) = 999;
  *(undefined4 *)((int)this + 0x23f) = 0;
  *(undefined4 *)((int)this + 0x247) = 200;
  *(undefined4 *)((int)this + 0x24b) = 0;
  *(undefined4 *)((int)this + 0x253) = 0;
  *(undefined4 *)((int)this + 0x1aa) = 0;
  *(undefined4 *)((int)this + 0x1ae) = 0x404e0000;
  *(undefined4 *)((int)this + 0x1b2) = 0;
  *(undefined4 *)((int)this + 0x1b6) = 0x40468000;
  *(undefined4 *)((int)this + 0x1ba) = 0;
  *(undefined4 *)((int)this + 0x1be) = 0x40468000;
  *(undefined4 *)((int)this + 0x1ca) = 0;
  *(undefined4 *)((int)this + 0x1ce) = 0x40240000;
  *(undefined4 *)((int)this + 0x1da) = 0;
  *(undefined4 *)((int)this + 0x1de) = 0x402a0000;
  *(undefined4 *)((int)this + 0x1e2) = 0;
  *(undefined4 *)((int)this + 0x1e6) = 0x40240000;
  *(undefined4 *)((int)this + 0x1c2) = 0;
  *(undefined1 *)((int)this + 0x1eb) = 0x1f;
  *(undefined1 *)((int)this + 0x1ec) = 2;
  *(undefined4 *)((int)this + 0x1ed) = 5000;
  *(undefined4 *)((int)this + 0x13a) = 0;
  *(undefined4 *)((int)this + 0x13e) = 0;
  *(undefined4 *)((int)this + 0x142) = 0;
  *(undefined4 *)((int)this + 0x146) = 0;
  *(undefined1 *)((int)this + 0x1ea) = 10;
  *(undefined4 *)((int)this + 0x1f1) = 0;
  *(undefined4 *)((int)this + 0x1f5) = 0x40100000;
  *(undefined4 *)((int)this + 0x1f9) = 0;
  *(undefined4 *)((int)this + 0x1fd) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x19a) = 0x32;
  *(undefined4 *)((int)this + 0x1c6) = 0;
  *(undefined4 *)((int)this + 0x201) = 0xffffffff;
  *(undefined4 *)((int)this + 0x205) = 0;
  *(undefined4 *)((int)this + 0x209) = 0;
  *(undefined4 *)((int)this + 0x231) = 1;
  *(undefined4 *)((int)this + 0x22d) = 0;
  *(undefined4 *)((int)this + 0x21d) = 0;
  *(undefined4 *)((int)this + 0x221) = 0;
  *(undefined1 *)((int)this + 0x239) = 2;
  *(undefined1 *)((int)this + 0x23a) = 2;
  *(undefined1 *)((int)this + 0x23b) = 2;
  *(undefined1 *)((int)this + 0x23c) = 0x1f;
  *(undefined1 *)((int)this + 0x23d) = 0x1f;
  *(undefined1 *)((int)this + 0x23e) = 0x1f;
  *(undefined4 *)((int)this + 0x11e) = 0;
  *(undefined4 *)((int)this + 0x11a) = 0;
  *(undefined4 *)((int)this + 0x122) = 0;
  *(undefined4 *)((int)this + 0x126) = 0;
  *(undefined4 *)((int)this + 0x12a) = 0;
  *(undefined4 *)((int)this + 0x112) = 0;
  *(undefined4 *)((int)this + 0x116) = 0;
  *(undefined4 *)((int)this + 0x176) = 0;
  *(undefined4 *)((int)this + 0x182) = 0;
  *(undefined4 *)((int)this + 0x186) = 0;
  *(undefined4 *)((int)this + 0x18a) = 0;
  *(undefined4 *)((int)this + 0x18e) = 0;
  *(undefined4 *)((int)this + 0x192) = 0;
  *(undefined4 *)((int)this + 0x12e) = 1;
  *(undefined4 *)((int)this + 0x132) = 1;
  *(undefined4 *)((int)this + 0x26f) = 1;
  *(undefined4 *)((int)this + 0x273) = 0;
  *(undefined4 *)((int)this + 0x277) = 0;
  *(undefined4 *)((int)this + 0x24f) = 0;
  *(undefined4 *)((int)this + 599) = 0;
  *(undefined4 *)((int)this + 0x25b) = 0;
  *(undefined4 *)((int)this + 0x25f) = 0;
  *(undefined4 *)((int)this + 0x263) = 0;
  *(undefined4 *)((int)this + 0x26b) = 0;
  *(undefined4 *)((int)this + 0x267) = 0;
  *(undefined4 *)((int)this + 0xca) = 0;
  *(undefined4 *)((int)this + 0xd2) = 0;
  *(undefined4 *)((int)this + 0xce) = 0;
  *(undefined4 *)((int)this + 0x10a) = 2;
  *(undefined4 *)((int)this + 0x106) = 2;
  *(undefined4 *)((int)this + 0x172) = 0;
  *(undefined4 *)((int)this + 0x136) = 100;
  puVar2 = (undefined4 *)((int)this + 0x14a);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}


