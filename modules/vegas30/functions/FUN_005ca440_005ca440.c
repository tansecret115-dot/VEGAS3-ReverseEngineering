/* Module: vegas30.exe
   Function: FUN_005ca440
   Address: 005ca440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005ca749) */

int FUN_005ca440(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                int param_7,int *param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  int lParam;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  uint local_8;
  int local_4;
  
  iVar8 = param_4;
  uVar5 = param_3;
  lParam = param_2;
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  iVar6 = *(int *)(param_2 + 0x1c);
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar4 = param_3 - *(uint *)(param_2 + 0x18);
  iVar2 = (param_4 - iVar6) - (uint)(param_3 < *(uint *)(param_2 + 0x18));
  iVar7 = *(int *)(param_2 + 0x24);
  if ((param_4 < iVar6) ||
     ((((param_4 <= iVar6 && (param_3 <= *(uint *)(param_2 + 0x18))) ||
       (*(int *)(param_2 + 0x24) < iVar2)) ||
      ((*(int *)(param_2 + 0x24) <= iVar2 && (*(uint *)(param_2 + 0x20) <= uVar4)))))) {
    return 1;
  }
  FUN_005b83b0(param_1,1);
  if (param_7 == 0) {
    bVar9 = CARRY4(uVar5,param_5);
    uVar5 = uVar5 + param_5;
    iVar8 = iVar8 + param_6 + (uint)bVar9;
    if ((iVar8 < 1) && (iVar8 < 0)) {
      uVar5 = 0;
      iVar8 = 0;
    }
  }
  param_3 = FUN_005c9cc0(&param_2,param_1,*(undefined4 *)(lParam + 8),*(undefined4 *)(lParam + 4),
                         uVar5,iVar8,*(undefined4 *)(lParam + 0xc),0xffffffff,0x7fffffff);
  iVar8 = param_6;
  uVar5 = param_5;
  if (-1 < (int)param_3) {
    if (param_8 != (int *)0x0) {
      *param_8 = param_2;
    }
    if ((param_7 != 0) && (param_5 != 0 || param_6 != 0)) {
      uVar3 = FUN_005c9450(param_1,param_2);
      FUN_005c9930(param_1,*(undefined4 *)(lParam + 8),uVar3,uVar5,iVar8);
    }
    *(uint *)(lParam + 0x20) = uVar4;
    *(int *)(lParam + 0x24) = iVar2;
    *(uint *)(param_2 + 0x20) = uVar1 - uVar4;
    *(uint *)(param_2 + 0x24) = (iVar7 - iVar2) - (uint)(uVar1 < uVar4);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(lParam + 0x28);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(lParam + 0x2c);
    *(uint *)(param_2 + 0x10) =
         (*(uint *)(param_2 + 0x10) ^ *(uint *)(lParam + 0x10)) & 0x100 ^ *(uint *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) =
         (*(uint *)(param_2 + 0x10) ^ *(uint *)(lParam + 0x10)) & 0x30000000 ^
         *(uint *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) =
         (*(uint *)(param_2 + 0x10) ^ *(uint *)(lParam + 0x10)) & 0xe000000 ^
         *(uint *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) =
         (*(uint *)(param_2 + 0x10) ^ *(uint *)(lParam + 0x10)) & 2 ^ *(uint *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) =
         (*(uint *)(param_2 + 0x10) ^ *(uint *)(lParam + 0x10)) & 0x20 ^ *(uint *)(param_2 + 0x10);
    param_7 = FUN_005c68e0(lParam);
    param_8 = (int *)0x0;
    if (0 < param_7) {
      do {
        iVar8 = FUN_005c6910(lParam,param_8);
        param_3 = FUN_005c70c0(param_1,param_2,*(undefined4 *)(iVar8 + 0x18),iVar8,
                               *(undefined4 *)(iVar8 + 0x1c),1,*(int *)(lParam + 0x50) == iVar8);
        if ((int)param_3 < 0) goto LAB_005cabf0;
        iVar6 = *(int *)(iVar8 + 0x14);
        uVar5 = *(uint *)(iVar8 + 0x10);
        local_8 = uVar5;
        local_4 = iVar6;
        if ((iVar2 <= iVar6) && ((iVar2 < iVar6 || (uVar4 < uVar5)))) {
          local_8 = uVar4;
          local_4 = iVar2;
        }
        *(uint *)(iVar8 + 0x10) = local_8;
        *(int *)(iVar8 + 0x14) = local_4;
        param_5 = *(uint *)(iVar8 + 8) + uVar4;
        param_6 = *(int *)(iVar8 + 0xc) + iVar2 + (uint)CARRY4(*(uint *)(iVar8 + 8),uVar4);
        iVar7 = uVar5 - uVar4;
        iVar6 = (iVar6 - iVar2) - (uint)(uVar5 < uVar4);
        iVar8 = FUN_005c68e0(param_2);
        iVar8 = FUN_005c6910(param_2,iVar8 + -1);
        *(uint *)(iVar8 + 8) = param_5;
        *(int *)(iVar8 + 0xc) = param_6;
        if ((iVar6 < 1) && (iVar6 < 0)) {
          iVar7 = 0;
          iVar6 = 0;
        }
        *(int *)(iVar8 + 0x10) = iVar7;
        *(int *)(iVar8 + 0x14) = iVar6;
        if ((*(uint *)(param_2 + 0x10) & 0x100) != 0) {
          lVar10 = 1;
          if (((*(int *)(iVar8 + 0x18) != 0) &&
              (iVar6 = FUN_005f13f0(*(undefined4 *)(lParam + 4)), lVar10 = 1, iVar6 != 0)) &&
             (lVar10 = ftol(), lVar10 < 1)) {
            lVar10 = 1;
          }
          lVar11 = __allrem(param_5,param_6,lVar10);
          iVar6 = (int)((ulonglong)lVar11 >> 0x20);
          *(longlong *)(iVar8 + 8) = lVar11;
          if ((iVar6 < 1) && (lVar11 < 0)) {
            *(longlong *)(iVar8 + 8) = lVar10 + CONCAT44(iVar6,*(undefined4 *)(iVar8 + 8));
          }
          *(longlong *)(iVar8 + 0x10) = lVar10 - *(longlong *)(iVar8 + 8);
        }
        param_8 = (int *)((int)param_8 + 1);
      } while ((int)param_8 < param_7);
    }
    if (-1 < (int)param_3) {
      FUN_0047de20(param_2 + 0x98,lParam + 0x98,param_2,uVar4,iVar2,0xffffffff);
      *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(lParam + 0xa0) = *(undefined4 *)(lParam + 0x18);
      *(undefined4 *)(lParam + 0xa8) = *(undefined4 *)(lParam + 0x20);
      *(undefined4 *)(lParam + 0xa4) = *(undefined4 *)(lParam + 0x1c);
      *(undefined4 *)(lParam + 0xac) = *(undefined4 *)(lParam + 0x24);
      FUN_0047c870(lParam + 0x98,*(undefined4 *)(lParam + 0xa8),*(undefined4 *)(lParam + 0xac));
      *(undefined4 *)(param_2 + 0x40) = 0;
      *(undefined4 *)(param_2 + 0x44) = 0;
      iVar8 = *(int *)(lParam + 0x44);
      iVar6 = *(int *)(lParam + 0x24);
      uVar5 = *(uint *)(lParam + 0x40);
      uVar1 = *(uint *)(lParam + 0x20);
      if ((iVar6 <= iVar8) && ((iVar6 < iVar8 || (uVar1 < uVar5)))) {
        *(uint *)(param_2 + 0x40) = uVar5 - uVar1;
        *(uint *)(param_2 + 0x44) = (iVar8 - iVar6) - (uint)(uVar5 < uVar1);
        *(undefined4 *)(lParam + 0x40) = 0;
        *(undefined4 *)(lParam + 0x44) = 0;
      }
      FUN_005c8560(lParam + 0x58,param_2 + 0x58,*(uint *)(param_2 + 0x20) + *(uint *)(lParam + 0x20)
                   ,*(int *)(param_2 + 0x24) + *(int *)(lParam + 0x24) +
                    (uint)CARRY4(*(uint *)(param_2 + 0x20),*(uint *)(lParam + 0x20)),uVar4,iVar2);
      FUN_005c6cd0(lParam,2);
      FUN_005c6cd0(param_2,1);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lParam + 0x10);
      *(undefined4 *)(*(int *)(lParam + 0x218) + 0xa0) = param_9;
      *(undefined4 *)(*(int *)(param_2 + 0x218) + 0xa0) = param_10;
      FUN_005d9de0(param_1,lParam,param_2);
      if (*(int *)(lParam + 4) == 2) {
        *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(lParam + 0xf8);
        *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(lParam + 0xfc);
      }
      if (*(int *)(lParam + 4) == 3) {
        *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(lParam + 0xf8);
        *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lParam + 0x100);
        *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)(lParam + 0x104);
        *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(lParam + 0x108);
        *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(lParam + 0x10c);
        *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(lParam + 0x110);
        *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(lParam + 0x114);
        *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(lParam + 0x118);
        *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(lParam + 0x11c);
        *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(lParam + 0x120);
        *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(lParam + 0x124);
        *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(lParam + 0x128);
        *(undefined4 *)(param_2 + 300) = *(undefined4 *)(lParam + 300);
        *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(lParam + 0x130);
        *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(lParam + 0x134);
        *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(lParam + 0x138);
        *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(lParam + 0x13c);
        *(undefined4 *)(param_2 + 0x1fc) = *(undefined4 *)(lParam + 0x1fc);
        iVar8 = FUN_0050b930(param_2 + 0x144,lParam + 0x144);
        if ((-1 < iVar8) &&
           (iVar8 = FUN_0050b6c0(lParam + 0x144,0,0,0,0x80000000,uVar4,iVar2), -1 < iVar8)) {
          FUN_0050b6c0(param_2 + 0x144,-uVar4,-(iVar2 + (uint)(uVar4 != 0)),0,0,0xffffffff,
                       0x7fffffff);
        }
        if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa4) != 0)) {
          FUN_0051f0b0(*(int *)(DAT_0064762c + 0xa4));
        }
        iVar8 = FUN_0044b540(param_2 + 0x140,(undefined4 *)(lParam + 0x140));
        if (((-1 < iVar8) &&
            (iVar8 = FUN_0044af50(*(undefined4 *)(lParam + 0x140),0,0,0,0x80000000,uVar4,iVar2),
            -1 < iVar8)) &&
           (iVar8 = FUN_0044af50(*(undefined4 *)(param_2 + 0x140),-uVar4,
                                 -(iVar2 + (uint)(uVar4 != 0)),0,0,0xffffffff,0x7fffffff),
           -1 < iVar8)) {
          if (*(int **)(param_2 + 0x140) == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = **(int **)(param_2 + 0x140);
          }
          iVar6 = 0;
          if (0 < iVar8) {
            do {
              FUN_005a5060(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x140) + 8) + iVar6 * 4),
                           param_2,1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)
                          );
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar8);
          }
        }
        iVar8 = FUN_0044b540(param_2 + 0x200,lParam + 0x200);
        if (-1 < iVar8) {
          if (*(int **)(param_2 + 0x200) == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = **(int **)(param_2 + 0x200);
          }
          iVar6 = 0;
          if (0 < iVar8) {
            do {
              FUN_005a5060(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x200) + 8) + iVar6 * 4),
                           param_2,7,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)
                          );
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar8);
          }
        }
        param_3 = FUN_0044b540(param_2 + 0x204,lParam + 0x204);
        if (-1 < (int)param_3) {
          if (*(int **)(param_2 + 0x204) == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = **(int **)(param_2 + 0x204);
          }
          iVar6 = 0;
          if (0 < iVar8) {
            do {
              FUN_005a5060(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x204) + 8) + iVar6 * 4),
                           param_2,8,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)
                          );
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar8);
          }
        }
        if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
          SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66c,0,lParam);
        }
      }
    }
LAB_005cabf0:
    iVar8 = *(int *)(lParam + 0x3c) + 1;
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    *(int *)(lParam + 0x3c) = iVar8;
    iVar8 = *(int *)(lParam + 8);
    if (iVar8 != 0) {
      *(uint *)(iVar8 + 0x10) = *(uint *)(iVar8 + 0x10) | 0x200000;
      *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
    }
    *(uint *)*param_1 = *(uint *)*param_1 | 0x100;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x80;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x20;
    if ((((*(uint *)(lParam + 0x10) & 0x400) != 0) || ((*(uint *)(param_2 + 0x10) & 0x400) != 0)) ||
       ((*(uint *)(*(int *)(lParam + 8) + 0x10) & 0x200) != 0)) {
      *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
    }
  }
  FUN_005b84d0(param_1,1);
  return param_3;
}


