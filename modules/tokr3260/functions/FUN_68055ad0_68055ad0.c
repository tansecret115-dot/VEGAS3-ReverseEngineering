/* Module: tokr3260.dll
   Function: FUN_68055ad0
   Address: 68055ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68055ad0(undefined4 *param_1,int *param_2,int param_3,uint *param_4,uint *param_5)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint local_102c [1017];
  undefined4 uStackY_48;
  undefined4 auStackY_44 [6];
  uint local_2c;
  uint local_28;
  uint *local_24;
  int iVar18;
  uint *puVar19;
  int iVar20;
  uint *puVar21;
  
  FUN_6805a6a0();
  iVar18 = param_1[2];
  uVar1 = param_1[1];
  puVar13 = (uint *)param_1[4];
  puVar3 = (uint *)((iVar18 + -1 + param_3) / iVar18);
  local_2c = *param_5;
  if (puVar13 == (uint *)0x1) {
    uVar10 = (int)local_2c >> 0x1f;
    iVar6 = param_1[6];
    pbVar4 = (byte *)(((int)(local_2c + (uVar10 & 7)) >> 3) + (int)param_4);
    iVar20 = 0;
    param_4 = (uint *)(pbVar4 + 2);
    uVar15 = (uint)pbVar4[1] + (uint)*pbVar4 * 0x100;
    iVar5 = 0x10 - (((local_2c ^ uVar10) - uVar10 & 7 ^ uVar10) - uVar10);
    if (0 < (int)puVar3) {
      bVar7 = (byte)iVar6;
      puVar13 = local_102c;
      do {
        uVar10 = *(uint *)(param_1[8] +
                          ((int)uVar15 >> ((char)iVar5 - bVar7 & 0x1f) & (1 << (bVar7 & 0x1f)) - 1U)
                          * 4);
        *puVar13 = uVar10;
        if ((int)uVar10 < 0) {
          return -999999;
        }
        iVar5 = iVar5 - *(int *)(param_1[7] + 4 + uVar10 * 8);
        *param_5 = *param_5 + *(int *)(param_1[7] + 4 + uVar10 * 8);
        if (iVar5 < iVar6) {
          uVar15 = (uVar15 & 0xff) * 0x100 + (uint)(byte)*param_4;
          param_4 = (uint *)((int)param_4 + 1);
          iVar5 = iVar5 + 8;
        }
        iVar20 = iVar20 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar20 < (int)puVar3);
    }
  }
  else {
    if ((int)puVar13 < 2) {
      return -999999;
    }
    if (0 < (int)puVar3) {
      puVar17 = local_102c;
      do {
        puVar21 = &local_28;
        iVar18 = 1;
        local_24 = (uint *)0x68055c1d;
        puVar12 = param_4;
        puVar19 = param_5;
        FUN_68058ad0(1,(int)param_4,(int *)param_5,puVar21);
        local_24 = puVar12;
        if (local_28 == 0) {
          puVar12 = puVar17;
          for (uVar10 = (uint)puVar19 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          for (uVar10 = (uint)puVar19 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar12 = 0;
            puVar12 = (uint *)((int)puVar12 + 1);
          }
        }
        else {
          puVar12 = puVar17;
          puVar2 = local_24;
          if (0 < (int)puVar13) {
            do {
              puVar13 = puVar2;
              puVar14 = param_1;
              puVar16 = auStackY_44;
              puVar19 = param_4;
              puVar21 = param_5;
              for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar16 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar16 = puVar16 + 1;
              }
              uStackY_48 = 0x68055c61;
              uVar10 = FUN_68057880();
              *puVar12 = uVar10;
              local_24 = (uint *)((int)local_24 + -1);
              puVar12 = puVar12 + 1;
              puVar2 = puVar13;
            } while (local_24 != (uint *)0x0);
          }
        }
        puVar17 = (uint *)((int)puVar17 + (int)puVar19);
      } while ((int)puVar21 + (int)puVar13 < (int)puVar3);
    }
  }
  bVar7 = (byte)uVar1;
  uVar10 = (1 << (bVar7 & 0x1f)) - 1;
  if (iVar18 == 1) {
    if (0 < (int)puVar3) {
      piVar11 = param_2;
      do {
        puVar3 = (uint *)((int)puVar3 + -1);
        *piVar11 = (int)((*(uint *)(((int)local_102c - (int)param_2) + (int)piVar11) & uVar10) <<
                        (0x20 - bVar7 & 0x1f)) >> (0x20 - bVar7 & 0x1f);
        piVar11 = piVar11 + 1;
      } while (puVar3 != (uint *)0x0);
    }
  }
  else if (iVar18 == 2) {
    if (0 < (int)puVar3) {
      puVar13 = local_102c;
      bVar8 = 0x20 - bVar7;
      param_4 = puVar3;
      do {
        uVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        param_2[1] = (int)((uVar15 & uVar10) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
        *param_2 = (((int)uVar15 >> (bVar7 & 0x1f)) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
        param_4 = (uint *)((int)param_4 + -1);
        param_2 = param_2 + 2;
      } while (param_4 != (uint *)0x0);
      return *param_5 - local_2c;
    }
  }
  else if (0 < (int)puVar3) {
    param_4 = local_102c;
    iVar6 = 0;
    do {
      iVar5 = iVar18 + iVar6;
      iVar20 = param_3;
      if (iVar5 < param_3) {
        iVar20 = iVar5;
      }
      iVar20 = iVar20 + -1;
      uVar15 = *param_4;
      if (iVar6 <= iVar20) {
        iVar6 = (iVar20 - iVar6) + 1;
        piVar11 = param_2 + iVar20;
        do {
          uVar9 = uVar15 & uVar10;
          uVar15 = (int)uVar15 >> (bVar7 & 0x1f);
          iVar6 = iVar6 + -1;
          *piVar11 = (int)(uVar9 << (0x20 - bVar7 & 0x1f)) >> (0x20 - bVar7 & 0x1f);
          piVar11 = piVar11 + -1;
        } while (iVar6 != 0);
      }
      param_4 = param_4 + 1;
      puVar3 = (uint *)((int)puVar3 + -1);
      iVar6 = iVar5;
    } while (puVar3 != (uint *)0x0);
    return *param_5 - local_2c;
  }
  return *param_5 - local_2c;
}


