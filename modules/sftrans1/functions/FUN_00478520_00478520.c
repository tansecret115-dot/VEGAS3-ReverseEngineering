/* Module: sftrans1.dll
   Function: FUN_00478520
   Address: 00478520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00478680) */

int __fastcall FUN_00478520(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_00404980();
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_0055d9d0;
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_0055afb8;
  *(undefined **)(param_1 + 0x118) = &DAT_0056f728;
  *(undefined **)(param_1 + 0x11c) = &DAT_0056f718;
  *(undefined **)(param_1 + 0x120) = &DAT_0056f708;
  *(undefined **)(param_1 + 0x124) = &DAT_0056f6f8;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  piVar1 = (int *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  uVar2 = DAT_00577258;
  *piVar1 = (int)&PTR_LAB_0055afa0;
  *(undefined ***)(param_1 + 0x144) = &PTR_LAB_00563024;
  FUN_00478150(0);
  FUN_00478150(0);
  FUN_00478150(0);
  FUN_00478150(0);
  *piVar1 = (int)&PTR_LAB_005571d8;
  *(undefined ***)(param_1 + 0x13c) = &PTR_LAB_005571c4;
  *(undefined ***)(param_1 + 0x140) = &PTR_LAB_0055719c;
  *(undefined ***)(param_1 + 0x144) = &PTR_LAB_00557184;
  *(undefined ***)(param_1 + 0x148) = &PTR_LAB_00557160;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x54c));
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  *(undefined **)(param_1 + 0x14c) = &DAT_00577ae8;
  *(undefined4 *)(param_1 + 0x150) = 0x157c;
  *(undefined4 *)(param_1 + 0x154) = 0xc;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x544) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x160);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x160) = 2;
  *(undefined4 *)(param_1 + 0x170) = 1;
  *(undefined4 *)(param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0x3ff00000;
  *(undefined4 **)(param_1 + 0x188) = &DAT_00554fd0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  (**(code **)(*piVar1 + 0x24))(param_1 + 0x568,*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x910) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xb;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  return param_1;
}


