/* Module: ednt3260.dll
   Function: FUN_630f4ae0
   Address: 630f4ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f4ae0(void *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  short *psVar7;
  undefined2 *puVar8;
  int *piVar9;
  short *psVar10;
  byte bVar11;
  short sVar12;
  ushort uVar13;
  int iVar14;
  short sVar15;
  short *psVar16;
  int iVar17;
  undefined2 *local_34;
  int local_30;
  short *local_2c;
  short *local_20;
  int local_1c;
  undefined2 *local_18;
  int *local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_34 = (undefined2 *)0x5;
  *(undefined2 *)((int)param_1 + 0xed50) = 1;
  *(undefined2 *)((int)param_1 + 0x1413c) = 1;
  psVar10 = (short *)((int)param_1 + 0xedc8);
  psVar7 = (short *)((int)param_1 + 0x63fe);
  do {
    iVar14 = 0;
    psVar7[0x44aa] = 0;
    psVar7[0x6ea0] = 0;
    if ((*psVar7 != 0) && ((psVar7[-1] == 0 || (psVar7[0x44e0] != psVar7[0x44df])))) {
      psVar7[0x44aa] = 1;
    }
    psVar16 = psVar10;
    if (0 < *(short *)((int)param_1 + 0x6344)) {
      do {
        if (psVar16[5] != *psVar16) {
          psVar7[0x44aa] = 1;
        }
        iVar14 = iVar14 + 1;
        psVar16 = psVar16 + 1;
      } while (iVar14 < *(short *)((int)param_1 + 0x6344));
    }
    if ((*(short *)((int)param_1 + 0x6312) != 0) && (psVar7[0x4504] != psVar7[0x4503])) {
      psVar7[0x44aa] = 1;
    }
    psVar7 = psVar7 + 1;
    psVar10 = psVar10 + 5;
    local_34 = (undefined2 *)((int)local_34 + -1);
  } while (local_34 != (undefined2 *)0x0);
  local_14 = (int *)((int)param_1 + 0x14034);
  local_34 = (undefined2 *)((int)param_1 + 0xf8c4);
  local_20 = (short *)((int)param_1 + 0x6408);
  local_30 = (int)param_1 + 0xb0d8;
  psVar10 = (short *)((int)param_1 + 0xed20);
  iVar14 = 0x7733;
  do {
    iVar17 = 0;
    bVar11 = (byte)*(undefined2 *)((int)param_1 + 0x3fc04);
    sVar4 = *(short *)(&DAT_63102178 + psVar10[-6] * 2) >> (bVar11 & 0x1f);
    sVar5 = *(short *)(&DAT_63102170 + *psVar10 * 2) >> (bVar11 & 0x1f);
    sVar1 = *(short *)(&DAT_63102180 + psVar10[6] * 2);
    sVar2 = *(short *)(&DAT_63102450 + psVar10[0xc] * 2);
    if (0 < *(short *)((int)param_1 + 0x6344)) {
      local_1c = local_30;
      psVar7 = local_20 + 0x6e76;
      local_18 = local_34;
      do {
        if (((psVar7[-0x4886] == 0) && (psVar10[-0xc] == 0)) && (psVar10[0x18] == 0)) {
          local_2c = (short *)0x0;
          *(undefined2 *)((int)param_1 + (iVar14 + iVar17) * 2 + -0x32) =
               *(undefined2 *)((int)param_1 + (iVar14 + iVar17) * 2 + -0x3c);
          *(undefined2 *)((int)param_1 + (iVar14 + iVar17) * 2 + 10) =
               *(undefined2 *)((int)param_1 + (iVar14 + iVar17) * 2);
          if (0 < *(short *)((int)param_1 + (iVar14 + iVar17) * 2 + -0x3dfa)) {
            puVar8 = (undefined2 *)(local_1c + 0x5410);
            do {
              *puVar8 = puVar8[-0x4f1];
              local_2c = (short *)((int)local_2c + 1);
              puVar8 = puVar8 + 1;
            } while ((int)local_2c < (int)psVar7[-0x4844]);
          }
          local_2c = (short *)0x0;
          sVar12 = *(short *)((int)param_1 + (iVar14 + iVar17) * 2 + 0x5284);
          *(short *)((int)param_1 + (iVar14 + iVar17) * 2 + 0x528e) = sVar12;
          puVar8 = local_18;
          if (0 < sVar12) {
            do {
              *puVar8 = puVar8[-0xfa];
              local_2c = (short *)((int)local_2c + 1);
              puVar8 = puVar8 + 1;
            } while ((int)local_2c < (int)*psVar7);
          }
        }
        else {
          psVar10[0x2a0e] = 1;
          local_c = 0xffff8000;
          local_8 = 0xffff8000;
          FUN_630f61c0(param_1,local_1c,(int)((int)param_1 + (iVar14 + -0x76af + iVar17) * 0x1fa),
                       (int)local_18,0,*(short *)((int)param_1 + (iVar14 + iVar17) * 2 + -0x3dfa),0,
                       (undefined2 *)((int)param_1 + (iVar14 + iVar17) * 2 + 0x528e),sVar4,sVar5,
                       sVar1,*(short *)(&DAT_63102188 +
                                       *(short *)((int)param_1 + (iVar14 + iVar17) * 2 + -0x9e) * 2)
                       ,sVar2,(short *)&local_c,(short *)&local_8);
          *(short *)((int)param_1 + (iVar14 + iVar17) * 2 + -0x32) = (short)local_c;
          *(short *)((int)param_1 + (iVar14 + iVar17) * 2 + 10) = (short)local_8;
        }
        iVar17 = iVar17 + 1;
        local_18 = local_18 + 0x32;
        psVar7 = psVar7 + 1;
        local_1c = local_1c + 0x1fa;
      } while (iVar17 < *(short *)((int)param_1 + 0x6344));
    }
    if (psVar10[-0x4492] != 0) {
      sVar15 = 0x7fff;
      local_1c = 0;
      sVar12 = 0x7fff;
      if (0 < *(short *)((int)param_1 + 0x6344)) {
        local_2c = local_20;
        do {
          if (*local_2c != 0) {
            sVar3 = *(short *)((int)param_1 + (local_1c + iVar14) * 2 + -0x32);
            if (sVar3 <= sVar15) {
              sVar15 = sVar3;
            }
            sVar3 = *(short *)((int)param_1 + (local_1c + iVar14) * 2 + 10);
            if (sVar3 <= sVar12) {
              sVar12 = sVar3;
            }
          }
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (local_1c < *(short *)((int)param_1 + 0x6344));
      }
      uVar6 = sVar15 - 0x300;
      if ((short)uVar6 < 0) {
        uVar6 = 0;
      }
      else if (0x700 < (short)uVar6) {
        uVar6 = 0x700;
      }
      uVar13 = sVar12 - 0x300;
      psVar10[0x7e] = (uVar6 & 0x700) + 0x300;
      if ((short)uVar13 < 0) {
        uVar13 = 0;
      }
      else if (0x700 < (short)uVar13) {
        uVar13 = 0x700;
      }
      psVar10[0x84] = (uVar13 & 0x700) + 0x300;
    }
    if (*(short *)((int)param_1 + 0x6312) != 0) {
      if (((psVar10[-0x1e7e] == 0) && (psVar10[-0xc] == 0)) && (psVar10[0x18] == 0)) {
        iVar17 = 0;
        piVar9 = local_14;
        if (0 < psVar10[-0x1e3c]) {
          do {
            iVar17 = iVar17 + 1;
            *(undefined2 *)piVar9 = *(undefined2 *)((int)piVar9 + -0xe);
            piVar9 = (int *)((int)piVar9 + 2);
          } while (iVar17 < psVar10[-0x1e3c]);
        }
        iVar17 = 0;
        psVar10[0x2a08] = psVar10[0x2a07];
        if (0 < psVar10[0x2a07]) {
          puVar8 = (undefined2 *)((int)local_14 + -0x3bb8);
          do {
            iVar17 = iVar17 + 1;
            *puVar8 = puVar8[-7];
            puVar8 = puVar8 + 1;
          } while (iVar17 < psVar10[0x2a08]);
        }
      }
      else {
        local_c = 0xffff8000;
        local_8 = 0xffff8000;
        psVar10[0x2a0e] = 1;
        FUN_630f61c0(param_1,(int)((int)local_14 + -0x5410),(int)local_14,
                     (int)((int)local_14 + -0x3bb8),0,psVar10[-0x1e3c],0,psVar10 + 0x2a08,sVar4,
                     sVar5,sVar1,*(short *)(&DAT_63102188 + psVar10[0x72] * 2),sVar2,
                     (short *)&local_c,(short *)&local_8);
      }
    }
    local_30 = local_30 + 0x9e2;
    local_34 = local_34 + 0xfa;
    iVar14 = iVar14 + 5;
    psVar10 = psVar10 + 1;
    local_20 = local_20 + 5;
    local_14 = (int *)((int)local_14 + 0xe);
  } while (iVar14 < 0x7751);
  psVar10 = (short *)((int)param_1 + 0x63fc);
  *(undefined2 *)((int)param_1 + 0xee10) = *(undefined2 *)((int)param_1 + 0x63fc);
  iVar14 = 5;
  do {
    psVar10[0x450b] = 0;
    if ((psVar10[1] != 0) &&
       (((*psVar10 == 0 || (psVar10[0x4511] != psVar10[0x4510])) ||
        (psVar10[0x4517] != psVar10[0x4516])))) {
      psVar10[0x450b] = 1;
    }
    psVar10 = psVar10 + 1;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  local_14 = (int *)((int)param_1 + 0x104d0);
  local_30 = (int)param_1 + 0xf66c;
  local_34 = (undefined2 *)0x0;
  psVar10 = (short *)((int)param_1 + 0xed20);
  do {
    sVar1 = *(short *)(&DAT_63102178 + psVar10[-6] * 2);
    sVar2 = *(short *)(&DAT_63102170 + *psVar10 * 2);
    bVar11 = (byte)*(undefined2 *)((int)param_1 + 0x3fc04);
    sVar4 = *(short *)(&DAT_63102180 + psVar10[6] * 2);
    sVar5 = *(short *)(&DAT_63102450 + psVar10[0xc] * 2);
    if (psVar10[-0x4492] != 0) {
      if ((((psVar10[-0x1ea2] == 0) && (psVar10[-0xc] == 0)) && (psVar10[0x18] == 0)) &&
         (psVar10[0x78] == 0)) {
        iVar14 = (int)psVar10[-0x445c];
        if (iVar14 < psVar10[-0x4456]) {
          do {
            iVar14 = iVar14 + 1;
            *(undefined2 *)(*local_14 + -2 + iVar14 * 2) =
                 *(undefined2 *)(local_14[-1] + -2 + iVar14 * 2);
          } while (iVar14 < psVar10[-0x4456]);
        }
        psVar10[0x29de] = psVar10[0x29dd];
        psVar10[0x29e4] = psVar10[0x29e3];
        iVar14 = (int)psVar10[0x29de];
        if (iVar14 < psVar10[0x29e3]) {
          puVar8 = (undefined2 *)((int)param_1 + ((int)local_34 + iVar14) * 2 + 0xf66c);
          do {
            iVar14 = iVar14 + 1;
            *puVar8 = puVar8[-0x32];
            puVar8 = puVar8 + 1;
          } while (iVar14 < psVar10[0x29e4]);
        }
      }
      else {
        psVar10[0x2a0e] = 1;
        sVar12 = *(short *)(&DAT_63102430 + psVar10[-0x4468] * 2);
        psVar10[0x29de] = sVar12;
        sVar15 = psVar10[0xc] >> 0xf;
        local_c = CONCAT22(sVar15,psVar10[0x7e]);
        local_8 = CONCAT22(sVar15,psVar10[0x84]);
        FUN_630f61c0(param_1,local_14[-0x1504],*local_14,local_30,psVar10[-0x445c],psVar10[-0x4456],
                     sVar12,psVar10 + 0x29e4,sVar1 >> (bVar11 & 0x1f),sVar2 >> (bVar11 & 0x1f),sVar4
                     ,*(short *)(&DAT_63102188 + psVar10[0x4e] * 2),sVar5,(short *)&local_c,
                     (short *)&local_8);
      }
    }
    local_14 = local_14 + 1;
    psVar10 = psVar10 + 1;
    local_34 = (undefined2 *)((int)local_34 + 0x32);
    local_30 = local_30 + 100;
  } while ((int)local_34 < 300);
  return;
}


