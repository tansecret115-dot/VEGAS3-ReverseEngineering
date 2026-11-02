/* Module: sftrans1.dll
   Function: FUN_0045e1a0
   Address: 0045e1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0045e2cd) */

int __fastcall FUN_0045e1a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00404980();
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_0055d9d0;
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_0055afb8;
  *(undefined **)(param_1 + 0x118) = &DAT_0056f728;
  *(undefined **)(param_1 + 0x11c) = &DAT_0056f718;
  *(undefined **)(param_1 + 0x120) = &DAT_0056f708;
  *(undefined **)(param_1 + 0x124) = &DAT_0056f6f8;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  uVar1 = DAT_00577258;
  *(undefined ***)(param_1 + 0x144) = &PTR_LAB_0055d9b8;
  *(int *)(param_1 + 0x138) = (int)&PTR_LAB_00556670;
  *(undefined ***)(param_1 + 0x13c) = &PTR_LAB_0055665c;
  *(undefined ***)(param_1 + 0x140) = &PTR_LAB_005565f8;
  *(undefined ***)(param_1 + 0x144) = &PTR_LAB_00556644;
  *(undefined ***)(param_1 + 0x148) = &PTR_LAB_00556620;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1cc));
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  *(undefined **)(param_1 + 0x14c) = &DAT_0055d918;
  *(undefined4 *)(param_1 + 0x150) = 5000;
  *(undefined4 *)(param_1 + 0x154) = 10;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x160);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x170) = 1;
  *(undefined4 *)(param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x160) = 2;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0x3ff00000;
  *(undefined4 **)(param_1 + 0x188) = &DAT_00554e70;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  (**(code **)(*(int *)(param_1 + 0x138) + 0x24))(param_1 + 0x1e4,*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xb;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x178) = 0x81;
  return param_1;
}


