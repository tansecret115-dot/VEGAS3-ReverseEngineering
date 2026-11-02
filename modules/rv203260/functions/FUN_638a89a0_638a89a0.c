/* Module: rv203260.dll
   Function: FUN_638a89a0
   Address: 638a89a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_638a89a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_638a58d0(this);
  FUN_638a8120((undefined4 *)((int)this + 0x32));
  *(undefined ***)this = &PTR_FUN_638b32d8;
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
  FUN_638af110();
  *(undefined4 *)((int)this + 0xd6) = param_1;
  *(int *)((int)this + 0xde) = DAT_638b66dc;
  DAT_638b66dc = DAT_638b66dc + 1;
  *(undefined4 *)((int)this + 0xea) = 0;
  *(undefined4 *)((int)this + 0xee) = 6;
  *(undefined4 *)((int)this + 0x235) = 0;
  *(undefined4 *)((int)this + 0x19e) = 0;
  *(undefined4 *)((int)this + 0xfa) = 999;
  *(undefined4 *)((int)this + 0x1ae) = 0;
  *(undefined4 *)((int)this + 0x225) = 0;
  *(undefined4 *)((int)this + 0xfe) = 0;
  *(undefined4 *)((int)this + 0x102) = 4000;
  *(undefined4 *)((int)this + 0xf2) = 0;
  *(undefined4 *)((int)this + 0xf6) = 0x402e0000;
  *(undefined4 *)((int)this + 0x1a6) = 0;
  *(undefined4 *)((int)this + 0x1aa) = 0x402e0000;
  *(undefined4 *)((int)this + 0x182) = 10000;
  *(undefined4 *)((int)this + 0x186) = 1;
  *(undefined4 *)((int)this + 0x24b) = 999;
  *(undefined4 *)((int)this + 0x247) = 0;
  *(undefined4 *)((int)this + 0x24f) = 200;
  *(undefined4 *)((int)this + 0x253) = 0;
  *(undefined4 *)((int)this + 0x25b) = 0;
  *(undefined4 *)((int)this + 0x1b2) = 0;
  *(undefined4 *)((int)this + 0x1b6) = 0x402e0000;
  *(undefined4 *)((int)this + 0x1ba) = 0;
  *(undefined4 *)((int)this + 0x1be) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x1c2) = 0;
  *(undefined4 *)((int)this + 0x1c6) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x1d2) = 0;
  *(undefined4 *)((int)this + 0x1d6) = 0x40240000;
  *(undefined4 *)((int)this + 0x1e2) = 0;
  *(undefined4 *)((int)this + 0x1e6) = 0x402e0000;
  *(undefined4 *)((int)this + 0x1ea) = 0;
  *(undefined4 *)((int)this + 0x1ee) = 0x40240000;
  *(undefined4 *)((int)this + 0x1ca) = 0;
  *(undefined1 *)((int)this + 499) = 0x1f;
  *(undefined1 *)((int)this + 500) = 2;
  *(undefined4 *)((int)this + 0x1f5) = 5000;
  *(undefined1 *)((int)this + 0x1f2) = 10;
  *(undefined4 *)((int)this + 0x1f9) = 0;
  *(undefined4 *)((int)this + 0x1fd) = 0x40100000;
  *(undefined4 *)((int)this + 0x201) = 0;
  *(undefined4 *)((int)this + 0x205) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x1a2) = 0x32;
  *(undefined4 *)((int)this + 0x1ce) = 0;
  *(undefined4 *)((int)this + 0x209) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20d) = 0;
  *(undefined4 *)((int)this + 0x211) = 0;
  *(undefined4 *)((int)this + 0x215) = 0;
  *(undefined4 *)((int)this + 0x23d) = 1;
  *(undefined4 *)((int)this + 0x239) = 0;
  *(undefined4 *)((int)this + 0x229) = 0;
  *(undefined4 *)((int)this + 0x22d) = 0;
  *(undefined1 *)((int)this + 0x241) = 2;
  *(undefined1 *)((int)this + 0x242) = 2;
  *(undefined1 *)((int)this + 0x243) = 2;
  *(undefined1 *)((int)this + 0x244) = 0x1f;
  *(undefined1 *)((int)this + 0x245) = 0x1f;
  *(undefined1 *)((int)this + 0x246) = 0x1f;
  *(undefined4 *)((int)this + 0x122) = 0;
  *(undefined4 *)((int)this + 0x11e) = 0;
  *(undefined4 *)((int)this + 0x126) = 0;
  *(undefined4 *)((int)this + 0x12a) = 0;
  *(undefined4 *)((int)this + 0x12e) = 0;
  *(undefined4 *)((int)this + 0x112) = 0;
  *(undefined4 *)((int)this + 0x116) = 0;
  *(undefined4 *)((int)this + 0x11a) = 0;
  *(undefined4 *)((int)this + 0x17e) = 0;
  *(undefined4 *)((int)this + 0x18a) = 0;
  *(undefined4 *)((int)this + 0x18e) = 0;
  *(undefined4 *)((int)this + 0x192) = 0;
  *(undefined4 *)((int)this + 0x196) = 0;
  *(undefined4 *)((int)this + 0x19a) = 0;
  *(undefined4 *)((int)this + 0x132) = 1;
  *(undefined4 *)((int)this + 0x136) = 1;
  *(undefined4 *)((int)this + 0x27f) = 1;
  *(undefined4 *)((int)this + 0x288) = 1;
  *(undefined4 *)((int)this + 0x2a0) = 1;
  *(undefined4 *)((int)this + 0x2a4) = 1;
  *(undefined4 *)((int)this + 0x2a8) = 1;
  *(undefined4 *)((int)this + 0x277) = 0;
  *(undefined4 *)((int)this + 0x27b) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 599) = 0;
  *(undefined4 *)((int)this + 0x25f) = 0;
  *(undefined4 *)((int)this + 0x263) = 0;
  *(undefined4 *)((int)this + 0x267) = 0;
  *(undefined4 *)((int)this + 0x26b) = 0;
  *(undefined4 *)((int)this + 0x273) = 0;
  *(undefined4 *)((int)this + 0x26f) = 0;
  *(undefined4 *)((int)this + 0x13a) = 100;
  *(undefined4 *)((int)this + 0x13e) = 100;
  *(undefined4 *)((int)this + 0xca) = 0;
  *(undefined4 *)((int)this + 0xd2) = 0;
  *(undefined4 *)((int)this + 0xce) = 0;
  *(undefined4 *)((int)this + 0x10a) = 2;
  *(undefined4 *)((int)this + 0x106) = 2;
  *(undefined4 *)((int)this + 0x231) = 0;
  *(undefined4 *)((int)this + 0x17a) = 0;
  *(undefined1 *)((int)this + 0x283) = 4;
  puVar2 = (undefined4 *)((int)this + 0x152);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}


