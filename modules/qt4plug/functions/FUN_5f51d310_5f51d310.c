/* Module: qt4plug.dll
   Function: FUN_5f51d310
   Address: 5f51d310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f51d310(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined ***)this = &PTR_LAB_5f596a00;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  DVar1 = GetCurrentThreadId();
  *(undefined4 *)((int)this + 400) = 0xffffffff;
  *(DWORD *)((int)this + 0x10) = DVar1;
  *(undefined4 *)((int)this + 0x194) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  puVar3 = (undefined4 *)((int)this + 0x40);
  for (iVar2 = 0x51; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 1;
  return this;
}


