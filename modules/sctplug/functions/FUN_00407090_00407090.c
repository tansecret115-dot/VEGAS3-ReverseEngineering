/* Module: sctplug.dll
   Function: FUN_00407090
   Address: 00407090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00407090(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_00432670;
  *(undefined4 *)((int)this + 0x1c0) = param_1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined ***)this = &PTR_LAB_0043264c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00432634;
  puVar2 = (undefined4 *)((int)this + 0x1d4);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 500);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined2 *)((int)this + 0x228) = 0;
  return this;
}


