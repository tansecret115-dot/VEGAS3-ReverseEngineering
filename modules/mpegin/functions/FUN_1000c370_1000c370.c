/* Module: mpegin.dll
   Function: FUN_1000c370
   Address: 1000c370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __cdecl FUN_1000c370(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  uint local_10;
  int local_c;
  uint local_8;
  int iStack_4;
  
  if (param_1[5] == 0) {
    FUN_10007d70((int)param_1,&DAT_10018050);
    FUN_10007d70((int)param_1,(byte *)s_Searching_for_video_frames_____100190e4);
  }
  iVar1 = FUN_1000c0c0((int)param_1);
  iVar2 = extraout_EDX;
  if ((iVar1 == 0) && (iVar1 = 0, param_1[0x5b] != 0)) {
    iVar2 = param_1[0x4b95];
    *(undefined4 *)(iVar2 + 0x78) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x7c) = 0xffffffff;
    iVar2 = param_1[0x4b95];
    *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x74) = 0xffffffff;
    iVar2 = param_1[0x4b95];
    FUN_10005520((int *)(iVar2 + 0x128),*(uint *)(iVar2 + 0xf8),*(int *)(iVar2 + 0xfc),0);
    iVar1 = FUN_1000bc80((int)param_1);
    iVar2 = extraout_EDX_00;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1[0x4b95] + 0x118) = param_1[0x96];
      iVar2 = param_1[0x4b95];
      param_1[0x1341] = *(undefined4 *)(iVar2 + 0x78);
      iVar1 = *(int *)(iVar2 + 0x7c);
      param_1[0x1342] = iVar1;
      if (-1 < iVar1) {
        uVar3 = param_1[0x6f];
        iVar5 = 0;
        uVar7 = uVar3;
        while ((((uVar7 != 0 && (iVar2 = FUN_1000bc80((int)param_1), iVar2 == 0)) &&
                (*(int *)(param_1[0x4b95] + 0x10c) == 0)) &&
               ((*(int *)(param_1[0x4b95] + 0x168) == 0 && ((uint)param_1[0x6f] < uVar3))))) {
          iVar5 = iVar5 + 1;
          uVar7 = uVar7 - 1;
        }
        iVar2 = param_1[0x4b95];
        iVar1 = *(int *)(iVar2 + 0x174);
        uVar3 = *(uint *)(iVar2 + 0x170);
        local_8 = 0x200000;
        iStack_4 = 0;
        local_10 = 0xffffffff;
        local_c = -1;
        if ((iVar1 < 1) && ((iVar1 < 0 || (uVar3 < 0x200000)))) {
          local_8 = uVar3;
          iStack_4 = iVar1;
        }
        uVar7 = 0xffffffff;
        if ((iStack_4 <= iVar1) &&
           ((iVar4 = iStack_4, uVar6 = local_8, iStack_4 < iVar1 || (local_8 <= uVar3)))) {
          while ((uVar7 = local_10, local_c < 1 && ((local_c < 0 && (*(int *)(iVar2 + 0x168) == 0)))
                 )) {
            FUN_10005520((int *)(iVar2 + 0x128),uVar3 - uVar6,
                         (iVar1 - iVar4) - (uint)(uVar3 < uVar6),0);
            iVar2 = param_1[0x4b95];
            local_10 = 0xffffffff;
            *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
            local_c = -1;
            *(undefined4 *)(iVar2 + 0x74) = 0xffffffff;
            iVar2 = param_1[0x4b95];
            *(undefined4 *)(iVar2 + 0x78) = 0xffffffff;
            *(undefined4 *)(iVar2 + 0x7c) = 0xffffffff;
            param_1[0x1343] = 0xffffffff;
            param_1[0x1344] = 0xffffffff;
            iVar2 = FUN_1000bc80((int)param_1);
            if (iVar2 == 0) {
              do {
                if (param_1[0x70] == 1) {
                  iVar2 = param_1[0x1344];
                  uVar3 = param_1[0x1343];
                  uVar7 = *(uint *)(param_1[0x4b95] + 0x78);
                  iVar1 = *(int *)(param_1[0x4b95] + 0x7c);
                  if ((iVar2 <= iVar1) && ((iVar2 < iVar1 || (uVar3 < uVar7)))) {
                    param_1[0x1343] = uVar7;
                    param_1[0x1344] = iVar1;
                    local_10 = uVar3;
                    local_c = iVar2;
                  }
                }
                iVar2 = FUN_1000bc80((int)param_1);
              } while (iVar2 == 0);
              if ((local_c < 1) && (local_c < 0)) goto LAB_1000c5c5;
            }
            else {
LAB_1000c5c5:
              uVar3 = *(uint *)(param_1[0x4b95] + 0x170);
              iVar2 = *(int *)(param_1[0x4b95] + 0x174);
              if ((iVar2 < iVar4) || ((iVar2 <= iVar4 && (uVar3 <= uVar6)))) {
                bVar8 = 0xfffffffe < uVar3;
                uVar3 = uVar3 + 1;
                iVar2 = iVar2 + (uint)bVar8;
              }
              else {
                local_8 = uVar6 + 0x80000;
                iVar4 = iVar4 + (uint)(0xfff7ffff < uVar6);
                uVar6 = local_8;
                iStack_4 = iVar4;
                if ((iVar4 < iVar2) || ((iVar4 <= iVar2 && (local_8 <= uVar3)))) goto LAB_1000c608;
              }
              iVar4 = iVar2;
              uVar6 = uVar3;
              local_8 = uVar3;
              iStack_4 = iVar2;
            }
LAB_1000c608:
            iVar2 = param_1[0x4b95];
            iVar1 = *(int *)(iVar2 + 0x174);
            uVar3 = *(uint *)(iVar2 + 0x170);
            if ((iVar1 <= iVar4) && ((uVar7 = local_10, iVar1 < iVar4 || (uVar3 < uVar6)))) break;
          }
        }
        param_1[0x1343] = uVar7;
        param_1[0x1344] = local_c;
        if ((-1 < local_c) && ((0 < local_c || (uVar7 != 0)))) {
          iVar2 = param_1[0x4b95];
          FUN_10005520((int *)(iVar2 + 0x128),*(uint *)(iVar2 + 0x170) - local_8,
                       (*(int *)(iVar2 + 0x174) - iStack_4) -
                       (uint)(*(uint *)(iVar2 + 0x170) < local_8),0);
          iVar2 = param_1[0x4b95];
          *(undefined4 *)(iVar2 + 0x78) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x7c) = 0xffffffff;
          iVar2 = param_1[0x4b95];
          *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x74) = 0xffffffff;
          iVar2 = FUN_1000bc80((int)param_1);
          while ((iVar2 == 0 &&
                 ((*(uint *)(param_1[0x4b95] + 0x78) != uVar7 ||
                  (*(int *)(param_1[0x4b95] + 0x7c) != local_c))))) {
            iVar2 = FUN_1000bc80((int)param_1);
          }
          iVar2 = 1;
          *(undefined4 *)(param_1[0x4b95] + 0xc) = 1;
          uVar3 = param_1[0x6f];
          iVar1 = FUN_10006440((int)param_1,0);
          while (iVar1 == 0) {
            iVar1 = param_1[0x4b95];
            if ((*(int *)(iVar1 + 0xc) == 0) || (uVar3 < (uint)param_1[0x6f])) {
              iVar2 = iVar2 + 1;
            }
            iVar4 = *(int *)(iVar1 + 0x1a4);
            if ((*(int *)(iVar1 + 0x104) <= iVar4) &&
               ((*(int *)(iVar1 + 0x104) < iVar4 ||
                (*(uint *)(iVar1 + 0x100) < *(uint *)(iVar1 + 0x1a0))))) {
              *(uint *)(iVar1 + 0x100) = *(uint *)(iVar1 + 0x1a0);
              *(int *)(iVar1 + 0x104) = iVar4;
            }
            iVar1 = FUN_10006440((int)param_1,0);
          }
          if (iVar5 != 0) {
            iVar1 = param_1[0x4b95];
            do {
              uVar3 = *(uint *)(iVar1 + 0xa8);
              uVar7 = param_1[0x1341];
              param_1[0x1341] = uVar7 - uVar3;
              param_1[0x1342] = (param_1[0x1342] - *(int *)(iVar1 + 0xac)) - (uint)(uVar7 < uVar3);
              if ((*(double *)(param_1 + 0x12) != *(double *)(param_1 + 0x10)) &&
                 (iVar4 = param_1[0x32], param_1[0x32] = (uint)(iVar4 == 0), (iVar4 == 0) != 0)) {
                uVar3 = *(uint *)(iVar1 + 0xb0);
                uVar7 = param_1[0x1341];
                param_1[0x1341] = uVar7 - uVar3;
                param_1[0x1342] = (param_1[0x1342] - *(int *)(iVar1 + 0xb4)) - (uint)(uVar7 < uVar3)
                ;
              }
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          FUN_1000e484((double)CONCAT44((param_1[0x1344] - param_1[0x1342]) -
                                        (uint)((uint)param_1[0x1343] < (uint)param_1[0x1341]),
                                        param_1[0x1343] - param_1[0x1341]) * _DAT_10016100 *
                       *(double *)(param_1 + 0x12) + _DAT_10016118);
          lVar9 = __ftol();
          iVar1 = (int)lVar9;
          param_1[10] = iVar1;
          if (iVar1 < *(int *)(param_1[0x4b95] + 0x114)) {
            param_1[10] = 0;
            return lVar9;
          }
          param_1[10] = iVar1 + iVar2;
          FUN_1000dfdc(((double)(iVar1 + iVar2) / *(double *)(param_1 + 0x12)) * _DAT_10016108);
          lVar9 = __ftol();
          *(longlong *)(param_1 + 0x1343) = lVar9 + *(longlong *)(param_1 + 0x1341);
          *(undefined4 *)(param_1[0x4b95] + 0x11c) = 1;
          iVar1 = mpegInSeekFrame(param_1,param_1[10] - 1);
          iVar2 = extraout_EDX_01;
          while (iVar1 != 0) {
            iVar2 = param_1[10];
            param_1[10] = iVar2 + -1;
            FUN_1000dfdc(((double)(iVar2 + -1) / *(double *)(param_1 + 0x12)) * _DAT_10016108);
            lVar9 = __ftol();
            *(longlong *)(param_1 + 0x1343) = lVar9 + *(longlong *)(param_1 + 0x1341);
            iVar1 = mpegInSeekFrame(param_1,param_1[10] - 1);
            iVar2 = extraout_EDX_02;
          }
          iVar1 = param_1[0x4b95];
          *(undefined4 *)(iVar1 + 0x11c) = 0;
        }
      }
    }
  }
  return CONCAT44(iVar2,iVar1);
}


