/* Module: sfmarket2.dll
   Function: FUN_004124d0
   Address: 004124d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004124e2) */

uint * FUN_004124d0(uint *param_1,ushort *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  SIZE_T dwBytes;
  undefined4 *puVar17;
  uint *puVar18;
  ushort *puVar19;
  undefined4 *puVar20;
  uint *puVar21;
  bool bVar22;
  uint local_20;
  uint *local_18;
  uint local_8;
  
  iVar7 = lstrlenA("AtlAxWin");
  FUN_00492f90();
  MultiByteToWideChar(0,0,"AtlAxWin",-1,(LPWSTR)&stack0xffffffc8,iVar7 + 1);
  bVar22 = *(short *)((int)param_1 + 2) == -1;
  if (bVar22) {
    uVar11 = param_1[3];
    psVar5 = (short *)((int)param_1 + 0x1a);
  }
  else {
    uVar11 = *param_1;
    psVar5 = (short *)((int)param_1 + 0x12);
  }
  sVar1 = *psVar5;
  if (sVar1 == -1) {
    psVar5 = psVar5 + 2;
  }
  else {
    while (psVar5 = psVar5 + 1, sVar1 != 0) {
      sVar1 = *psVar5;
    }
  }
  sVar1 = *psVar5;
  if (sVar1 == -1) {
    psVar5 = psVar5 + 2;
  }
  else {
    while (psVar5 = psVar5 + 1, sVar1 != 0) {
      sVar1 = *psVar5;
    }
  }
  sVar1 = *psVar5;
  while (psVar6 = psVar5 + 1, sVar1 != 0) {
    psVar5 = psVar6;
    sVar1 = *psVar6;
  }
  if ((uVar11 & 0x40) != 0) {
    if (bVar22) {
      psVar6 = psVar5 + 4;
    }
    else {
      psVar6 = psVar5 + 2;
    }
    sVar1 = *psVar6;
    while (psVar6 = psVar6 + 1, sVar1 != 0) {
      sVar1 = *psVar6;
    }
  }
  puVar9 = param_1 + 4;
  puVar18 = (uint *)((int)psVar6 + 3U & 0xfffffffc);
  uVar11 = (int)puVar18 - (int)param_1;
  if (*(short *)((int)param_1 + 2) != -1) {
    puVar9 = param_1 + 2;
  }
  local_18 = (uint *)0x0;
  local_20 = (uint)(ushort)*puVar9;
  puVar9 = puVar18;
  dwBytes = uVar11;
  local_8 = local_20;
  if (local_20 != 0) {
    do {
      puVar8 = puVar9 + 6;
      if (!bVar22) {
        puVar8 = (uint *)((int)puVar9 + 0x12);
      }
      uVar2 = (ushort)*puVar8;
      if (uVar2 == 0xffff) {
        puVar8 = puVar8 + 1;
      }
      else {
        while (puVar8 = (uint *)((int)puVar8 + 2), uVar2 != 0) {
          uVar2 = *(ushort *)puVar8;
        }
      }
      uVar2 = (ushort)*puVar8;
      if (uVar2 == 0xffff) {
        puVar8 = puVar8 + 1;
      }
      else {
        while (puVar8 = (uint *)((int)puVar8 + 2), uVar2 != 0) {
          uVar2 = *(ushort *)puVar8;
        }
      }
      puVar15 = puVar9 + 6;
      puVar8 = (uint *)((ushort)*puVar8 + 5 + (int)puVar8 & 0xfffffffc);
      if (!bVar22) {
        puVar15 = (uint *)((int)puVar9 + 0x12);
      }
      if ((short)*puVar15 == 0x7b) {
        local_18 = (uint *)0x1;
        iVar7 = lstrlenW((LPCWSTR)&stack0xffffffc8);
        iVar7 = (-(uint)bVar22 & 6) + dwBytes + 100 + iVar7 * 2;
        puVar4 = param_2;
        if (bVar22) {
          uVar12 = puVar9[5];
        }
        else {
          uVar12 = (uint)(ushort)puVar9[4];
        }
        for (; puVar4 != (ushort *)0x0;
            puVar4 = (ushort *)((int)(puVar4 + 4) + *(int *)(puVar4 + 2))) {
          uVar2 = puVar4[1];
          if (*puVar4 == uVar12) {
            iVar3 = *(int *)(puVar4 + 4);
            puVar19 = puVar4 + 6;
            iVar14 = *(int *)(puVar4 + 2) + -4;
            if (iVar3 != 0) {
              uVar10 = Ordinal_4(puVar19,iVar3);
              puVar19 = puVar19 + iVar3;
              iVar14 = iVar14 + iVar3 * -2;
              Ordinal_6(uVar10);
            }
            if ((uVar2 != 0x37a) && (uVar2 != 0x37b)) goto LAB_004126d5;
            dwBytes = (iVar14 - *(int *)puVar19) + 3 + iVar7 & 0xfffffffc;
            goto LAB_00412726;
          }
        }
        iVar14 = 0;
LAB_004126d5:
        dwBytes = iVar14 + 3 + iVar7 & 0xfffffffc;
      }
      else {
        dwBytes = (int)puVar8 + (dwBytes - (int)puVar9);
      }
LAB_00412726:
      local_8 = local_8 - 1;
      puVar9 = puVar8;
    } while (local_8 != 0);
    if (local_18 != (uint *)0x0) {
      puVar8 = GlobalAlloc(0,dwBytes);
      puVar15 = (uint *)((int)puVar8 + uVar11);
      puVar9 = puVar8;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar9 = *param_1;
        param_1 = param_1 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(char *)puVar9 = (char)*param_1;
        param_1 = (uint *)((int)param_1 + 1);
        puVar9 = (uint *)((int)puVar9 + 1);
      }
      if (*(short *)((int)puVar8 + 2) == -1) {
        puVar9 = puVar8 + 4;
      }
      else {
        puVar9 = puVar8 + 2;
      }
      *(undefined2 *)puVar9 = 0;
      param_1 = puVar18;
      do {
        puVar9 = param_1 + 6;
        if (!bVar22) {
          puVar9 = (uint *)((int)param_1 + 0x12);
        }
        uVar2 = (ushort)*puVar9;
        if (uVar2 == 0xffff) {
          puVar9 = puVar9 + 1;
        }
        else {
          while (puVar9 = (uint *)((int)puVar9 + 2), uVar2 != 0) {
            uVar2 = *(ushort *)puVar9;
          }
        }
        uVar2 = (ushort)*puVar9;
        if (uVar2 == 0xffff) {
          puVar9 = puVar9 + 1;
        }
        else {
          while (puVar9 = (uint *)((int)puVar9 + 2), uVar2 != 0) {
            uVar2 = *(ushort *)puVar9;
          }
        }
        puVar18 = param_1 + 6;
        puVar9 = (uint *)((ushort)*puVar9 + 5 + (int)puVar9 & 0xfffffffc);
        if (!bVar22) {
          puVar18 = (uint *)((int)param_1 + 0x12);
        }
        if ((short)*puVar18 == 0x7b) {
          uVar11 = (-(uint)bVar22 & 6) + 0x12;
          puVar16 = param_1;
          puVar21 = puVar15;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar21 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar21 = puVar21 + 1;
          }
          for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(char *)puVar21 = (char)*puVar16;
            puVar16 = (uint *)((int)puVar16 + 1);
            puVar21 = (uint *)((int)puVar21 + 1);
          }
          iVar7 = lstrlenW((LPCWSTR)&stack0xffffffc8);
          uVar12 = iVar7 * 2 + 2;
          puVar16 = (uint *)((int)((int)puVar15 + uVar11) + uVar12);
          puVar17 = (undefined4 *)&stack0xffffffc8;
          puVar20 = (undefined4 *)((int)puVar15 + uVar11);
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar20 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar20 = puVar20 + 1;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar20 = *(undefined1 *)puVar17;
            puVar17 = (undefined4 *)((int)puVar17 + 1);
            puVar20 = (undefined4 *)((int)puVar20 + 1);
          }
          puVar15 = puVar16;
          for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar15 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar15 = puVar15 + 1;
          }
          *(short *)puVar15 = (short)*puVar18;
          puVar4 = param_2;
          if (bVar22) {
            uVar11 = param_1[5];
          }
          else {
            uVar11 = (uint)(ushort)param_1[4];
          }
          for (; puVar4 != (ushort *)0x0;
              puVar4 = (ushort *)((int)(puVar4 + 4) + *(int *)(puVar4 + 2))) {
            uVar2 = puVar4[1];
            if (*puVar4 == uVar11) {
              iVar7 = *(int *)(puVar4 + 4);
              puVar18 = (uint *)(puVar4 + 6);
              uVar11 = *(int *)(puVar4 + 2) - 4;
              if (iVar7 != 0) {
                uVar10 = Ordinal_4(puVar18,iVar7);
                puVar18 = (uint *)((int)puVar18 + iVar7 * 2);
                uVar11 = uVar11 + iVar7 * -2;
                Ordinal_6(uVar10);
              }
              if ((uVar2 == 0x37a) || (uVar2 == 0x37b)) {
                uVar11 = uVar11 - *puVar18;
                local_18 = (uint *)(*puVar18 + (int)puVar18);
              }
              else if (uVar2 == 0x376) {
                local_18 = puVar18;
              }
              goto LAB_004128ae;
            }
          }
          uVar11 = 0;
