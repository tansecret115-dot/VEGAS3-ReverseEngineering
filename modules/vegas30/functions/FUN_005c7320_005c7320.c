/* Module: vegas30.exe
   Function: FUN_005c7320
   Address: 005c7320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005c7442) */
/* WARNING: Removing unreachable block (ram,0x005c74f4) */
/* WARNING: Removing unreachable block (ram,0x005c7502) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c7320(int param_1,int param_2,uint *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *local_14;
  uint local_10;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x50);
    if (param_2 == 0) {
      return 1;
    }
    bVar5 = true;
  }
  else {
    bVar5 = param_2 == *(int *)(param_1 + 0x50);
  }
  if ((*(int *)(param_2 + 0x18) != 0) &&
     (iVar3 = FUN_005f13f0(*(undefined4 *)(param_1 + 4)), iVar3 != 0)) {
    if ((((*(int *)(param_1 + 4) == 3) && (*(int *)(param_2 + 0x18) != 0)) &&
        (iVar3 = FUN_005f13f0(3), iVar3 != 0)) && (_DAT_00610fd8 == *(double *)(iVar3 + 0x48))) {
      return 1;
    }
    if (*(int *)(param_1 + 8) == 0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      local_14 = *(undefined4 **)(*(int *)(param_1 + 8) + 8);
      if (local_14 != (undefined4 *)0x0) {
        FUN_005b83b0(local_14,1);
      }
    }
    local_10 = 0;
    lVar6 = ftol();
    if (0 < lVar6) {
      lVar7 = *(longlong *)(param_2 + 8);
      if (param_3 != (uint *)0x0) {
        uVar1 = param_3[1];
        if ((*(uint *)(param_1 + 0x10) & 0x100) == 0) {
          if (((int)uVar1 < 1) && ((int)uVar1 < 0)) {
            lVar7 = 0;
          }
          else {
            uVar4 = (int)lVar6 - 1;
            iVar3 = (int)((ulonglong)lVar6 >> 0x20) - (uint)((int)lVar6 == 0);
            lVar7 = *(longlong *)param_3;
            if ((iVar3 <= (int)uVar1) &&
               ((iVar3 < (int)uVar1 || (lVar7 = *(longlong *)param_3, uVar4 < *param_3)))) {
              lVar7 = CONCAT44(iVar3,uVar4);
            }
          }
        }
        else {
          lVar7 = __allrem(*param_3,uVar1,lVar6);
          if ((lVar7 < 0x100000000) && (lVar7 < 0)) {
            lVar7 = lVar7 + lVar6;
          }
        }
        if ((*(int *)(param_2 + 8) != (int)lVar7) ||
           (*(int *)(param_2 + 0xc) != (int)((ulonglong)lVar7 >> 0x20))) {
          *(longlong *)(param_2 + 8) = lVar7;
          local_10 = 3;
        }
      }
      lVar2 = *(longlong *)(param_2 + 0x10);
      if ((param_4 != (longlong *)0x0) && (lVar2 = *param_4, (*(byte *)(param_1 + 0x11) & 1) != 0))
      {
        local_10 = local_10 | 2;
        lVar2 = lVar6 - lVar7;
      }
      if (lVar6 - lVar7 <= lVar2) {
        lVar2 = lVar6 - lVar7;
      }
      if (lVar2 < 1) {
        lVar2 = 0;
      }
      if (lVar2 != *(longlong *)(param_2 + 0x10)) {
        *(longlong *)(param_2 + 0x10) = lVar2;
        local_10 = local_10 | 2;
      }
      if ((bVar5) && (local_10 != 0)) {
        FUN_005c6cd0(param_1,local_10);
      }
      if (param_3 != (uint *)0x0) {
        *(longlong *)param_3 = lVar7;
      }
      if (param_4 != (longlong *)0x0) {
        *param_4 = lVar2;
      }
      if (local_14 == (undefined4 *)0x0) {
        return 0;
      }
      if (local_10 != 0) {
        iVar3 = *(int *)(param_1 + 0x3c) + 1;
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        *(int *)(param_1 + 0x3c) = iVar3;
        *(uint *)*local_14 = *(uint *)*local_14 | 0x100;
        if (bVar5) {
          iVar3 = *(int *)(param_1 + 8);
          if (iVar3 != 0) {
            *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x200000;
            *(uint *)*local_14 = *(uint *)*local_14 | 0x2000;
          }
          if (((*(uint *)(param_1 + 0x10) & 0x400) != 0) ||
             ((*(uint *)(*(int *)(param_1 + 8) + 0x10) & 0x200) != 0)) {
            *(uint *)*local_14 = *(uint *)*local_14 | 0x400;
          }
        }
      }
    }
    if (local_14 != (undefined4 *)0x0) {
      FUN_005b84d0(local_14,1);
    }
    return 0;
  }
  return 1;
}


