/* Module: vfplugs.dll
   Function: FUN_00407560
   Address: 00407560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00407560(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00414030((int)this);
  *(undefined ***)((int)this + 0xbc) = &PTR_LAB_00487454;
  *(undefined **)((int)this + 0xd4) = &DAT_00490c08;
  *(undefined **)((int)this + 0xd8) = &DAT_00490bf8;
  *(undefined **)((int)this + 0xdc) = &DAT_00490be8;
  *(undefined **)((int)this + 0xe0) = &DAT_00490bd8;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined ***)((int)this + 0xf0) = &PTR_LAB_00486e08;
  puVar2 = (undefined4 *)((int)this + 0xf8);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0x3ff00000;
  *(undefined ***)((int)this + 0x128) = &PTR_LAB_00487004;
  *(undefined4 *)((int)this + 0x130) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x140));
  *(undefined ***)this = &PTR_LAB_0048740c;
  *(undefined ***)((int)this + 8) = &PTR_LAB_004873d0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_004873c0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_004873ac;
  *(undefined ***)((int)this + 0xbc) = &PTR_LAB_0048736c;
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_00487358;
  *(undefined ***)((int)this + 0xe4) = &PTR_LAB_00487330;
  *(undefined ***)((int)this + 0xe8) = &PTR_LAB_00487320;
  *(undefined ***)((int)this + 0xec) = &PTR_LAB_00487304;
  *(undefined ***)((int)this + 0xf0) = &PTR_LAB_004872f0;
  *(undefined ***)((int)this + 0x120) = &PTR_LAB_004872c8;
  *(undefined ***)((int)this + 0x124) = &PTR_LAB_004872a4;
  *(undefined ***)((int)this + 0x128) = &PTR_LAB_0048728c;
  *(undefined ***)((int)this + 300) = &PTR_LAB_0048727c;
  *(undefined4 *)((int)this + 0x14) = param_1;
  return this;
}


