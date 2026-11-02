/* Module: wmfplug2.dll
   Function: FUN_004051e0
   Address: 004051e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004051e0(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_0047baec;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  DVar1 = GetCurrentThreadId();
  *(undefined4 *)((int)this + 0x178) = 0xffffffff;
  *(DWORD *)((int)this + 0xc) = DVar1;
  *(undefined4 *)((int)this + 0x17c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  puVar3 = (undefined4 *)((int)this + 0x30);
  for (iVar2 = 0x4c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  return this;
}


