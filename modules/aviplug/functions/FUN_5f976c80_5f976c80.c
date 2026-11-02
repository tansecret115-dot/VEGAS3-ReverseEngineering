/* Module: aviplug.dll
   Function: FUN_5f976c80
   Address: 5f976c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f976c80(int param_1,ulonglong *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  
  puVar3 = *(uint **)(param_1 + 8);
  iVar15 = *(int *)((int)param_2 + 4);
  puVar5 = *(ulonglong **)(param_2 + 1);
LAB_5f976ca1:
  do {
    uVar7 = *puVar5;
    puVar6 = (ulonglong *)puVar3[2];
    uVar14 = ~(ulonglong)-(uint)(0x40 < iVar15) & CONCAT44(iVar15,iVar15) |
             (ulonglong)-(uint)(0x40 < iVar15) & 0x40;
    do {
      uVar2 = *puVar3;
      uVar12 = (ulonglong)uVar2;
      uVar4 = puVar3[1];
      uVar9 = 0x40 - uVar2;
      uVar10 = ~(ulonglong)-(uint)((int)uVar4 < (int)uVar9) & (ulonglong)uVar9 |
               (ulonglong)(uVar4 & -(uint)((int)uVar4 < (int)uVar9));
      uVar11 = ~(0xffffffffffffffffU >> uVar12) & *puVar6;
      uVar8 = (-1L << uVar12) << (ulonglong)(uVar9 - (int)uVar10);
      while( true ) {
        iVar1 = (int)uVar10;
        uVar8 = uVar8 & uVar7;
        uVar7 = uVar7 << uVar10;
        uVar11 = uVar11 | uVar8 >> uVar12;
        iVar13 = (int)uVar14 - iVar1;
        iVar15 = (int)(uVar14 >> 0x20) - iVar1;
        uVar14 = CONCAT44(iVar15,iVar13);
        uVar4 = uVar4 - iVar1;
        if (uVar4 == 0) break;
        if (iVar13 < 1) goto LAB_5f976db1;
        uVar10 = (ulonglong)uVar4;
        *puVar6 = uVar11;
        uVar11 = 0;
        uVar8 = 0xffffffffffffffffU >> uVar10 ^ 0xffffffffffffffff;
        uVar12 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 + iVar1 & 0x3f;
      }
      if (iVar13 < 0) {
LAB_5f976db1:
        iVar15 = iVar15 - iVar13;
        uVar2 = uVar2 + iVar1 + iVar13;
        *puVar6 = uVar11;
        puVar5 = puVar5 + 1;
        *puVar3 = uVar2 & 0x3f;
        puVar3[1] = uVar4 - iVar13;
        puVar3[2] = (uint)(puVar6 + (uVar2 >> 6));
        if (iVar15 != 0) goto LAB_5f976ca1;
        *param_2 = 0;
        if (uVar4 - iVar13 == 0) {
          puVar3 = puVar3 + 4;
        }
        goto LAB_5f976df8;
      }
      *puVar6 = uVar11;
      puVar6 = (ulonglong *)puVar3[6];
      puVar3 = puVar3 + 4;
      if (puVar6 == (ulonglong *)0x0) {
        *(uint *)(param_2 + 1) = (int)puVar5 + (-(uint)(iVar13 == 0) & 8);
        *param_2 = CONCAT44(iVar15,(int)(*param_2 >> 0x20) - iVar15) & 0xffffffff0000003f;
        goto LAB_5f976df8;
      }
    } while (iVar13 != 0);
    puVar5 = puVar5 + 1;
    if (iVar15 == 0) {
      *param_2 = 0;
LAB_5f976df8:
      *(uint **)(param_1 + 8) = puVar3;
      return;
    }
  } while( true );
}


