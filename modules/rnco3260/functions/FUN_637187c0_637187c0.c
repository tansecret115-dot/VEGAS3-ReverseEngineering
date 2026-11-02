/* Module: rnco3260.dll
   Function: FUN_637187c0
   Address: 637187c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_637187c0(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,int param_9,undefined1 *param_10,undefined1 *param_11,
            int param_12,int param_13,int param_14,int param_15,int param_16)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  int local_18;
  int local_14 [4];
  
  iVar7 = param_12;
  puVar13 = param_11;
  iVar14 = param_9;
  iVar3 = FUN_6375e410((byte)param_1,param_2,param_3,(byte)param_4,param_5,param_6,param_7,param_8,
                       (byte)param_9,(int)param_10,(int)param_11,(byte)param_12,param_13,param_14,
                       param_15,param_16,local_14,&local_18);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = FUN_6375e550(&param_5,&param_7,&param_13,&param_15,local_14[0]);
  if ((iVar3 != 0) &&
     (iVar3 = FUN_6375e550(&param_6,&param_8,&param_14,&param_16,local_18), iVar3 != 0)) {
    if (iVar7 < 0) {
      iVar14 = iVar14 - (int)(puVar13 + -1) * iVar7;
    }
    if (param_4 < 1) {
      return 0xffffffff;
    }
    puVar15 = (uint *)(iVar14 + param_14 * iVar7 + param_13 * 4);
    puVar12 = (uint *)((int)puVar15 + iVar7);
    puVar13 = param_1 + param_6 * param_4 + param_5;
    param_11 = puVar13 + param_4;
    iVar14 = param_4 * param_3;
    param_10 = param_1 + (int)param_5 / 2 + iVar14 + (((int)param_6 / 2) * param_4) / 2;
    param_1 = param_10 + ((int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2);
    if (DAT_637940c0 == 1) {
      param_9 = 0;
      if (0 < (int)param_8 / 2) {
        do {
          param_2 = 0;
          if (0 < (int)param_7 / 2) {
            do {
              uVar1 = *puVar15;
              uVar4 = uVar1 >> 0x10 & 0xff;
              iVar14 = (&DAT_63794900)[uVar1 & 0xff] + (&DAT_63794d00)[uVar4] +
                       (&DAT_63791160)[uVar1 >> 8 & 0xff];
              *puVar13 = *(undefined1 *)(&DAT_63792580 + iVar14);
              uVar2 = puVar15[1];
              uVar10 = uVar2 >> 0x10 & 0xff;
              iVar7 = (&DAT_63794900)[uVar2 & 0xff] + (&DAT_63794d00)[uVar10] +
                      (&DAT_63791160)[uVar2 >> 8 & 0xff];
              iVar14 = iVar14 + iVar7;
              puVar13[1] = *(undefined1 *)(&DAT_63792580 + iVar7);
              uVar8 = *puVar12;
              *param_11 = *(undefined1 *)
                           (&DAT_63792580 +
                           (&DAT_63794900)[uVar8 & 0xff] + (&DAT_63794d00)[uVar8 >> 0x10 & 0xff] +
                           (&DAT_63791160)[uVar8 >> 8 & 0xff]);
              uVar8 = puVar12[1];
              param_11[1] = *(undefined1 *)
                             (&DAT_63792580 +
                             (&DAT_63794900)[uVar8 & 0xff] + (&DAT_63794d00)[uVar8 >> 0x10 & 0xff] +
                             (&DAT_63791160)[uVar8 >> 8 & 0xff]);
              *param_1 = (&DAT_637953cc)[((int)((uVar4 + uVar10) - iVar14) / 2) * 4];
              param_11 = param_11 + 2;
              puVar15 = puVar15 + 2;
              puVar12 = puVar12 + 2;
              puVar13 = puVar13 + 2;
              *param_10 = (&DAT_63793928)
                          [((int)(((uVar1 & 0xff) + (uVar2 & 0xff)) - iVar14) / 2) * 4];
              param_10 = param_10 + 1;
              param_1 = param_1 + 1;
              param_2 = param_2 + 1;
            } while (param_2 < (int)param_7 / 2);
          }
          iVar14 = (param_12 + param_7 * -2) * 2;
          puVar15 = (uint *)((int)puVar15 + iVar14);
          puVar12 = (uint *)((int)puVar12 + iVar14);
          puVar13 = puVar13 + (param_4 * 2 - param_7);
          param_11 = param_11 + (param_4 * 2 - param_7);
          iVar14 = (int)(param_4 - param_7) / 2;
          param_10 = param_10 + iVar14;
          param_1 = param_1 + iVar14;
          param_9 = param_9 + 1;
        } while (param_9 < (int)param_8 / 2);
      }
    }
    else {
      param_9 = 0;
      if (DAT_637940c0 == 2) {
        if (0 < (int)param_8 / 2) {
          do {
            param_2 = 0;
            if (0 < (int)param_7 / 2) {
              do {
                uVar1 = *puVar15;
                *puVar13 = *(undefined1 *)
                            (&DAT_63792580 +
                            (&DAT_63794900)[uVar1 & 0xff] + (&DAT_63791160)[uVar1 >> 8 & 0xff] +
                            (&DAT_63794d00)[uVar1 >> 0x10 & 0xff]);
                uVar1 = puVar15[1];
                puVar13[1] = *(undefined1 *)
                              (&DAT_63792580 +
                              (&DAT_63794900)[uVar1 & 0xff] + (&DAT_63791160)[uVar1 >> 8 & 0xff] +
                              (&DAT_63794d00)[uVar1 >> 0x10 & 0xff]);
                uVar1 = *puVar12;
                uVar8 = uVar1 >> 0x10 & 0xff;
                iVar7 = (&DAT_63794900)[uVar1 & 0xff] + (&DAT_63794d00)[uVar8] +
                        (&DAT_63791160)[uVar1 >> 8 & 0xff];
                *param_11 = *(undefined1 *)(&DAT_63792580 + iVar7);
                uVar2 = puVar12[1];
                uVar10 = uVar2 >> 0x10 & 0xff;
                iVar14 = (&DAT_63794900)[uVar2 & 0xff] + (&DAT_63794d00)[uVar10] +
                         (&DAT_63791160)[uVar2 >> 8 & 0xff];
                iVar7 = iVar7 + iVar14;
                param_11[1] = *(undefined1 *)(&DAT_63792580 + iVar14);
                *param_1 = (&DAT_637953cc)[((int)((uVar10 + uVar8) - iVar7) / 2) * 4];
                puVar15 = puVar15 + 2;
                puVar12 = puVar12 + 2;
                puVar13 = puVar13 + 2;
                *param_10 = (&DAT_63793928)
                            [((int)(((uVar2 & 0xff) + (uVar1 & 0xff)) - iVar7) / 2) * 4];
                param_11 = param_11 + 2;
                param_10 = param_10 + 1;
                param_1 = param_1 + 1;
                param_2 = param_2 + 1;
              } while (param_2 < (int)param_7 / 2);
            }
            iVar14 = (param_12 + param_7 * -2) * 2;
            puVar15 = (uint *)((int)puVar15 + iVar14);
            puVar12 = (uint *)((int)puVar12 + iVar14);
            puVar13 = puVar13 + (param_4 * 2 - param_7);
            param_11 = param_11 + (param_4 * 2 - param_7);
            iVar14 = (int)(param_4 - param_7) / 2;
            param_10 = param_10 + iVar14;
            param_1 = param_1 + iVar14;
            param_9 = param_9 + 1;
          } while (param_9 < (int)param_8 / 2);
          return 0;
        }
      }
      else if (0 < (int)param_8 / 2) {
        do {
          param_2 = 0;
          if (0 < (int)param_7 / 2) {
            do {
              uVar1 = *puVar15;
              uVar4 = uVar1 >> 0x10 & 0xff;
              iVar9 = (&DAT_63794900)[uVar1 & 0xff] + (&DAT_63794d00)[uVar4] +
                      (&DAT_63791160)[uVar1 >> 8 & 0xff];
              *puVar13 = *(undefined1 *)(&DAT_63792580 + iVar9);
              uVar2 = puVar15[1];
              uVar5 = uVar2 >> 0x10 & 0xff;
              iVar14 = (&DAT_63794900)[uVar2 & 0xff] + (&DAT_63794d00)[uVar5] +
                       (&DAT_63791160)[uVar2 >> 8 & 0xff];
              puVar13[1] = *(undefined1 *)(&DAT_63792580 + iVar14);
              uVar8 = *puVar12;
              uVar6 = uVar8 >> 0x10 & 0xff;
              iVar7 = (&DAT_63794900)[uVar8 & 0xff] + (&DAT_63794d00)[uVar6] +
                      (&DAT_63791160)[uVar8 >> 8 & 0xff];
              *param_11 = *(undefined1 *)(&DAT_63792580 + iVar7);
              uVar10 = puVar12[1];
              uVar11 = uVar10 >> 0x10 & 0xff;
              iVar3 = (&DAT_63794900)[uVar10 & 0xff] + (&DAT_63794d00)[uVar11] +
                      (&DAT_63791160)[uVar10 >> 8 & 0xff];
              iVar7 = iVar9 + iVar14 + iVar7 + iVar3;
              param_11[1] = *(undefined1 *)(&DAT_63792580 + iVar3);
              puVar15 = puVar15 + 2;
              iVar14 = (uVar11 + uVar4 + uVar5 + uVar6) - iVar7;
              puVar12 = puVar12 + 2;
              puVar13 = puVar13 + 2;
              *param_1 = (&DAT_637953cc)[((int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2) * 4];
              iVar7 = ((uVar10 & 0xff) + (uVar1 & 0xff) + (uVar2 & 0xff) + (uVar8 & 0xff)) - iVar7;
              *param_10 = (&DAT_63793928)[((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2) * 4];
              param_11 = param_11 + 2;
              param_10 = param_10 + 1;
              param_1 = param_1 + 1;
              param_2 = param_2 + 1;
            } while (param_2 < (int)param_7 / 2);
          }
          iVar14 = (param_12 + param_7 * -2) * 2;
          puVar15 = (uint *)((int)puVar15 + iVar14);
          puVar12 = (uint *)((int)puVar12 + iVar14);
          puVar13 = puVar13 + (param_4 * 2 - param_7);
          param_11 = param_11 + (param_4 * 2 - param_7);
          iVar14 = (int)(param_4 - param_7) / 2;
          param_10 = param_10 + iVar14;
          param_1 = param_1 + iVar14;
          param_9 = param_9 + 1;
        } while (param_9 < (int)param_8 / 2);
        return 0;
      }
    }
  }
  return 0;
}


