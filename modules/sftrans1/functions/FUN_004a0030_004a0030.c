/* Module: sftrans1.dll
   Function: FUN_004a0030
   Address: 004a0030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a0153) */

int __fastcall FUN_004a0030(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0045be10();
  *(undefined ***)(param_1 + 0xbc) = &PTR_LAB_0055afb8;
  *(undefined **)(param_1 + 0xd4) = &DAT_0056f728;
  *(undefined **)(param_1 + 0xd8) = &DAT_0056f718;
  *(undefined **)(param_1 + 0xdc) = &DAT_0056f708;
  *(undefined **)(param_1 + 0xe0) = &DAT_0056f6f8;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  uVar1 = DAT_00577258;
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_005648ac;
  *(int *)(param_1 + 0xf0) = (int)&PTR_LAB_00557ae4;
  *(undefined ***)(param_1 + 0xf4) = &PTR_LAB_00557ad0;
  *(undefined ***)(param_1 + 0xf8) = &PTR_LAB_00557aa8;
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_00557a90;
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_00557a6c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1cc));
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined **)(param_1 + 0x104) = &DAT_00564740;
  *(undefined4 *)(param_1 + 0x108) = 0x16a8;
  *(undefined4 *)(param_1 + 0x10c) = 7;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x118);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x13c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 **)(param_1 + 0x140) = &DAT_00555050;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  (**(code **)(*(int *)(param_1 + 0xf0) + 0x24))(param_1 + 0x1e4,*(undefined4 *)(param_1 + 0x104));
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x130) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
  return param_1;
}


