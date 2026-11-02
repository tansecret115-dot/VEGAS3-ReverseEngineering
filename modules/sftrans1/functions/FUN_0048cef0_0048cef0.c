/* Module: sftrans1.dll
   Function: FUN_0048cef0
   Address: 0048cef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0048d04e) */

int __fastcall FUN_0048cef0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_00404980();
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_0055d9d0;
  *(undefined ***)(param_1 + 0x104) = &PTR_LAB_0055afb8;
  *(undefined **)(param_1 + 0x11c) = &DAT_0056f728;
  *(undefined **)(param_1 + 0x120) = &DAT_0056f718;
  *(undefined **)(param_1 + 0x124) = &DAT_0056f708;
  *(undefined **)(param_1 + 0x128) = &DAT_0056f6f8;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  piVar1 = (int *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  uVar2 = DAT_00577258;
  *piVar1 = (int)&PTR_LAB_0055afa0;
  *(undefined ***)(param_1 + 0x144) = &PTR_LAB_00563828;
  FUN_0041e260(0);
  FUN_0041e260(0);
  FUN_0041e260(0);
  FUN_0041e260(0);
  *piVar1 = (int)&PTR_LAB_00557304;
  *(undefined ***)(param_1 + 0x13c) = &PTR_LAB_005572f0;
  *(undefined ***)(param_1 + 0x140) = &PTR_LAB_005572c8;
  *(undefined ***)(param_1 + 0x144) = &PTR_LAB_005572b0;
  *(undefined ***)(param_1 + 0x148) = &PTR_LAB_0055728c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x75c));
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  *(undefined **)(param_1 + 0x14c) = &DAT_005790b0;
  *(undefined4 *)(param_1 + 0x150) = 0x15e0;
  *(undefined4 *)(param_1 + 0x154) = 8;
  *(undefined4 *)(param_1 + 0x750) = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x160);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x184) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x160) = 2;
  *(undefined4 *)(param_1 + 0x170) = 1;
  *(undefined4 *)(param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 **)(param_1 + 0x188) = &DAT_00554ff0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x778,*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0xd30) = 0;
  *(undefined4 *)(param_1 + 0xd30) = 0;
  *(undefined4 *)(param_1 + 0xd28) = 0;
  *(undefined4 *)(param_1 + 0xd34) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0xd2c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xb;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x16c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x178) = 0x100;
  return param_1;
}


