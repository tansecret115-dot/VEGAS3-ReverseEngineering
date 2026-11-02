/* Module: sfppack1.dll
   Function: FUN_5cdc80b0
   Address: 5cdc80b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc80b0(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined4 *puVar36;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  puVar36 = (undefined4 *)(param_1 + 0x1c);
  for (iVar35 = 0x23; iVar35 != 0; iVar35 = iVar35 + -1) {
    *puVar36 = *param_2;
    param_2 = param_2 + 1;
    puVar36 = puVar36 + 1;
  }
  bVar1 = true;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined4 *)(param_1 + 0xac) = 1;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x8c) < -800) {
    *(undefined4 *)(param_1 + 0x8c) = 0xfffffce0;
  }
  else {
    if (*(int *)(param_1 + 0x8c) < 1) goto LAB_5cdc8117;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  bVar1 = false;
LAB_5cdc8117:
  iVar35 = FUN_5cdc8330(param_1);
  iVar2 = FUN_5cdc8370(param_1);
  iVar3 = FUN_5cdc83b0(param_1);
  iVar4 = FUN_5cdc83e0(param_1);
  iVar5 = FUN_5cdc8410(param_1);
  iVar6 = FUN_5cdc8450();
  iVar7 = FUN_5cdc8460(param_1);
  iVar8 = FUN_5cdc84a0(param_1);
  iVar9 = FUN_5cdc84d0(param_1);
  iVar10 = FUN_5cdc8500(param_1);
  iVar11 = FUN_5cdc8530(param_1);
  iVar12 = FUN_5cdc8560(param_1);
  iVar13 = FUN_5cdc8590(param_1);
  iVar14 = FUN_5cdc85c0(param_1);
  iVar15 = FUN_5cdc85f0(param_1);
  iVar16 = FUN_5cdc8620(param_1);
  iVar17 = FUN_5cdc8650(param_1);
  iVar18 = FUN_5cdc8680(param_1);
  iVar19 = FUN_5cdc86b0(param_1);
  iVar20 = FUN_5cdc86e0(param_1);
  iVar21 = FUN_5cdc8710(param_1);
  iVar22 = FUN_5cdc8740(param_1);
  iVar23 = FUN_5cdc8770(param_1);
  iVar24 = FUN_5cdc87a0(param_1);
  iVar25 = FUN_5cdc87d0(param_1);
  iVar26 = FUN_5cdc8800(param_1);
  iVar27 = FUN_5cdc8830(param_1);
  iVar28 = FUN_5cdc8860(param_1);
  iVar29 = FUN_5cdc8890(param_1);
  iVar30 = FUN_5cdc88c0(param_1);
  iVar31 = FUN_5cdc88f0(param_1);
  iVar32 = FUN_5cdc8920(param_1);
  iVar33 = FUN_5cdc8950(param_1);
  iVar34 = FUN_5cdc8980(param_1);
  LeaveCriticalSection(lpCriticalSection);
  if ((((((((((((((((((((((((((((((((((uint)!bVar1 - (uint)(iVar35 != 0)) - (uint)(iVar2 != 0)) +
                                   (0x22 - (uint)(iVar3 != 0))) - (uint)(iVar4 != 0)) -
                                 (uint)(iVar5 != 0)) - (uint)(iVar6 != 0)) - (uint)(iVar7 != 0)) -
                              (uint)(iVar8 != 0)) - (uint)(iVar9 != 0)) - (uint)(iVar10 != 0)) -
                           (uint)(iVar11 != 0)) - (uint)(iVar12 != 0)) - (uint)(iVar13 != 0)) -
                        (uint)(iVar14 != 0)) - (uint)(iVar15 != 0)) - (uint)(iVar16 != 0)) -
                     (uint)(iVar17 != 0)) - (uint)(iVar18 != 0)) - (uint)(iVar19 != 0)) -
                  (uint)(iVar20 != 0)) - (uint)(iVar21 != 0)) - (uint)(iVar22 != 0)) -
               (uint)(iVar23 != 0)) - (uint)(iVar24 != 0)) - (uint)(iVar25 != 0)) -
            (uint)(iVar26 != 0)) - (uint)(iVar27 != 0)) - (uint)(iVar28 != 0)) - (uint)(iVar29 != 0)
         ) - (uint)(iVar30 != 0)) - (uint)(iVar31 != 0)) - (uint)(iVar32 != 0)) -
      (uint)(iVar33 != 0) != (uint)(iVar34 != 0)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


