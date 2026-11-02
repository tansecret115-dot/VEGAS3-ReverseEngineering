/* Module: mpegin.dll
   Function: FUN_1000b6e0
   Address: 1000b6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_1000b6e0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  uint local_8;
  
  puVar5 = param_1;
  if (param_1[5] == 0) {
    FUN_10007d70((int)param_1,&DAT_10018050);
    FUN_10007d70((int)param_1,(byte *)s_Searching_for_video_frames_____100190e4);
  }
  iVar6 = FUN_1000c0c0((int)param_1);
  if (iVar6 == 0) {
    iVar6 = param_1[0x4b95];
    *(undefined4 *)(iVar6 + 0x78) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x7c) = 0xffffffff;
    iVar6 = param_1[0x4b95];
    *(undefined4 *)(iVar6 + 0x70) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x74) = 0xffffffff;
    iVar6 = param_1[0x4b95];
    FUN_10005520((int *)(iVar6 + 0x128),*(uint *)(iVar6 + 0xf8),*(int *)(iVar6 + 0xfc),0);
    iVar6 = FUN_1000bc80((int)param_1);
    if (iVar6 == 0) {
      if (param_1[0x31] == 0) {
        iVar6 = FUN_10007e90((int)param_1,(byte *)s_First_gop_header_not_found__unab_100190a4);
        param_1[10] = 0;
        return iVar6;
      }
      *(undefined4 *)(param_1[0x4b95] + 0x118) = param_1[0x96];
      iVar6 = param_1[0x4b95];
      puVar2 = (undefined4 *)param_1[0x6f];
      param_1[0x1341] = *(undefined4 *)(iVar6 + 0x80);
      param_1[0x1342] = *(undefined4 *)(iVar6 + 0x84);
      if (puVar2 != (undefined4 *)0x0) {
        uVar7 = param_1[0x81];
        param_1 = puVar2;
        puVar4 = puVar2;
        if (0 < (int)puVar2) {
          do {
            uVar3 = *(uint *)(iVar6 + 0xa8);
            iVar8 = *(int *)(iVar6 + 0xac);
            puVar1 = puVar5 + 0x1341;
            uVar10 = *puVar1;
            *puVar1 = *puVar1 + uVar3;
            puVar5[0x1342] = puVar5[0x1342] + iVar8 + (uint)CARRY4(uVar10,uVar3);
            if (*(double *)(puVar5 + 0x12) != *(double *)(puVar5 + 0x10)) {
              if (uVar7 == 0) {
                uVar3 = *(uint *)(iVar6 + 0xb0);
                iVar8 = *(int *)(iVar6 + 0xb4);
                puVar1 = puVar5 + 0x1341;
                uVar10 = *puVar1;
                *puVar1 = *puVar1 + uVar3;
                puVar5[0x1342] = puVar5[0x1342] + iVar8 + (uint)CARRY4(uVar10,uVar3);
              }
              uVar7 = (uint)(uVar7 == 0);
            }
            param_1 = (undefined4 *)((int)param_1 + -1);
          } while (param_1 != (undefined4 *)0x0);
        }
        while ((((0 < (int)puVar4 && (iVar6 = FUN_1000bc80((int)puVar5), iVar6 == 0)) &&
                (iVar6 = puVar5[0x4b95], *(int *)(iVar6 + 0x10c) == 0)) &&
               ((*(int *)(iVar6 + 0x168) == 0 && ((int)puVar5[0x6f] < (int)puVar2))))) {
          uVar7 = *(uint *)(iVar6 + 0xa8);
          uVar10 = puVar5[0x1341];
          puVar5[0x1341] = uVar10 - uVar7;
          puVar5[0x1342] = (puVar5[0x1342] - *(int *)(iVar6 + 0xac)) - (uint)(uVar10 < uVar7);
          if ((*(double *)(puVar5 + 0x12) != *(double *)(puVar5 + 0x10)) && (puVar5[0x81] != 0)) {
            uVar7 = *(uint *)(iVar6 + 0xb0);
            uVar10 = puVar5[0x1341];
            puVar5[0x1341] = uVar10 - uVar7;
            puVar5[0x1342] = (puVar5[0x1342] - *(int *)(iVar6 + 0xb4)) - (uint)(uVar10 < uVar7);
          }
          puVar4 = (undefined4 *)((int)puVar4 + -1);
        }
      }
      iVar6 = puVar5[0x1342];
      if (-1 < iVar6) {
        iVar6 = puVar5[0x4b95];
        puVar5[0x1343] = 0xffffffff;
        puVar5[0x1344] = 0xffffffff;
        local_8 = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x80) = 0xffffffff;
        iVar9 = -1;
        *(undefined4 *)(iVar6 + 0x84) = 0xffffffff;
        iVar6 = puVar5[0x4b95];
        *(undefined4 *)(iVar6 + 0x78) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x7c) = 0xffffffff;
        iVar6 = puVar5[0x4b95];
        *(undefined4 *)(iVar6 + 0x70) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x74) = 0xffffffff;
        iVar6 = puVar5[0x4b95];
        iVar8 = *(int *)(iVar6 + 0x174);
        uVar7 = *(uint *)(iVar6 + 0x170);
        uVar10 = 0x200000;
        iVar11 = 0;
        if ((iVar8 < 1) && ((iVar8 < 0 || (uVar7 < 0x200000)))) {
          uVar10 = uVar7;
          iVar11 = iVar8;
        }
        if ((iVar11 <= iVar8) && ((iVar11 < iVar8 || (uVar10 <= uVar7)))) {
LAB_1000b97a:
          do {
            if ((0 < (int)puVar5[0x1344]) ||
               ((-1 < (int)puVar5[0x1344] || (*(int *)(iVar6 + 0x168) != 0)))) break;
            FUN_10005520((int *)(iVar6 + 0x128),uVar7 - uVar10,
                         (iVar8 - iVar11) - (uint)(uVar7 < uVar10),0);
            puVar5[0x1343] = *(undefined4 *)(puVar5[0x4b95] + 0x78);
            puVar5[0x1344] = *(undefined4 *)(puVar5[0x4b95] + 0x7c);
            iVar6 = FUN_1000bc80((int)puVar5);
            uVar7 = local_8;
            while (local_8 = uVar7, iVar6 == 0) {
              if ((iVar9 < 1) && (iVar9 < 0)) {
                iVar6 = puVar5[0x4b95];
                if (-1 < *(int *)(iVar6 + 0x84)) {
                  iVar9 = *(int *)(iVar6 + 0x84);
                  local_8 = *(uint *)(iVar6 + 0x80);
                }
              }
              else {
                iVar6 = puVar5[0x4b95];
                iVar8 = *(int *)(iVar6 + 0x84);
                local_8 = *(uint *)(iVar6 + 0x80);
                if (iVar8 < iVar9) {
                  return iVar6;
                }
                bVar12 = iVar8 <= iVar9;
                iVar9 = iVar8;
                if ((bVar12) && (local_8 < uVar7)) {
                  return iVar6;
                }
              }
              iVar8 = *(int *)(iVar6 + 0x7c);
              if (((int)puVar5[0x1344] <= iVar8) &&
                 (((int)puVar5[0x1344] < iVar8 || ((uint)puVar5[0x1343] < *(uint *)(iVar6 + 0x78))))
                 ) {
                puVar5[0x1343] = *(uint *)(iVar6 + 0x78);
                puVar5[0x1344] = iVar8;
              }
              iVar8 = *(int *)(iVar6 + 0x1a4);
              if ((*(int *)(iVar6 + 0x104) <= iVar8) &&
                 ((*(int *)(iVar6 + 0x104) < iVar8 ||
                  (*(uint *)(iVar6 + 0x100) < *(uint *)(iVar6 + 0x1a0))))) {
                *(uint *)(iVar6 + 0x100) = *(uint *)(iVar6 + 0x1a0);
                *(int *)(iVar6 + 0x104) = iVar8;
              }
              iVar6 = FUN_1000bc80((int)puVar5);
              uVar7 = local_8;
            }
            iVar6 = puVar5[0x4b95];
            iVar8 = *(int *)(iVar6 + 0x174);
            uVar7 = *(uint *)(iVar6 + 0x170);
            if ((iVar8 < iVar11) || ((iVar8 <= iVar11 && (uVar7 <= uVar10)))) {
              uVar10 = uVar7 + 1;
              iVar11 = iVar8 + (uint)(0xfffffffe < uVar7);
            }
            else {
              bVar12 = 0xffdfffff < uVar10;
              uVar10 = uVar10 + 0x200000;
              iVar11 = iVar11 + (uint)bVar12;
              if (iVar11 < iVar8) goto LAB_1000b97a;
              if ((iVar8 < iVar11) || (uVar7 < uVar10)) {
                uVar10 = uVar7;
                iVar11 = iVar8;
              }
            }
            if ((iVar8 <= iVar11) && ((iVar8 < iVar11 || (uVar7 < uVar10)))) break;
          } while( true );
        }
        iVar6 = puVar5[0x1344];
        if (-1 < iVar6) {
          FUN_1000dfdc((double)CONCAT44((iVar6 - puVar5[0x1342]) -
                                        (uint)((uint)puVar5[0x1343] < (uint)puVar5[0x1341]),
                                        puVar5[0x1343] - puVar5[0x1341]) * _DAT_10016100 *
                       *(double *)(puVar5 + 0x12));
          lVar13 = __ftol();
          iVar6 = (int)lVar13 + 1;
          puVar5[10] = iVar6;
          if (iVar6 < 0) {
            puVar5[10] = 0;
            return iVar6;
          }
          puVar5[10] = iVar6 - puVar5[0x5a];
          FUN_1000dfdc(((double)(iVar6 - puVar5[0x5a]) / *(double *)(puVar5 + 0x12)) * _DAT_10016108
                      );
          lVar13 = __ftol();
          *(longlong *)(puVar5 + 0x1343) = lVar13 + *(longlong *)(puVar5 + 0x1341);
          *(undefined4 *)(puVar5[0x4b95] + 0x11c) = 1;
          iVar6 = mpegInSeekFrame(puVar5,puVar5[10] - 1);
          while (iVar6 == 0) {
            iVar6 = puVar5[10];
            puVar5[10] = iVar6 + 1;
            FUN_1000dfdc(((double)(iVar6 + 1) / *(double *)(puVar5 + 0x12)) * _DAT_10016108);
            lVar13 = __ftol();
            *(longlong *)(puVar5 + 0x1343) = lVar13 + *(longlong *)(puVar5 + 0x1341);
            iVar6 = mpegInSeekFrame(puVar5,puVar5[10] - 1);
          }
          *(undefined4 *)(puVar5[0x4b95] + 0x11c) = 0;
          iVar6 = puVar5[10];
          puVar5[10] = iVar6 + -1;
          FUN_1000dfdc(((double)(iVar6 + -1) / *(double *)(puVar5 + 0x12)) * _DAT_10016108);
          lVar13 = __ftol();
          iVar6 = (int)(lVar13 + *(longlong *)(puVar5 + 0x1341));
          *(longlong *)(puVar5 + 0x1343) = lVar13 + *(longlong *)(puVar5 + 0x1341);
        }
      }
    }
  }
  return iVar6;
}


