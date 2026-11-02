/* Module: sftrans1.dll
   Function: FUN_004aef00
   Address: 004aef00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004aef00(int param_1)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_24 = 0;
  local_1c = ftol();
  local_20 = 0x4000;
  iVar3 = ftol();
  local_c = (int)(((longlong)iVar3 * (longlong)local_20) / (longlong)local_1c);
  lVar1 = (longlong)(local_c / 2) * (longlong)*(int *)(param_1 + 0x1e8);
  local_10 = (uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12;
  local_14 = 1;
  uVar6 = local_c - local_10;
  local_20 = (int)(local_10 + ((int)local_10 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar3 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  if (*(int *)(param_1 + 0x1e8) == 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x1dc);
    for (uVar6 = *(uint *)(param_1 + 0x1e4) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    return 0;
  }
  local_18 = 0;
  local_8 = *(int *)(param_1 + 0x1e4) / 2;
  local_1c = (*(int *)(param_1 + 0x1e4) + -1) / 2;
  if (local_8 < *(int *)(param_1 + 0x1e4)) {
    do {
      if (local_1c < 0) break;
      if (local_18 == local_20) {
        if (iVar3 == local_20) {
          if ((int)uVar6 < (int)local_10) {
            cVar5 = (char)(((int)((local_10 - uVar6 & 0x3fff) * 0xff + 0x2000) >> 0xe & 0xffU) *
                           0xff >> 8);
          }
          else {
            cVar5 = -1 - (char)(((int)((uVar6 - local_10 & 0x3fff) * 0xff + 0x2000) >> 0xe & 0xffU)
                                * 0xff >> 8);
          }
          uVar6 = uVar6 + local_c;
          iVar3 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fffU)) >> 0xe;
        }
        else {
          local_14 = 0;
          cVar5 = (char)((int)((local_10 & 0x3fff) * 0xff + 0x2000) >> 0xe);
        }
        *(char *)(*(int *)(param_1 + 0x1dc) + 3 + local_8 * 4) = cVar5;
        local_10 = local_10 + local_c;
        local_20 = (int)(local_10 + ((int)local_10 >> 0x1f & 0x3fffU)) >> 0xe;
      }
      else if (local_18 == iVar3) {
        local_14 = 1;
        *(char *)(*(int *)(param_1 + 0x1dc) + 3 + local_8 * 4) =
             -1 - (char)((int)((uVar6 & 0x3fff) * 0xff + 0x2000) >> 0xe);
        uVar6 = uVar6 + local_c;
        iVar3 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fffU)) >> 0xe;
      }
      else {
        *(char *)(*(int *)(param_1 + 0x1dc) + 3 + local_8 * 4) = -(local_14 != 0);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x1dc) + 3 + local_1c * 4) =
           *(undefined1 *)(*(int *)(param_1 + 0x1dc) + 3 + local_8 * 4);
      local_18 = local_18 + 1;
      local_8 = local_8 + 1;
      local_1c = local_1c + -1;
    } while (local_8 < *(int *)(param_1 + 0x1e4));
  }
  local_2c = *(int *)(param_1 + 0x1e4);
  local_34 = 0;
  local_30 = 0;
  local_28 = 1;
  dVar2 = _DAT_00555910;
  if ((_DAT_00555910 <= *(double *)(param_1 + 0x180)) &&
     (dVar2 = _DAT_00555908, *(double *)(param_1 + 0x180) <= _DAT_00555908)) {
    dVar2 = *(double *)(param_1 + 0x180);
  }
  local_20 = local_2c;
  if (local_2c < 2) {
    local_20 = 1;
  }
  if (*(int *)(param_1 + 0x1ec) < 1) {
    return local_24;
  }
  uVar4 = FUN_004da4e0(*(undefined4 *)(param_1 + 0x1dc),&local_34,local_2c,&local_34,
                       *(undefined4 *)(param_1 + 0x1dc),&local_34,local_2c,&local_34,
                       (double)local_20 * dVar2,0,0,4);
  return uVar4;
}


