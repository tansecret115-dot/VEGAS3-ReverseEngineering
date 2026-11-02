/* Module: tokr3260.dll
   Function: FUN_6805a459
   Address: 6805a459
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_6805a459(int param_1,int param_2,int param_3,uint param_4,undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  int iVar12;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar19;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar20;
  int iVar23;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  int iVar27;
  int iVar29;
  undefined8 uVar28;
  
  puVar6 = (undefined2 *)((int)param_5 + param_4);
  puVar8 = param_5;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined2 *)puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = (undefined8 *)((int)puVar8 + 2);
  }
  puVar6 = (undefined2 *)((int)param_5 + param_4 + 0x30);
  puVar7 = (undefined2 *)((int)puVar6 + param_4);
  for (iVar4 = 0x17; uVar9 = DAT_6805ceac, fVar3 = _DAT_6805cea4, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_4 == 0x200) {
    iVar4 = 0;
    do {
      iVar12 = iVar4 * 4;
      iVar16 = iVar4 * 4;
      fVar1 = *(float *)(param_1 + iVar4 * 4);
      fVar2 = *(float *)(param_2 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      *(short *)((int)param_5 + iVar4 * 2 + 0x2c) =
           (short)ROUND((*(float *)(param_1 + iVar12) + *(float *)(param_2 + iVar16)) * fVar3);
      *(short *)((int)param_5 + iVar4 * 2 + 0x25c) = (short)ROUND((fVar1 - fVar2) * fVar3);
    } while (iVar4 != 0x100);
  }
  else {
    uVar5 = 0;
    do {
      uVar10 = *(undefined8 *)(param_1 + uVar5 * 4);
      uVar11 = *(undefined8 *)(param_1 + 8 + uVar5 * 4);
      iVar4 = (int)uVar10 >> 1;
      iVar12 = (int)((longlong)uVar10 >> 0x21);
      iVar20 = (int)uVar11 >> 1;
      iVar23 = (int)((longlong)uVar11 >> 0x21);
      uVar10 = *(undefined8 *)(param_2 + uVar5 * 4);
      uVar11 = *(undefined8 *)(param_2 + 8 + uVar5 * 4);
      iVar16 = (int)uVar10 >> 1;
      iVar19 = (int)((longlong)uVar10 >> 0x21);
      iVar24 = (int)uVar11 >> 1;
      iVar25 = (int)((longlong)uVar11 >> 0x21);
      iVar27 = (int)uVar9;
      iVar29 = (int)((ulonglong)uVar9 >> 0x20);
      uVar5 = uVar5 + 4;
      uVar10 = packssdw(CONCAT44(iVar12 + iVar19 + iVar29 >> 0xe,iVar4 + iVar16 + iVar27 >> 0xe),
                        CONCAT44(iVar23 + iVar25 + iVar29 >> 0xe,iVar20 + iVar24 + iVar27 >> 0xe));
      uVar11 = packssdw(CONCAT44((iVar12 - iVar19) + iVar29 >> 0xe,(iVar4 - iVar16) + iVar27 >> 0xe)
                        ,CONCAT44((iVar23 - iVar25) + iVar29 >> 0xe,
                                  (iVar20 - iVar24) + iVar27 >> 0xe));
      *(undefined8 *)((int)param_5 + uVar5 * 2 + 0x26) = uVar10;
      *(undefined8 *)((int)param_5 + uVar5 * 2 + param_4 + 0x56) = uVar11;
    } while (param_4 >> 1 != uVar5);
  }
  iVar4 = -(param_4 >> 1);
  do {
    uVar26 = pmaddwd(*param_5,DAT_6805ceb4);
    uVar28 = pmaddwd(*(undefined8 *)((int)param_5 + param_4 + 0x30),DAT_6805cee4);
    uVar9 = pmaddwd(param_5[1],DAT_6805cebc);
    uVar13 = pmaddwd(*(undefined8 *)((int)param_5 + param_4 + 0x38),DAT_6805ceec);
    uVar17 = pmaddwd(param_5[2],DAT_6805cec4);
    uVar21 = pmaddwd(*(undefined8 *)((int)param_5 + param_4 + 0x40),DAT_6805cef4);
    uVar10 = pmaddwd(param_5[3],DAT_6805cecc);
    uVar14 = pmaddwd(*(undefined8 *)((int)param_5 + param_4 + 0x48),DAT_6805cefc);
    uVar18 = pmaddwd(param_5[4],DAT_6805ced4);
    uVar22 = pmaddwd(*(undefined8 *)((int)param_5 + param_4 + 0x50),DAT_6805cf04);
    uVar11 = pmaddwd(param_5[5],DAT_6805cedc);
    uVar15 = pmaddwd(*(undefined8 *)((int)param_5 + param_4 + 0x58),DAT_6805cf0c);
    param_5 = (undefined8 *)((int)param_5 + 2);
    iVar4 = iVar4 + 1;
    *(ulonglong *)(param_3 + (param_4 >> 1) * 8 + -8 + iVar4 * 8) =
         CONCAT44((int)((ulonglong)uVar26 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20) +
                  (int)((ulonglong)uVar17 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20) +
                  (int)((ulonglong)uVar18 >> 0x20) + (int)((ulonglong)uVar11 >> 0x20) +
                  (int)uVar26 + (int)uVar9 + (int)uVar17 + (int)uVar10 + (int)uVar18 + (int)uVar11,
                  (int)((ulonglong)uVar28 >> 0x20) + (int)((ulonglong)uVar13 >> 0x20) +
                  (int)((ulonglong)uVar21 >> 0x20) + (int)((ulonglong)uVar14 >> 0x20) +
                  (int)((ulonglong)uVar22 >> 0x20) + (int)((ulonglong)uVar15 >> 0x20) +
                  (int)uVar28 + (int)uVar13 + (int)uVar21 + (int)uVar14 + (int)uVar22 + (int)uVar15)
    ;
    fVar3 = _DAT_6805cea8;
  } while (iVar4 != 0);
  if (param_4 == 0x400) {
    iVar4 = -0x400;
    do {
      *(float *)(param_3 + 0x1000 + iVar4 * 4) =
           (float)*(int *)(param_3 + 0x1000 + iVar4 * 4) * fVar3;
      *(float *)(param_3 + 0x1004 + iVar4 * 4) =
           (float)*(int *)(param_3 + 0x1004 + iVar4 * 4) * fVar3;
      *(float *)(param_3 + 0x100c + iVar4 * 4) =
           (float)*(int *)(param_3 + 0x100c + iVar4 * 4) * fVar3;
      *(float *)(param_3 + 0x1008 + iVar4 * 4) =
           (float)*(int *)(param_3 + 0x1008 + iVar4 * 4) * fVar3;
      iVar4 = iVar4 + 4;
    } while (iVar4 != 0);
  }
  return;
}