LAB_004128ae:
          *(short *)((int)puVar16 + 0x4e) = (short)uVar11;
          puVar18 = local_18;
          puVar21 = puVar16 + 0x14;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar21 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar21 = puVar21 + 1;
          }
          puVar15 = (uint *)((int)(puVar16 + 0x14) + uVar11);
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(char *)puVar21 = (char)*puVar18;
            puVar18 = (uint *)((int)puVar18 + 1);
            puVar21 = (uint *)((int)puVar21 + 1);
          }
          uVar11 = ~(uint)puVar15 + 1 & 3;
        }
        else {
          uVar11 = (int)puVar9 - (int)param_1;
          puVar18 = puVar15;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar18 = *param_1;
            param_1 = param_1 + 1;
            puVar18 = puVar18 + 1;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(char *)puVar18 = (char)*param_1;
            param_1 = (uint *)((int)param_1 + 1);
            puVar18 = (uint *)((int)puVar18 + 1);
          }
        }
        puVar15 = (uint *)((int)puVar15 + uVar11);
        if (*(short *)((int)puVar8 + 2) == -1) {
          puVar18 = puVar8 + 4;
        }
        else {
          puVar18 = puVar8 + 2;
        }
        *(short *)puVar18 = (short)*puVar18 + 1;
        local_20 = local_20 - 1;
        param_1 = puVar9;
        if (local_20 == 0) {
          return puVar8;
        }
      } while( true );
    }
  }
  return param_1;
}


