/* Module: qt4plug.dll
   Function: FUN_5f51ba00
   Address: 5f51ba00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f51ba00(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f596928;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined ***)this = &PTR_LAB_5f5968e0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f5968d0;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0x14) = DVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  puVar3 = (undefined4 *)((int)this + 0x50);
  for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  return this;
}


