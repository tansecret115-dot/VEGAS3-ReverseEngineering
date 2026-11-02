/* Module: mp3plug.dll
   Function: FUN_5f691f70
   Address: 5f691f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f691f70(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x1080) = 0;
  *(undefined4 *)((int)this + 0x1084) = 0;
  *(undefined ***)this = &PTR_LAB_5f72ce80;
  *(undefined2 *)((int)this + 0x1c) = 0;
  puVar2 = (undefined4 *)((int)this + 0x228);
  for (iVar1 = 0x395; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x107a) = 8;
  return this;
}


