/* Module: vegas30.exe
   Function: FUN_00405ca0
   Address: 00405ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00405cb2) */

uint * FUN_00405ca0(uint *param_1,ushort *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  ushort *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  short *psVar18;
  undefined1 *dwBytes;
  ushort *puVar19;
  undefined4 *puVar20;
  short *psVar21;
  bool bVar22;
  uint local_20;
  ushort *local_18;
  uint local_8;
  
  iVar7 = lstrlenA("AtlAxWin");
  FUN_0060ac30();
  MultiByteToWideChar(0,0,"AtlAxWin",-1,(LPWSTR)&stack0xffffffc8,iVar7 + 1);
  bVar22 = *(short *)((int)param_1 + 2) == -1;
  if (bVar22) {
    uVar13 = param_1[3];
    psVar4 = (short *)((int)param_1 + 0x1a);
  }
  else {
    uVar13 = *param_1;
    psVar4 = (short *)((int)param_1 + 0x12);
  }
  sVar1 = *psVar4;
  if (sVar1 == -1) {
    psVar4 = psVar4 + 2;
  }
  else {
    while (psVar4 = psVar4 + 1, sVar1 != 0) {
      sVar1 = *psVar4;
    }
  }
  sVar1 = *psVar4;
  if (sVar1 == -1) {
    psVar4 = psVar4 + 2;
  }
  else {
    while (psVar4 = psVar4 + 1, sVar1 != 0) {
      sVar1 = *psVar4;
    }
  }
  sVar1 = *psVar4;
  while (psVar18 = psVar4 + 1, sVar1 != 0) {
    psVar4 = psVar18;
    sVar1 = *psVar18;
  }
  if ((uVar13 & 0x40) != 0) {
    if (bVar22) {
      psVar18 = psVar4 + 4;
    }
    else {
      psVar18 = psVar4 + 2;
    }
    sVar1 = *psVar18;
    while (psVar18 = psVar18 + 1, sVar1 != 0) {
      sVar1 = *psVar18;
    }
  }
  puVar11 = param_1 + 4;
  puVar5 = (undefined4 *)((uint)((int)psVar18 + 3) & 0xfffffffc);
  puVar12 = (undefined1 *)((int)puVar5 - (int)param_1);
  if (*(short *)((int)param_1 + 2) != -1) {
    puVar11 = param_1 + 2;
  }
  local_18 = (ushort *)0x0;
  local_20 = (uint)(ushort)*puVar11;
  puVar17 = puVar5;
  dwBytes = puVar12;
  local_8 = local_20;
  if (local_20 != 0) {
    do {
      puVar9 = (ushort *)(puVar17 + 6);
      if (!bVar22) {
        puVar9 = (ushort *)((int)puVar17 + 0x12);
      }
      uVar2 = *puVar9;
      if (uVar2 == 0xffff) {
        puVar9 = puVar9 + 2;
      }
      else {
        while (puVar9 = puVar9 + 1, uVar2 != 0) {
          uVar2 = *puVar9;
        }
      }
      uVar2 = *puVar9;
      if (uVar2 == 0xffff) {
        puVar9 = puVar9 + 2;
      }
      else {
        while (puVar9 = puVar9 + 1, uVar2 != 0) {
          uVar2 = *puVar9;
        }
      }
      psVar4 = (short *)(puVar17 + 6);
      puVar6 = (undefined4 *)((uint)(*puVar9 + 5 + (int)puVar9) & 0xfffffffc);
      if (!bVar22) {
        psVar4 = (short *)((int)puVar17 + 0x12);
      }
      if (*psVar4 == 0x7b) {
        local_18 = (ushort *)0x1;
        iVar7 = lstrlenW((LPCWSTR)&stack0xffffffc8);
        iVar7 = iVar7 * 2 + (-(uint)bVar22 & 6) + 100;
        puVar9 = param_2;
        if (bVar22) {
          uVar13 = puVar17[5];
        }
        else {
          uVar13 = (uint)*(ushort *)(puVar17 + 4);
        }
        for (; puVar9 != (ushort *)0x0;
            puVar9 = (ushort *)((int)(puVar9 + 4) + *(int *)(puVar9 + 2))) {
          uVar2 = puVar9[1];
          if (*puVar9 == uVar13) {
            iVar3 = *(int *)(puVar9 + 4);
            puVar19 = puVar9 + 6;
            iVar16 = *(int *)(puVar9 + 2) + -4;
            if (iVar3 != 0) {
              uVar10 = Ordinal_4(puVar19,iVar3);
              puVar19 = puVar19 + iVar3;
              iVar16 = iVar16 + iVar3 * -2;
              Ordinal_6(uVar10);
            }
            if ((uVar2 != 0x37a) && (uVar2 != 0x37b)) goto LAB_00405ea5;
            dwBytes = (undefined1 *)
                      ((uint)(dwBytes + (iVar16 - *(int *)puVar19) + 3 + iVar7) & 0xfffffffc);
            goto LAB_00405ef6;
          }
        }
        iVar16 = 0;
LAB_00405ea5:
        dwBytes = (undefined1 *)((uint)(dwBytes + iVar16 + 3 + iVar7) & 0xfffffffc);
      }
      else {
        dwBytes = (undefined1 *)((int)puVar6 + ((int)dwBytes - (int)puVar17));
      }
LAB_00405ef6:
      local_8 = local_8 - 1;
      puVar17 = puVar6;
    } while (local_8 != 0);
    if (local_18 != (ushort *)0x0) {
      puVar8 = GlobalAlloc(0,(SIZE_T)dwBytes);
      puVar17 = (undefined4 *)((int)puVar8 + (int)puVar12);
      puVar11 = puVar8;
      for (uVar13 = (uint)puVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar11 = *param_1;
        param_1 = param_1 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar13 = (uint)puVar12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(char *)puVar11 = (char)*param_1;
        param_1 = (uint *)((int)param_1 + 1);
        puVar11 = (uint *)((int)puVar11 + 1);
      }
      if (*(short *)((int)puVar8 + 2) == -1) {
        puVar11 = puVar8 + 4;
      }
      else {
        puVar11 = puVar8 + 2;
      }
      *(undefined2 *)puVar11 = 0;
      param_1 = puVar5;
      do {
        puVar9 = (ushort *)(param_1 + 6);
        if (!bVar22) {
          puVar9 = (ushort *)((int)param_1 + 0x12);
        }
        uVar2 = *puVar9;
        if (uVar2 == 0xffff) {
          puVar9 = puVar9 + 2;
        }
        else {
          while (puVar9 = puVar9 + 1, uVar2 != 0) {
            uVar2 = *puVar9;
          }
        }
        uVar2 = *puVar9;
        if (uVar2 == 0xffff) {
          puVar9 = puVar9 + 2;
        }
        else {
          while (puVar9 = puVar9 + 1, uVar2 != 0) {
            uVar2 = *puVar9;
          }
        }
        psVar4 = (short *)(param_1 + 6);
        puVar5 = (undefined4 *)((uint)(*puVar9 + 5 + (int)puVar9) & 0xfffffffc);
        if (!bVar22) {
          psVar4 = (short *)((int)param_1 + 0x12);
        }
        if (*psVar4 == 0x7b) {
          uVar13 = (-(uint)bVar22 & 6) + 0x12;
          puVar6 = param_1;
          puVar20 = puVar17;
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar20 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar20 = puVar20 + 1;
          }
          for (uVar14 = uVar13 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar20 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar20 = (undefined4 *)((int)puVar20 + 1);
          }
          iVar7 = lstrlenW((LPCWSTR)&stack0xffffffc8);
          uVar14 = iVar7 * 2 + 2;
          psVar18 = (short *)((int)((int)puVar17 + uVar13) + uVar14);
          puVar6 = (undefined4 *)&stack0xffffffc8;
          puVar17 = (undefined4 *)((int)puVar17 + uVar13);
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *puVar17 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar17 = puVar17 + 1;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar17 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          }
          psVar21 = psVar18;
          for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined4 *)psVar21 = *(undefined4 *)psVar4;
            psVar4 = psVar4 + 2;
            psVar21 = psVar21 + 2;
          }
          *psVar21 = *psVar4;
          puVar9 = param_2;
          if (bVar22) {
            uVar13 = param_1[5];
          }
          else {
            uVar13 = (uint)*(ushort *)(param_1 + 4);
          }
          for (; puVar9 != (ushort *)0x0;
              puVar9 = (ushort *)((int)(puVar9 + 4) + *(int *)(puVar9 + 2))) {
            uVar2 = puVar9[1];
            if (*puVar9 == uVar13) {
              iVar7 = *(int *)(puVar9 + 4);
              puVar19 = puVar9 + 6;
              uVar13 = *(int *)(puVar9 + 2) - 4;
              if (iVar7 != 0) {
                uVar10 = Ordinal_4(puVar19,iVar7);
                puVar19 = puVar19 + iVar7;
                uVar13 = uVar13 + iVar7 * -2;
                Ordinal_6(uVar10);
              }
              if ((uVar2 == 0x37a) || (uVar2 == 0x37b)) {
                uVar13 = uVar13 - *(int *)puVar19;
                local_18 = (ushort *)(*(int *)puVar19 + (int)puVar19);
              }
              else if (uVar2 == 0x376) {
                local_18 = puVar19;
              }
              goto LAB_0040607e;
            }
          }
          uVar13 = 0;
LAB_0040607e:
          psVar18[0x27] = (short)uVar13;
          puVar9 = local_18;
          psVar4 = psVar18 + 0x28;
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)psVar4 = *(undefined4 *)puVar9;
            puVar9 = puVar9 + 2;
            psVar4 = psVar4 + 2;
          }
          puVar17 = (undefined4 *)((int)(psVar18 + 0x28) + uVar13);
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(char *)psVar4 = (char)*puVar9;
            puVar9 = (ushort *)((int)puVar9 + 1);
            psVar4 = (short *)((int)psVar4 + 1);
          }
          uVar13 = ~(uint)puVar17 + 1 & 3;
        }
        else {
          uVar13 = (int)puVar5 - (int)param_1;
          puVar6 = puVar17;
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar6 = *param_1;
            param_1 = param_1 + 1;
            puVar6 = puVar6 + 1;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined1 *)puVar6 = *(undefined1 *)param_1;
            param_1 = (undefined4 *)((int)param_1 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
        }
        puVar17 = (undefined4 *)((int)puVar17 + uVar13);
        if (*(short *)((int)puVar8 + 2) == -1) {
          puVar11 = puVar8 + 4;
        }
        else {
          puVar11 = puVar8 + 2;
        }
        *(short *)puVar11 = (short)*puVar11 + 1;
        local_20 = local_20 - 1;
        param_1 = puVar5;
        if (local_20 == 0) {
          return puVar8;
        }
      } while( true );
    }
  }
  return param_1;
}


