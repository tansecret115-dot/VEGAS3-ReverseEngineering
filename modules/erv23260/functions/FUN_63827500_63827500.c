/* Module: erv23260.dll
   Function: FUN_63827500
   Address: 63827500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63827500(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  char cVar10;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar11;
  char cVar14;
  uint uVar12;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar13;
  byte bVar15;
  int iVar16;
  int unaff_EBP;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  bool bVar20;
  undefined8 in_MM7;
  undefined8 uVar21;
  uint auStack_68 [20];
  int aiStack_18 [5];
  undefined4 uStack_4;
  
  uVar12 = param_2 >> 3;
  *(undefined4 *)(&stack0x00000024 + unaff_EBP * 8) = 0;
  do {
    do {
      iVar5 = (int)*(char *)(*(int *)(&stack0x0000005c + unaff_EBP * 8) + 1 + uVar12 * 8);
      iVar16 = (int)*(char *)(*(int *)(&stack0x0000005c + unaff_EBP * 8) + uVar12 * 8);
      iVar8 = (iVar5 * aiStack_18[unaff_EBP * 2 + 1] >> 0x10) + 0x60;
      iVar6 = aiStack_18[unaff_EBP * 2];
      iVar7 = aiStack_18[unaff_EBP * 2 + 1];
      *(char *)(param_2 + 0x15) = (char)((uint)(aiStack_18[unaff_EBP * 2] * iVar5) >> 0x10) + '`';
      *(char *)(param_2 + 0x17) = (char)iVar8;
      *(char *)(param_2 + 0x14) = (char)((uint)(iVar6 * iVar16) >> 0x10) + '`';
      *(char *)(param_2 + 0x16) = (char)((uint)(iVar16 * iVar7) >> 0x10) + '`';
      uStack_4 = 0x63827567;
      FUN_6382793b(iVar8,uVar12);
      uVar19 = (uint)in_MM7;
      *(uint *)(param_2 + 0x1c) = uVar19;
      uVar12 = extraout_EDX + 0xa0000001;
      bVar20 = -1 < (int)uVar12;
    } while (extraout_EDX < 0x5fffffff);
    uVar12 = unaff_EBP + -2 + uVar12;
    param_2 = (param_2 - 0x10) + unaff_EBP * 8;
  } while (bVar20);
  puVar18 = (undefined4 *)auStack_68[unaff_EBP + 7];
  if (aiStack_18[unaff_EBP * 2 + 2] < (int)uVar19) {
    uVar9 = *puVar18;
    if (((auStack_68[unaff_EBP + 2] & 0xe00) == 0) &&
       (*(undefined4 *)(&stack0x00000020 + unaff_EBP * 8) = 0,
       ((char)uVar9 != '\0' || (char)((uint)uVar9 >> 8) != '\0') ||
       (*(byte *)((int)puVar18 + unaff_EBP * 8 + 3) & 0x7e) != 0)) {
      puVar18[unaff_EBP * 2 + 0xd] = uVar19;
      uVar12 = puVar18[unaff_EBP * 2 + 9];
      auStack_68[unaff_EBP * 2 + 7] = uVar19;
      auStack_68[unaff_EBP * 2 + 6] = uVar12;
      puVar18[0xd] = uVar12;
      uVar3 = 0;
      uVar12 = puVar18[9];
      auStack_68[unaff_EBP * 2 + 5] = puVar18[0xb];
      auStack_68[unaff_EBP * 2 + 4] = uVar12;
      uVar12 = puVar18[5];
      uVar19 = puVar18[7];
      auStack_68[unaff_EBP * 2 + 8] = uVar12;
      auStack_68[unaff_EBP * 2 + 9] = uVar19;
      auStack_68[unaff_EBP * 2] = uVar12;
      auStack_68[unaff_EBP * 2 + 1] = uVar19;
      uVar12 = puVar18[unaff_EBP * 2 + 7];
      auStack_68[unaff_EBP * 2 + 2] = puVar18[unaff_EBP * 2 + 5];
      auStack_68[unaff_EBP * 2 + 3] = uVar12;
      uVar9 = 0;
LAB_63827600:
      uVar12 = *(uint *)(&stack0x0000005c + unaff_EBP * 8) >> 3;
      uVar1 = *(undefined4 *)((int)&DAT_63837160 + uVar3);
      cVar4 = (char)uVar1 + (char)uVar9;
      *(undefined4 *)(&stack0x00000024 + unaff_EBP * 8) = uVar9;
      (&stack0x0000002c)[unaff_EBP * 8] = cVar4;
      cVar10 = (char)((uint)uVar1 >> 8);
      cVar11 = (char)((uint)uVar9 >> 8);
      if (cVar4 == '\0') {
        iVar8 = 0;
        (&stack0x0000002d)[unaff_EBP * 8] = cVar10 + cVar11;
        do {
          do {
            puVar17 = puVar18;
            cVar4 = (char)((uint)puVar17[uVar12 * 2] >> 8);
            bVar15 = (char)((uint)((int)cVar4 * aiStack_18[unaff_EBP * 2]) >> 0x10) + (char)iVar8;
            if (bVar15 < 0x41) goto LAB_6382767f;
            iVar6 = (int)(char)puVar17[uVar12 * 2];
            *(byte *)((int)puVar17 + 0x15) = bVar15;
            *(byte *)((int)puVar17 + 0x17) = bVar15 - cVar4;
            iVar7 = iVar6 * aiStack_18[unaff_EBP * 2 + 1];
            iVar8 = iVar7 >> 0x10;
            *(char *)(puVar17 + 5) = (char)((uint)(aiStack_18[unaff_EBP * 2] * iVar6) >> 0x10);
            *(char *)((int)puVar17 + 0x16) = (char)((uint)iVar7 >> 0x10);
            bVar20 = uVar12 < 0x60000000;
            uVar12 = uVar12 + 0xa0000000;
            puVar18 = puVar17 + 2;
          } while (bVar20);
          uVar19 = auStack_68[unaff_EBP + 7];
          puVar18 = puVar17 + unaff_EBP * 2 + -2;
        } while (-1 < (int)uVar12);
        uVar12 = uVar19 >> 3;
        uVar21 = 0;
      }
      else {
        cVar10 = cVar10 + cVar11;
        uVar3 = (uint)CONCAT11(cVar10,cVar4);
        (&stack0x0000002d)[unaff_EBP * 8] = cVar10;
        if (cVar10 == '\0') {
          do {
            do {
              puVar17 = puVar18;
              cVar4 = (char)puVar17[uVar12 * 2];
              bVar15 = (char)((uint)((int)cVar4 * aiStack_18[unaff_EBP * 2]) >> 0x10) + (char)uVar3;
              if (bVar15 < 0x41) goto LAB_6382767f;
              iVar6 = (int)(char)((uint)puVar17[uVar12 * 2] >> 8);
              *(byte *)(puVar17 + 5) = bVar15;
              iVar8 = aiStack_18[unaff_EBP * 2];
              *(byte *)((int)puVar17 + 0x16) = bVar15 - cVar4;
              iVar7 = iVar6 * aiStack_18[unaff_EBP * 2 + 1];
              uVar3 = iVar7 >> 0x10;
              *(char *)((int)puVar17 + 0x15) = (char)((uint)(iVar8 * iVar6) >> 0x10);
              *(char *)((int)puVar17 + 0x17) = (char)((uint)iVar7 >> 0x10);
              bVar20 = uVar12 < 0x60000000;
              uVar12 = uVar12 + 0xa0000000;
              puVar18 = puVar17 + 2;
            } while (bVar20);
            uVar21 = 0;
            uVar19 = auStack_68[unaff_EBP + 7];
            puVar18 = puVar17 + unaff_EBP * 2 + -2;
          } while (-1 < (int)uVar12);
          uVar12 = uVar19 >> 3;
        }
        else {
          do {
            do {
              puVar17 = puVar18;
              cVar11 = (char)puVar17[uVar12 * 2];
              cVar14 = (char)((uint)puVar17[uVar12 * 2] >> 8);
              iVar8 = aiStack_18[unaff_EBP * 2];
              bVar15 = (char)((uint)((int)cVar11 * aiStack_18[unaff_EBP * 2]) >> 0x10) + cVar4;
              if (bVar15 < 0x41) goto LAB_6382767f;
              *(byte *)(puVar17 + 5) = bVar15;
              bVar2 = (char)((uint)(cVar14 * iVar8) >> 0x10) + cVar10;
              if (bVar2 < 0x41) goto LAB_6382767f;
              *(byte *)((int)puVar17 + 0x15) = bVar2;
              *(byte *)((int)puVar17 + 0x16) = bVar15 - cVar11;
              *(byte *)((int)puVar17 + 0x17) = bVar2 - cVar14;
              bVar20 = uVar12 < 0x60000000;
              uVar12 = uVar12 + 0xa0000000;
              puVar18 = puVar17 + 2;
            } while (bVar20);
            uVar21 = 0;
            uVar19 = auStack_68[unaff_EBP + 7];
            puVar18 = puVar17 + unaff_EBP * 2 + -2;
          } while (-1 < (int)uVar12);
          uVar12 = uVar19 >> 3;
        }
      }
      do {
        do {
          uStack_4 = 0x63827768;
          FUN_6382793b((uint)*(byte *)(uVar19 + 0x17),uVar12);
          iVar8 = (int)uVar21;
          if (*(int *)(uVar19 + 0x24) <= iVar8) goto LAB_6382767f;
          *(int *)(uVar19 + 0x34) = iVar8;
          uVar12 = extraout_EDX_00 + 0xa0000001;
          bVar20 = -1 < (int)uVar12;
        } while (extraout_EDX_00 < 0x5fffffff);
        uVar12 = unaff_EBP + -2 + uVar12;
        puVar18 = (undefined4 *)auStack_68[unaff_EBP + 7];
        uVar19 = (uVar19 - 0x10) + unaff_EBP * 8;
      } while (bVar20);
      puVar18[unaff_EBP * 2 + 0xb] = iVar8;
      puVar18[unaff_EBP * 2 + 0xd] = iVar8;
      iVar8 = *(int *)(&stack0x00000020 + unaff_EBP * 8);
      puVar18[unaff_EBP * 2 + 9] = puVar18[unaff_EBP * 2 + 0xf];
      puVar18[0xd] = puVar18[unaff_EBP * 2 + 0xf];
      puVar18[0xb] = puVar18[0x11];
      puVar18[9] = puVar18[0xf];
      uVar12 = puVar18[7];
      auStack_68[unaff_EBP * 2] = puVar18[5];
      auStack_68[unaff_EBP * 2 + 1] = uVar12;
      uVar12 = puVar18[unaff_EBP * 2 + 7];
      auStack_68[unaff_EBP * 2 + 2] = puVar18[unaff_EBP * 2 + 5];
      auStack_68[unaff_EBP * 2 + 3] = uVar12;
      bVar15 = *(byte *)((int)&DAT_63837160 + iVar8 + 3);
      uVar9 = *(undefined4 *)(&stack0x0000002c + unaff_EBP * 8);
      goto LAB_638277e0;
    }
  }
LAB_63827824:
  uVar12 = puVar18[9];
  uVar3 = puVar18[0xb];
  uVar13 = puVar18[unaff_EBP * 2 + 9];
LAB_63827869:
  puVar18[unaff_EBP * 2 + 0xb] = uVar19 - uVar13;
  puVar18[unaff_EBP * 2 + 9] = uVar13 - uVar3;
  puVar18[0xb] = uVar3 - uVar12;
  return;
LAB_6382767f:
  puVar18 = (undefined4 *)auStack_68[unaff_EBP + 7];
  uVar9 = *(undefined4 *)(&stack0x00000024 + unaff_EBP * 8);
  bVar15 = *(byte *)((int)&DAT_63837160 + *(int *)(&stack0x00000020 + unaff_EBP * 8) + 2);
LAB_638277e0:
  uVar3 = (uint)bVar15;
  *(uint *)(&stack0x00000020 + unaff_EBP * 8) = uVar3;
  if (uVar3 == 0) goto code_r0x638277f0;
  goto LAB_63827600;
code_r0x638277f0:
  *(undefined4 *)(&stack0x00000024 + unaff_EBP * 8) = uVar9;
  uVar19 = puVar18[unaff_EBP * 2 + 0xb];
  if ((int)(auStack_68[unaff_EBP * 2 + 7] - 400) <= (int)uVar19) {
    uVar12 = auStack_68[unaff_EBP * 2 + 9];
    puVar18[5] = auStack_68[unaff_EBP * 2 + 8];
    puVar18[7] = uVar12;
    uVar12 = auStack_68[unaff_EBP * 2 + 0xb];
    puVar18[unaff_EBP * 2 + 5] = auStack_68[unaff_EBP * 2 + 10];
    puVar18[unaff_EBP * 2 + 7] = uVar12;
    uVar12 = auStack_68[unaff_EBP * 2 + 4];
    uVar19 = uVar19 + 400;
    uVar13 = auStack_68[unaff_EBP * 2 + 6];
    puVar18[9] = uVar12;
    uVar3 = auStack_68[unaff_EBP * 2 + 5];
    *(undefined4 *)(&stack0x00000024 + unaff_EBP * 8) = 0;
    goto LAB_63827869;
  }
  uVar12 = auStack_68[unaff_EBP * 2 + 1];
  puVar18[5] = auStack_68[unaff_EBP * 2];
  puVar18[7] = uVar12;
  uVar12 = auStack_68[unaff_EBP * 2 + 3];
  puVar18[unaff_EBP * 2 + 5] = auStack_68[unaff_EBP * 2 + 2];
  puVar18[unaff_EBP * 2 + 7] = uVar12;
  goto LAB_63827824;
}


