/* Module: sftrans1.dll
   Function: FUN_0046de30
   Address: 0046de30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0046df53) */

int __fastcall FUN_0046de30(int param_1)

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
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_005614d0;
  *(int *)(param_1 + 0xf0) = (int)&PTR_LAB_005568c4;
  *(undefined ***)(param_1 + 0xf4) = &PTR_LAB_005568b0;
  *(undefined ***)(param_1 + 0xf8) = &PTR_LAB_00556888;
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_00556870;
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_0055684c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c4));
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined **)(param_1 + 0x104) = &DAT_00561380;
  *(undefined4 *)(param_1 + 0x108) = 0x1450;
  *(undefined4 *)(param_1 + 0x10c) = 7;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
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
  *(undefined4 **)(param_1 + 0x140) = &DAT_00554eb0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  (**(code **)(*(int *)(param_1 + 0xf0) + 0x24))(param_1 + 0x1e0,*(undefined4 *)(param_1 + 0x104));
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41;
  return param_1;
}


