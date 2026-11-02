/* Module: sftrans1.dll
   Function: FUN_00463ab0
   Address: 00463ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00463bdd) */

int __fastcall FUN_00463ab0(int param_1)

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
  *(undefined ***)(param_1 + 0x144) = &PTR_LAB_00560e38;
  *(int *)(param_1 + 0x138) = (int)&PTR_LAB_0055679c;
  *(undefined ***)(param_1 + 0x13c) = &PTR_LAB_00556788;
  *(undefined ***)(param_1 + 0x140) = &PTR_LAB_00556724;
  *(undefined ***)(param_1 + 0x144) = &PTR_LAB_00556770;
  *(undefined ***)(param_1 + 0x148) = &PTR_LAB_0055674c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x44c));
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  *(undefined **)(param_1 + 0x14c) = &DAT_0055f698;
  *(undefined4 *)(param_1 + 0x150) = 0x13ec;
  *(undefined4 *)(param_1 + 0x154) = 0x12;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x160);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x184) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x160) = 2;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x170) = 1;
  *(undefined4 *)(param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 **)(param_1 + 0x188) = &DAT_00554e90;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  (**(code **)(*(int *)(param_1 + 0x138) + 0x24))(param_1 + 0x468,*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x710) = 0;
  *(undefined4 *)(param_1 + 0x710) = 0;
  *(undefined4 *)(param_1 + 0x178) = 1;
  *(undefined4 *)(param_1 + 0x714) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xb;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x16c) = 0x3ff00000;
  return param_1;
}


