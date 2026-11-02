/* Module: aviplug.dll
   Function: FUN_5f943660
   Address: 5f943660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f943660(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined ***)this = &PTR_LAB_5f9d7d78;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0x84) = DVar1;
  puVar3 = (undefined4 *)((int)this + 0xc4);
  for (iVar2 = 0x33; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return this;
}


