/* Module: wmfplug2.dll
   Function: FUN_00403b60
   Address: 00403b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00403b60(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_0047bad8;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = &PTR_LAB_0047ba90;
  *(undefined ***)((int)this + 4) = &PTR_LAB_0047ba80;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  DVar1 = GetCurrentThreadId();
  *(undefined4 *)((int)this + 0x1b0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(DWORD *)((int)this + 0x14) = DVar1;
  *(undefined4 *)((int)this + 0x1b4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  puVar3 = (undefined4 *)((int)this + 0x50);
  for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)((int)this + 0x16c);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x1e4) = 0;
  return this;
}


