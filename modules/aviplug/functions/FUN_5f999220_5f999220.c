/* Module: aviplug.dll
   Function: FUN_5f999220
   Address: 5f999220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f999220(undefined2 *param_1,int param_2,uint3 *param_3,int param_4,undefined2 *param_5)

{
  uint uVar1;
  uint3 uVar2;
  uint3 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint3 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int local_38;
  int local_34;
  uint3 *local_30;
  int local_28;
  double *local_24;
  uint3 *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar10 = *(int *)(param_5 + 2);
  if (param_2 == 0) {
    if (0 < iVar10) {
      puVar12 = (uint3 *)((int)param_3 + iVar10 * param_4 * 3);
      pdVar7 = (double *)(param_5 + 0x18);
      do {
        iVar10 = iVar10 + -1;
        param_1 = (undefined2 *)((uint)*puVar12 << 8);
        *pdVar7 = (double)(int)param_1;
        puVar12 = (uint3 *)((int)puVar12 + 3);
        pdVar7 = pdVar7 + 1;
      } while (iVar10 != 0);
    }
    return 0;
  }
  uVar1 = iVar10 * 3;
  iVar9 = param_4 + -1;
  if (param_2 < param_4) {
    if (0 < iVar10) {
      iVar11 = (int)param_3 - (int)param_1;
      param_5 = param_1;
      local_28 = iVar10;
      do {
        puVar12 = (uint3 *)(iVar11 + (int)param_5);
        iVar4 = 0;
        puVar8 = param_5;
        puVar13 = param_5;
        local_30 = (uint3 *)iVar9;
        if (0 < iVar9) {
          do {
            iVar4 = iVar4 - param_2;
            puVar8 = puVar13;
            if (iVar4 < 0) {
              iVar4 = iVar4 + param_4;
              local_8 = (uint)*puVar12 * 0x100;
              param_3 = (uint3 *)((uint)*(uint3 *)(uVar1 + (int)puVar12) * 0x100);
              iVar6 = local_8 + (int)(((longlong)(int)(param_3 + (uint)*puVar12 * -0x40) *
                                      (longlong)iVar4) / (longlong)param_4);
              local_8._1_2_ = (undefined2)((uint)iVar6 >> 8);
              local_8._3_1_ = (undefined1)((uint)iVar6 >> 0x18);
              puVar8 = (undefined2 *)((int)puVar13 + uVar1);
              *puVar13 = local_8._1_2_;
              *(undefined1 *)(puVar13 + 1) = local_8._3_1_;
            }
            puVar12 = (uint3 *)((int)puVar12 + uVar1);
            local_30 = (uint3 *)((int)local_30 + -1);
            puVar13 = puVar8;
          } while (local_30 != (uint3 *)0x0);
        }
        uVar5 = (uint)((int)puVar8 - (int)param_5) / uVar1;
        if ((int)uVar5 < param_2) {
          iVar4 = param_2 - uVar5;
          do {
            uVar2 = *puVar12;
            uVar3 = *(uint3 *)((int)puVar12 + iVar10 * -3);
            param_3 = (uint3 *)((uint)*(uint3 *)((int)puVar12 + iVar10 * -6) * 0x100);
            param_1._1_2_ =
                 (undefined2)((uint)(param_3 + (uint)uVar3 * -0xc0 + (uint)uVar2 * 0xc0) >> 8);
            iVar4 = iVar4 + -1;
            *puVar8 = param_1._1_2_;
            param_1._3_1_ =
                 (undefined1)((uint)(param_3 + (uint)uVar3 * -0xc0 + (uint)uVar2 * 0xc0) >> 0x18);
            *(undefined1 *)(puVar8 + 1) = param_1._3_1_;
            puVar8 = (undefined2 *)((int)puVar8 + uVar1);
          } while (iVar4 != 0);
        }
        param_5 = (undefined2 *)((int)param_5 + 3);
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
  }
  else {
    if (param_4 < 1) {
      if (iVar10 < 1) {
        return param_2;
      }
      iVar9 = (int)param_1 - (int)param_3;
      local_30 = (uint3 *)iVar10;
      do {
        iVar11 = ftol();
        local_8 = (uint)*param_3 * 0x100;
        iVar10 = 0;
        if (0 < param_2) {
          puVar8 = (undefined2 *)(iVar9 + (int)param_3);
          do {
            iVar10 = iVar10 + 1;
            iVar4 = (int)(((longlong)(local_8 - iVar11) * (longlong)iVar10) /
                         (longlong)(param_2 + 1)) + iVar11;
            param_1._1_2_ = (undefined2)((uint)iVar4 >> 8);
            param_1._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
            *puVar8 = param_1._1_2_;
            *(undefined1 *)(puVar8 + 1) = param_1._3_1_;
            puVar8 = (undefined2 *)((int)puVar8 + uVar1);
          } while (iVar10 < param_2);
        }
        param_3 = (uint3 *)((int)param_3 + 3);
        local_30 = (uint3 *)((int)local_30 + -1);
      } while (local_30 != (uint3 *)0x0);
      return param_2;
    }
    if (0 < iVar10) {
      local_24 = (double *)(param_5 + 0x18);
      local_14 = param_3;
      local_30 = (uint3 *)(uVar1 + (int)param_3);
      iVar11 = (int)param_1 - (int)param_3;
      local_38 = iVar10;
      do {
        puVar8 = (undefined2 *)((int)local_14 + iVar11);
        puVar12 = (uint3 *)((int)local_14 + iVar9 * iVar10 * 3);
        puVar13 = (undefined2 *)((int)puVar8 + (param_2 + -1) * iVar10 * 3);
        local_c = param_2;
        if (param_5 == (undefined2 *)0x0) {
          param_1 = (undefined2 *)((uint)*local_14 * 0x100);
          param_3 = (uint3 *)((uint)*(uint3 *)((int)local_14 + iVar10 * 6) * 0x100);
          local_10 = (int)param_3 + (int)(param_1 + (uint)*local_30 * -0x80) * 3;
        }
        else {
          local_10 = ftol();
          param_1 = (undefined2 *)((uint)*puVar12 << 8);
          *local_24 = (double)(int)param_1;
        }
        for (; local_14 < puVar12; puVar12 = (uint3 *)((int)puVar12 + iVar10 * -3)) {
          puVar14 = puVar13;
          do {
            uVar5 = (uint)*(uint3 *)((int)puVar12 + iVar10 * -3);
            local_8 = uVar5 * 0x100;
            param_3 = (uint3 *)((uint)*puVar12 * 0x100);
            iVar4 = local_8 + (int)(((longlong)(int)(param_3 + uVar5 * -0x40) * (longlong)local_c) /
                                   (longlong)param_2);
            puVar13 = (undefined2 *)((int)puVar14 + iVar10 * -3);
            local_8._1_2_ = (undefined2)((uint)iVar4 >> 8);
            local_8._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
            *puVar14 = local_8._1_2_;
            *(undefined1 *)(puVar14 + 1) = local_8._3_1_;
            if (puVar13 < puVar8) {
              puVar12 = (uint3 *)((int)local_14 + uVar1);
              break;
            }
            local_c = local_c - param_4;
            puVar14 = puVar13;
          } while (-1 < local_c);
          local_c = local_c + param_2;
        }
        local_8 = (uint)*puVar12 * 0x100;
        local_34 = (uint)((int)puVar13 - (int)puVar8) / uVar1 + 1;
        if (0 < local_34) {
          do {
            iVar4 = (int)(((longlong)(local_8 - local_10) * (longlong)local_c) / (longlong)param_2)
                    + local_10;
            param_1._1_2_ = (undefined2)((uint)iVar4 >> 8);
            param_1._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
            *puVar13 = param_1._1_2_;
            *(undefined1 *)(puVar13 + 1) = param_1._3_1_;
            local_c = local_c - param_4;
            local_34 = local_34 + -1;
            puVar13 = (undefined2 *)((int)puVar13 + iVar10 * -3);
          } while (local_34 != 0);
        }
        local_14 = (uint3 *)((int)local_14 + 3);
        local_30 = (uint3 *)((int)local_30 + 3);
        local_24 = local_24 + 1;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
    }
  }
  _DAT_5f9f5c50 = _DAT_5f9f5c50 + 1;
  return param_2;
}


