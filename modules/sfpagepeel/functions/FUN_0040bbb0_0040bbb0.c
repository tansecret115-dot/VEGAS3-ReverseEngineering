/* Module: sfpagepeel.dll
   Function: FUN_0040bbb0
   Address: 0040bbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040bccf) */

int __fastcall FUN_0040bbb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0040edd0(param_1);
  *(undefined ***)(param_1 + 0xbc) = &PTR_LAB_004707e8;
  *(undefined **)(param_1 + 0xd4) = &DAT_00479818;
  *(undefined **)(param_1 + 0xd8) = &DAT_00479808;
  *(undefined **)(param_1 + 0xdc) = &DAT_004797f8;
  *(undefined **)(param_1 + 0xe0) = &DAT_004797e8;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  uVar1 = DAT_0047d4a8;
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_00470b28;
  *(int *)(param_1 + 0xf0) = (int)&PTR_LAB_0046fd84;
  *(undefined ***)(param_1 + 0xf4) = &PTR_LAB_0046fd70;
  *(undefined ***)(param_1 + 0xf8) = &PTR_LAB_0046fd48;
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_0046fd30;
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_0046fd0c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d4));
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined **)(param_1 + 0x104) = &DAT_00470968;
  *(undefined4 *)(param_1 + 0x108) = 0x15e0;
  *(undefined4 *)(param_1 + 0x10c) = 8;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x118);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x3ff00000;
  *(undefined4 **)(param_1 + 0x140) = &DAT_0046fa70;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  (**(code **)(*(int *)(param_1 + 0xf0) + 0x24))(param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x104));
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  *(undefined4 *)(param_1 + 0x94) = 2;
  *(undefined4 *)(param_1 + 0x128) = 2;
  *(undefined4 *)(param_1 + 300) = 2;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x118) = 5;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  return param_1;
}


