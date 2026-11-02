/* Module: mpegin.dll
   Function: FUN_1000c8f0
   Address: 1000c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000c8f0(int param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  int local_14;
  int iStack_10;
  int iStack_c;
  int local_8;
  int iStack_4;
  
  iVar4 = param_1;
  bVar2 = false;
  local_14 = -1;
  local_8 = -1;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x114) = 0;
  uVar5 = (**(code **)(param_1 + 0x12e4c))(0x4f1a00);
  **(undefined4 **)(param_1 + 0x12e54) = uVar5;
  puVar13 = (undefined4 *)**(undefined4 **)(param_1 + 0x12e54);
  if (puVar13 == (undefined4 *)0x0) {
    (*(undefined4 **)(param_1 + 0x12e54))[0x5a] = 1;
    return;
  }
  iVar6 = 0;
  for (iVar9 = 0x13c680; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  do {
    iVar6 = iVar6 + 0x18;
    *(undefined2 *)(**(int **)(param_1 + 0x12e54) + -0xc + iVar6) = 0xffff;
    *(undefined4 *)(**(int **)(param_1 + 0x12e54) + -8 + iVar6) = 0xffffffff;
    *(undefined2 *)(**(int **)(param_1 + 0x12e54) + -10 + iVar6) = 0xffff;
  } while (iVar6 < 0x4f1a00);
  piVar7 = (int *)(param_1 + 0x12e54);
  bVar3 = false;
  param_1 = 0;
  iStack_c = 0;
  *(undefined4 *)(*piVar7 + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar4 + 0x12e54) + 0x164) = 1;
  *(undefined4 *)(iVar4 + 0x4d04) = 0;
  *(undefined4 *)(iVar4 + 0xc0) = 0;
  *(undefined4 *)(iVar4 + 200) = 0;
  *(undefined4 *)(iVar4 + 0x4d08) = 0;
  if (*(int *)(iVar4 + 0x14) == 0) {
    FUN_10007d70(iVar4,&DAT_10018050);
    FUN_10007d70(iVar4,(byte *)s_Searching_for_video_frames_____100190e4);
  }
  iVar6 = FUN_10006440(iVar4,0);
  if (iVar6 == 0) {
    iVar6 = 0;
    do {
      puVar13 = *(undefined4 **)(iVar4 + 0x12e54);
      if (puVar13[0x43] != 0) break;
      if (*(int *)(iVar4 + 0x4d04) == 0 && *(int *)(iVar4 + 0x4d08) == 0) {
        iVar9 = puVar13[0x1f];
        if ((-1 < iVar9) && ((0 < iVar9 || (puVar13[0x1e] != 0)))) {
          *(undefined4 *)(iVar4 + 0x4d04) = puVar13[0x1e];
          *(int *)(iVar4 + 0x4d08) = iVar9;
        }
      }
      if (puVar13[3] == 0) {
        param_1 = param_1 + 1;
      }
      if (*(int *)(iVar4 + 0xc0) == 0) {
        FUN_10007e90(iVar4,(byte *)s_First_sequence_header_not_found__10019104);
        *(undefined4 *)(*(int *)(iVar4 + 0x12e54) + 0x168) = 1;
        return;
      }
      if (*(int *)(iVar4 + 0x204) != 0) {
        bVar3 = true;
      }
      if ((*(int *)(iVar4 + 0x1f0) == 3) || (!bVar2)) {
        bVar2 = true;
        if (*(int *)(iVar4 + 0x28) == 0) {
          iVar6 = *(int *)(iVar4 + 0x1bc);
        }
        if (((*(int *)(iVar4 + 0x28) == 1) && (iVar6 != 0)) && (iVar6 < *(int *)(iVar4 + 0x1bc))) {
          local_14 = local_14 - iVar6;
          puVar12 = (undefined4 *)*puVar13 + iVar6 * 6;
          puVar13 = (undefined4 *)*puVar13;
          for (iVar9 = 6; iStack_c = iVar6, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
        }
        piVar7 = *(int **)(iVar4 + 0x12e54);
        iVar9 = *(int *)(iVar4 + 0x1bc);
        if (param_1 == 1) {
          iVar9 = iVar9 - piVar7[3];
          iVar11 = iStack_c;
        }
        else {
          iVar11 = piVar7[3];
        }
        iVar9 = (iVar9 - iVar11) + *(int *)(iVar4 + 0x28);
        if (0x34bbf < iVar9) {
          FUN_10007e90(iVar4,(byte *)s_Maximum_video_frames_exceeded_10019138);
          *(undefined4 *)(*(int *)(iVar4 + 0x12e54) + 0x168) = 1;
          return;
        }
        if ((iVar9 == 0) && (*(int *)(iVar4 + 0x204) != 0)) {
          *(undefined4 *)(iVar4 + 200) = 1;
        }
        iVar11 = *piVar7;
        iVar10 = iVar9 * 0x18;
        *(int *)(iVar10 + iVar11) = piVar7[0x3c];
        ((int *)(iVar10 + iVar11))[1] = piVar7[0x3d];
        piVar7 = *(int **)(iVar4 + 0x12e54);
        if (piVar7[0x55] == 0) {
          *(undefined4 *)(iVar10 + 8 + *piVar7) = 0;
        }
        else {
          *(int *)(iVar10 + 8 + *piVar7) = piVar7[0x42];
        }
        *(undefined2 *)(**(int **)(iVar4 + 0x12e54) + 0xe + iVar10) = *(undefined2 *)(iVar4 + 0x1c0)
        ;
        *(undefined2 *)(**(int **)(iVar4 + 0x12e54) + 0xc + iVar10) = *(undefined2 *)(iVar4 + 0x1bc)
        ;
        *(undefined4 *)(**(int **)(iVar4 + 0x12e54) + 0x14 + iVar10) = *(undefined4 *)(iVar4 + 0x28)
        ;
        iVar11 = *(int *)(iVar4 + 0x1c0);
        if (0 < iVar11) {
          if (iVar11 < 3) {
            local_8 = local_14;
            if (iVar11 == 1) {
              *(undefined4 *)(**(int **)(iVar4 + 0x12e54) + 0x10 + iVar10) = 0xffffffff;
              local_14 = iVar9;
            }
            else {
              *(int *)(**(int **)(iVar4 + 0x12e54) + 0x10 + iVar10) = local_14;
              local_14 = iVar9;
            }
          }
          else if (iVar11 == 3) {
            if (local_8 < 0) {
              *(int *)(**(int **)(iVar4 + 0x12e54) + 0x10 + iVar10) = local_14;
            }
            else {
              *(int *)(**(int **)(iVar4 + 0x12e54) + 0x10 + iVar10) = local_8;
            }
          }
        }
        *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 1;
        *(int *)(*(int *)(iVar4 + 0x12e54) + 0xc) = *(int *)(*(int *)(iVar4 + 0x12e54) + 0xc) + 1;
        if ((*(int *)(iVar4 + 0x14) == 0) && (*(int *)(iVar4 + 0x28) % 100 == 0)) {
          FUN_10007d70(iVar4,(byte *)s__8d_frames_found_10019158);
        }
      }
      else {
        bVar2 = false;
      }
      iVar9 = FUN_10006440(iVar4,0);
    } while (iVar9 == 0);
    if (((bVar3) && (iVar6 = *(int *)(iVar4 + 0x178), 2 < iVar6)) && (iVar6 < 6)) {
      if (iVar6 != 3) {
        if (iVar6 == 4) {
          *(undefined4 *)(iVar4 + 0x48) = 0xb5112287;
          *(undefined4 *)(iVar4 + 0x4c) = 0x4037f9dc;
          goto LAB_1000ccd4;
        }
        if (iVar6 != 5) goto LAB_1000ccd4;
      }
      *(undefined4 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x4c) = 0x40380000;
      goto LAB_1000ccd4;
    }
  }
  *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x40);
  *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x44);
LAB_1000ccd4:
  iVar6 = 0;
  *(undefined4 *)(*(int *)(iVar4 + 0x12e54) + 0x44) = 0;
  piVar7 = *(int **)(iVar4 + 0x12e54);
  param_1 = 0;
  if (*(short *)(*piVar7 + 0xe) == -1) {
    iVar9 = 0;
    do {
      iVar6 = iVar6 + 1;
      piVar7[0x11] = piVar7[0x11] + 1;
      piVar7 = *(int **)(iVar4 + 0x12e54);
      iVar11 = iVar9 + 0x26;
      iVar9 = iVar9 + 0x18;
      param_1 = iVar6;
    } while (*(short *)(iVar11 + *piVar7) == -1);
  }
  iVar6 = *(int *)(iVar4 + 0x28);
  if (param_1 < iVar6) {
    iVar9 = param_1 * 0x18;
    local_14 = iVar6;
    do {
      iVar11 = **(int **)(iVar4 + 0x12e54);
      if (*(short *)(iVar11 + 0xe + iVar9) == -1) {
        iVar10 = 1;
        iStack_10 = 1;
        if (*(short *)(iVar11 + 0x26 + iVar9) == -1) {
          psVar8 = (short *)(iVar11 + 0x3e + iVar9);
          do {
            sVar1 = *psVar8;
            iVar10 = iVar10 + 1;
            psVar8 = psVar8 + 0xc;
            iStack_10 = iVar10;
          } while (sVar1 == -1);
        }
        if (param_1 < iVar6) {
          iVar10 = (iStack_10 + param_1) * 0x18;
          iStack_4 = local_14 - param_1;
          iVar11 = iVar9;
          do {
            puVar13 = (undefined4 *)(**(int **)(iVar4 + 0x12e54) + iVar10);
            puVar12 = (undefined4 *)(**(int **)(iVar4 + 0x12e54) + iVar11);
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar12 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar12 = puVar12 + 1;
            }
            iVar6 = **(int **)(iVar4 + 0x12e54) + iVar11;
            if ((*(short *)(iVar6 + 0xe) != 1) && (param_1 < *(int *)(iVar6 + 0x10))) {
              *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - iStack_10;
            }
            iVar11 = iVar11 + 0x18;
            iVar10 = iVar10 + 0x18;
            iStack_4 = iStack_4 + -1;
            iVar6 = local_14;
          } while (iStack_4 != 0);
        }
        iVar6 = iVar6 + -1;
        local_14 = iVar6;
      }
      param_1 = param_1 + 1;
      iVar9 = iVar9 + 0x18;
    } while (param_1 < iVar6);
  }
  iVar11 = 0;
  iVar9 = 0;
  *(undefined4 *)(iVar4 + 0x16c) = 0;
  *(undefined4 *)(iVar4 + 0x168) = 0;
  *(undefined4 *)(iVar4 + 0x170) = 0;
  iVar6 = 0;
  do {
    if (*(int *)(iVar4 + 0x28) <= iVar9) break;
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 0x18;
    if (*(short *)(**(int **)(iVar4 + 0x12e54) + -10 + iVar6) == 1) {
      iVar11 = iVar11 + 1;
    }
  } while (iVar11 < 3);
  if (iVar11 != 0) {
    iVar6 = 0;
    if ((iVar11 < 1) || (2 < iVar11)) {
      piVar7 = *(int **)(iVar4 + 0x12e54);
      iVar11 = 0;
      iVar9 = *piVar7;
      psVar8 = (short *)(iVar9 + 0xe);
      do {
        sVar1 = *psVar8;
        iVar6 = iVar6 + 1;
        psVar8 = psVar8 + 0xc;
        if (sVar1 == 1) {
          iVar11 = iVar11 + 1;
        }
      } while (iVar11 < 2);
    }
    else {
      piVar7 = *(int **)(iVar4 + 0x12e54);
      iVar11 = 0;
      iVar9 = *piVar7;
      psVar8 = (short *)(iVar9 + 0xe);
      do {
        sVar1 = *psVar8;
        iVar6 = iVar6 + 1;
        psVar8 = psVar8 + 0xc;
        if (sVar1 == 1) {
          iVar11 = iVar11 + 1;
        }
      } while (iVar11 == 0);
    }
    iVar11 = iVar6 * 0x18;
    iVar10 = 0;
    sVar1 = *(short *)(iVar11 + 0xe + iVar9);
    for (; (sVar1 != 1 && (iVar6 < *(int *)(iVar4 + 0x28))); iVar6 = iVar6 + 1) {
      *(int *)(iVar4 + 0x16c) = *(int *)(iVar4 + 0x16c) + 1;
      if (iVar10 < 2) {
        iVar10 = iVar10 + 1;
        if (*(short *)(*piVar7 + 0xe + iVar11) == 2) {
          *(undefined4 *)(iVar4 + 0x168) = 0;
        }
        else {
          *(int *)(iVar4 + 0x168) = *(int *)(iVar4 + 0x168) + 1;
        }
      }
      iVar11 = iVar11 + 0x18;
      sVar1 = *(short *)(*piVar7 + 0xe + iVar11);
    }
    if ((*(int *)(iVar4 + 0x16c) == 0) || (*(int *)(iVar4 + 0x168) == 0)) {
      *(undefined4 *)(iVar4 + 0x168) = 0;
      *(undefined4 *)(iVar4 + 0x16c) = 0;
    }
    else {
      iVar6 = *(int *)(iVar4 + 0x16c) + 1;
      iVar9 = *(int *)(iVar4 + 0x168) + 1;
      *(int *)(iVar4 + 0x16c) = iVar6;
      *(int *)(iVar4 + 0x168) = iVar9;
      if (iVar6 % iVar9 != 0) {
        *(undefined4 *)(iVar4 + 0x170) = 1;
      }
    }
  }
  lVar14 = __ftol();
  *(longlong *)(*(int *)(iVar4 + 0x12e54) + 0xa8) = lVar14;
  if (*(double *)(iVar4 + 0x48) != *(double *)(iVar4 + 0x40)) {
    iVar6 = *(int *)(iVar4 + 0x12e54);
    uVar15 = __alldiv(*(uint *)(iVar6 + 0xa8),*(uint *)(iVar6 + 0xac),2,0);
    *(undefined8 *)(iVar6 + 0xb0) = uVar15;
    *(undefined4 *)(*(int *)(iVar4 + 0x12e54) + 0x164) = 0;
    return;
  }
  iVar6 = *(int *)(iVar4 + 0x12e54);
  *(undefined4 *)(iVar6 + 0xb0) = 0;
  *(undefined4 *)(iVar6 + 0xb4) = 0;
  *(undefined4 *)(*(int *)(iVar4 + 0x12e54) + 0x164) = 0;
  return;
}


