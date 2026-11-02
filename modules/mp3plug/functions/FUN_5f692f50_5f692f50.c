/* Module: mp3plug.dll
   Function: FUN_5f692f50
   Address: 5f692f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f692f50(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f72cf40;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_5f72cef8;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f72cee8;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xea4) = 0;
  *(undefined4 *)((int)this + 0xeac) = 0;
  *(undefined4 *)((int)this + 0xea8) = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0x14) = DVar1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0xed0) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  puVar3 = (undefined4 *)((int)this + 0x44);
  for (iVar2 = 0x397; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  return this;
}


