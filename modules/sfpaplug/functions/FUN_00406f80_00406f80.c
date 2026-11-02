/* Module: sfpaplug.dll
   Function: FUN_00406f80
   Address: 00406f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00406f80(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_0044e7e0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  puVar3 = (undefined4 *)((int)this + 0x80);
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0xd8) = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0xc) = DVar1;
  *(undefined4 *)((int)this + 0x298) = 0xfffffffe;
  *(undefined4 *)((int)this + 0x2a0) = 0xfffffffe;
  *(undefined4 *)((int)this + 0x29c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2a4) = 0xffffffff;
  return this;
}


