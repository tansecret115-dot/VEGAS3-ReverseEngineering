/* Module: 14_43260.dll
   Function: FUN_10001b80
   Address: 10001b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_10001b80(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,short *param_4,
            uint param_5)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short sVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined4 *puVar26;
  short *psVar27;
  undefined4 *puVar28;
  
  puVar26 = param_3;
  puVar28 = (undefined4 *)((int)this + 0x33a);
  for (iVar22 = 5; iVar22 != 0; iVar22 = iVar22 + -1) {
    *puVar28 = *puVar26;
    puVar26 = puVar26 + 1;
    puVar28 = puVar28 + 1;
  }
  psVar12 = (short *)((int)this + 0x34c);
  uVar25 = param_5 * 2;
  puVar26 = (undefined4 *)((int)this + 0x34e);
  for (uVar23 = (param_5 & 0x7fffffff) >> 1; uVar23 != 0; uVar23 = uVar23 - 1) {
    *puVar26 = *param_1;
    param_1 = param_1 + 1;
    puVar26 = puVar26 + 1;
  }
  for (uVar23 = uVar25 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
    *(undefined1 *)puVar26 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar26 = (undefined4 *)((int)puVar26 + 1);
  }
  sVar2 = param_4[2];
  sVar3 = *param_4;
  sVar4 = param_4[3];
  sVar5 = param_4[4];
  sVar6 = param_4[5];
  sVar7 = param_4[1];
  sVar8 = param_4[6];
  sVar9 = param_4[7];
  sVar10 = param_4[8];
  sVar11 = param_4[9];
  psVar27 = psVar12 + param_5;
  if (psVar12 < psVar27) {
    iVar22 = (int)*psVar12;
    do {
      psVar1 = psVar12 + -1;
      psVar13 = psVar12 + -2;
      psVar14 = psVar12 + -3;
      psVar15 = psVar12 + -4;
      psVar16 = psVar12 + -5;
      psVar17 = psVar12 + -6;
      psVar18 = psVar12 + -7;
      psVar19 = psVar12 + -8;
      psVar20 = psVar12 + -9;
      psVar12 = psVar12 + 1;
      iVar24 = (int)*psVar12 -
               ((int)*psVar20 * (int)sVar11 +
                (int)*psVar1 * (int)sVar7 + sVar3 * iVar22 + (int)*psVar13 * (int)sVar2 +
                (int)*psVar14 * (int)sVar4 + (int)*psVar15 * (int)sVar5 + (int)*psVar16 * (int)sVar6
                + (int)*psVar17 * (int)sVar8 + (int)*psVar18 * (int)sVar9 +
                (int)*psVar19 * (int)sVar10 >> 0xc);
      sVar21 = (short)iVar24;
      iVar22 = (int)sVar21;
      if (iVar24 != iVar22) {
        for (uVar23 = (param_5 & 0x7fffffff) >> 1; uVar23 != 0; uVar23 = uVar23 - 1) {
          *param_2 = 0;
          param_2 = param_2 + 1;
        }
        for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *(undefined1 *)param_2 = 0;
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        return;
      }
      *psVar12 = sVar21;
    } while (psVar12 < psVar27);
  }
  psVar27 = psVar12 + (1 - param_5);
  for (uVar23 = (param_5 & 0x7fffffff) >> 1; uVar23 != 0; uVar23 = uVar23 - 1) {
    *param_2 = *(undefined4 *)psVar27;
    psVar27 = psVar27 + 2;
    param_2 = param_2 + 1;
  }
  for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
    *(char *)param_2 = (char)*psVar27;
    psVar27 = (short *)((int)psVar27 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  psVar12 = psVar12 + -9;
  for (iVar22 = 5; iVar22 != 0; iVar22 = iVar22 + -1) {
    *param_3 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    param_3 = param_3 + 1;
  }
  return;
}


