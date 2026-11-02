/* Module: vegas30k.dll
   Function: FUN_010359b0
   Address: 010359b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_010359b0(undefined2 *param_1,int param_2,uint3 *param_3,int param_4,undefined2 *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint3 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int local_38;
  int local_34;
  uint3 *local_30;
  int local_28;
  double *local_24;
  uint3 *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar8 = *(int *)((int)param_5 + 4);
  if (param_2 == 0) {
    if (0 < iVar8) {
      puVar10 = (uint3 *)((int)param_3 + iVar8 * param_4 * 3);
      pdVar5 = (double *)((int)param_5 + 0x30);
      do {
        iVar8 = iVar8 + -1;
        param_1 = (undefined2 *)((uint)*puVar10 << 8);
        *pdVar5 = (double)(int)param_1;
        puVar10 = (uint3 *)((int)puVar10 + 3);
        pdVar5 = pdVar5 + 1;
      } while (iVar8 != 0);
    }
    return 0;
  }
  uVar1 = iVar8 * 3;
  iVar7 = param_4 + -1;
  if (param_2 < param_4) {
    if (0 < iVar8) {
      iVar9 = (int)param_3 - (int)param_1;
      param_5 = param_1;
      local_28 = iVar8;
      do {
        puVar10 = (uint3 *)(iVar9 + (int)param_5);
        iVar2 = 0;
        puVar6 = param_5;
        puVar11 = param_5;
        local_30 = (uint3 *)iVar7;
        if (0 < iVar7) {
          do {
            iVar2 = iVar2 - param_2;
            puVar6 = puVar11;
            if (iVar2 < 0) {
              iVar2 = iVar2 + param_4;
              local_8 = (uint)*puVar10 * 0x100;
              param_3 = (uint3 *)((uint)*(uint3 *)(uVar1 + (int)puVar10) * 0x100);
              iVar4 = local_8 + (int)(((longlong)(int)((int)param_3 + (uint)*puVar10 * -0x100) *
                                      (longlong)iVar2) / (longlong)param_4);
              local_8._1_2_ = (undefined2)((uint)iVar4 >> 8);
              local_8._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
              puVar6 = (undefined2 *)((int)puVar11 + uVar1);
              *puVar11 = local_8._1_2_;
              *(undefined1 *)(puVar11 + 1) = local_8._3_1_;
            }
            puVar10 = (uint3 *)((int)puVar10 + uVar1);
            local_30 = (uint3 *)((int)local_30 + -1);
            puVar11 = puVar6;
          } while (local_30 != (uint3 *)0x0);
        }
        uVar3 = (uint)((int)puVar6 - (int)param_5) / uVar1;
        if ((int)uVar3 < param_2) {
          iVar2 = param_2 - uVar3;
          do {
            local_10 = (uint)*puVar10 * 0x100;
            param_3 = (uint3 *)((uint)*(uint3 *)((int)puVar10 + iVar8 * -6) * 0x100);
            iVar4 = (int)param_3 +
                    (local_10 + (uint)*(uint3 *)((int)puVar10 + iVar8 * -3) * -0x100) * 3;
            param_1._1_2_ = (undefined2)((uint)iVar4 >> 8);
            iVar2 = iVar2 + -1;
            *puVar6 = param_1._1_2_;
            param_1._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
            *(undefined1 *)(puVar6 + 1) = param_1._3_1_;
            puVar6 = (undefined2 *)((int)puVar6 + uVar1);
          } while (iVar2 != 0);
        }
        param_5 = (undefined2 *)((int)param_5 + 3);
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
  }
  else {
    if (param_4 < 1) {
      if (iVar8 < 1) {
        return param_2;
      }
      iVar7 = (int)param_1 - (int)param_3;
      local_30 = (uint3 *)iVar8;
      do {
        iVar9 = ftol();
        local_8 = (uint)*param_3 * 0x100;
        iVar8 = 0;
        if (0 < param_2) {
          puVar6 = (undefined2 *)(iVar7 + (int)param_3);
          do {
            iVar8 = iVar8 + 1;
            iVar2 = (int)(((longlong)(local_8 - iVar9) * (longlong)iVar8) / (longlong)(param_2 + 1))
                    + iVar9;
            param_1._1_2_ = (undefined2)((uint)iVar2 >> 8);
            param_1._3_1_ = (undefined1)((uint)iVar2 >> 0x18);
            *puVar6 = param_1._1_2_;
            *(undefined1 *)(puVar6 + 1) = param_1._3_1_;
            puVar6 = (undefined2 *)((int)puVar6 + uVar1);
          } while (iVar8 < param_2);
        }
        param_3 = (uint3 *)((int)param_3 + 3);
        local_30 = (uint3 *)((int)local_30 + -1);
      } while (local_30 != (uint3 *)0x0);
      return param_2;
    }
    if (0 < iVar8) {
      local_24 = (double *)((int)param_5 + 0x30);
      local_14 = param_3;
      local_30 = (uint3 *)(uVar1 + (int)param_3);
      iVar9 = (int)param_1 - (int)param_3;
      local_38 = iVar8;
      do {
        puVar6 = (undefined2 *)((int)local_14 + iVar9);
        puVar10 = (uint3 *)((int)local_14 + iVar7 * iVar8 * 3);
        puVar11 = (undefined2 *)((int)puVar6 + (param_2 + -1) * iVar8 * 3);
        local_c = param_2;
        if (param_5 == (undefined2 *)0x0) {
          param_1 = (undefined2 *)((uint)*local_14 * 0x100);
          param_3 = (uint3 *)((uint)*(uint3 *)((int)local_14 + iVar8 * 6) * 0x100);
          local_10 = (int)param_3 + ((int)param_1 + (uint)*local_30 * -0x100) * 3;
        }
        else {
          local_10 = ftol();
          param_1 = (undefined2 *)((uint)*puVar10 << 8);
          *local_24 = (double)(int)param_1;
        }
        for (; local_14 < puVar10; puVar10 = (uint3 *)((int)puVar10 + iVar8 * -3)) {
          puVar12 = puVar11;
          do {
            uVar3 = (uint)*(uint3 *)((int)puVar10 + iVar8 * -3);
            local_8 = uVar3 * 0x100;
            param_3 = (uint3 *)((uint)*puVar10 * 0x100);
            iVar2 = local_8 + (int)(((longlong)(int)((int)param_3 + uVar3 * -0x100) *
                                    (longlong)local_c) / (longlong)param_2);
            puVar11 = (undefined2 *)((int)puVar12 + iVar8 * -3);
            local_8._1_2_ = (undefined2)((uint)iVar2 >> 8);
            local_8._3_1_ = (undefined1)((uint)iVar2 >> 0x18);
            *puVar12 = local_8._1_2_;
            *(undefined1 *)(puVar12 + 1) = local_8._3_1_;
            if (puVar11 < puVar6) {
              puVar10 = (uint3 *)((int)local_14 + uVar1);
              break;
            }
            local_c = local_c - param_4;
            puVar12 = puVar11;
          } while (-1 < local_c);
          local_c = local_c + param_2;
        }
        local_8 = (uint)*puVar10 * 0x100;
        local_34 = (uint)((int)puVar11 - (int)puVar6) / uVar1 + 1;
        if (0 < local_34) {
          do {
            iVar2 = (int)(((longlong)(local_8 - local_10) * (longlong)local_c) / (longlong)param_2)
                    + local_10;
            param_1._1_2_ = (undefined2)((uint)iVar2 >> 8);
            param_1._3_1_ = (undefined1)((uint)iVar2 >> 0x18);
            *puVar11 = param_1._1_2_;
            *(undefined1 *)(puVar11 + 1) = param_1._3_1_;
            local_c = local_c - param_4;
            local_34 = local_34 + -1;
            puVar11 = (undefined2 *)((int)puVar11 + iVar8 * -3);
          } while (local_34 != 0);
        }
        local_14 = (uint3 *)((int)local_14 + 3);
        local_30 = (uint3 *)((int)local_30 + 3);
        local_24 = local_24 + 1;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
    }
  }
  _DAT_01209a04 = _DAT_01209a04 + 1;
  return param_2;
}


