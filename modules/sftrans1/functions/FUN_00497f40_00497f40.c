/* Module: sftrans1.dll
   Function: FUN_00497f40
   Address: 00497f40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00498063) */

int __fastcall FUN_00497f40(int param_1)

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
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_00563d3c;
  *(int *)(param_1 + 0xf0) = (int)&PTR_LAB_005575a4;
  *(undefined ***)(param_1 + 0xf4) = &PTR_LAB_00557590;
  *(undefined ***)(param_1 + 0xf8) = &PTR_LAB_00557568;
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_00557550;
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_0055752c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17c));
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined **)(param_1 + 0x104) = &DAT_00563ce8;
  *(undefined4 *)(param_1 + 0x108) = 0x1658;
  *(undefined4 *)(param_1 + 0x10c) = 7;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
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
  *(undefined4 **)(param_1 + 0x140) = &DAT_00555030;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  (**(code **)(*(int *)(param_1 + 0xf0) + 0x24))(param_1 + 0x194,*(undefined4 *)(param_1 + 0x104));
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x130) = 1;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x2000000;
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
  return param_1;
}


