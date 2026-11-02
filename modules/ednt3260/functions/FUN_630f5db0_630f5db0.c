/* Module: ednt3260.dll
   Function: FUN_630f5db0
   Address: 630f5db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_630f5db0(int param_1)

{
  undefined2 *puVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  short sVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  float10 fVar13;
  int local_2c;
  int local_28;
  int local_24;
  double *local_1c;
  double *local_18;
  double *local_14;
  double *local_10;
  double *local_c;
  
  local_24 = 0;
  local_28 = 0x31a4;
  pdVar9 = (double *)(param_1 + 0x18da);
  do {
    local_18 = (double *)0x0;
    if (0 < *(short *)(param_1 + 0x6344)) {
      local_10 = (double *)(param_1 + 0x159c);
      local_c = (double *)(param_1 + 0x15cc);
      local_1c = (double *)(param_1 + 0x127c);
      pdVar10 = pdVar9;
      do {
        pdVar4 = local_18;
        dVar3 = *pdVar10;
        sVar5 = *(short *)(param_1 + 0x46 +
                          *(short *)(&DAT_630ff8c8 +
                                    ((int)local_18 + *(short *)(param_1 + 0x630a) * 6) * 2) * 2);
        pdVar7 = (double *)(param_1 + 0xa7c);
        FUN_630f4810((double *)
                     (sVar5 * local_24 * 0x800 +
                     *(int *)(param_1 + 0x2e +
                             *(short *)(&DAT_630ff8c8 +
                                       ((int)local_18 + *(short *)(param_1 + 0x630a) * 6) * 2) * 4))
                     ,sVar5,pdVar7,1,local_1c,(double *)&DAT_63100dd8,2,0x100);
        sVar5 = 4;
        local_14 = (double *)0x4;
        pdVar11 = local_c + 0xe;
        pdVar6 = local_c + 0xd;
        do {
          fVar13 = (float10)FUN_630f9770(pdVar7,1,0x40);
          *pdVar6 = (double)fVar13;
          pdVar7 = pdVar7 + 0x40;
          pdVar6 = pdVar6 + 1;
          local_14 = (double *)((int)local_14 + -1);
        } while (local_14 != (double *)0x0);
        local_14 = (double *)0x2;
        do {
          sVar5 = sVar5 >> 1;
          iVar12 = (int)sVar5;
          if (iVar12 != 0) {
            pdVar7 = pdVar11 + -7;
            pdVar6 = pdVar11;
            do {
              if (pdVar6[-1] < *pdVar6) {
                dVar2 = *pdVar6;
              }
              else {
                dVar2 = pdVar6[-1];
              }
              *pdVar7 = dVar2;
              pdVar7 = pdVar7 + 1;
              pdVar6 = pdVar6 + 2;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          pdVar11 = pdVar11 + -6;
          local_14 = (double *)((int)local_14 + -1);
        } while (local_14 != (double *)0x0);
        sVar5 = 1;
        pdVar11 = (double *)&DAT_63101608;
        puVar1 = (undefined2 *)(param_1 + -0x4aaa + (local_28 + (int)local_18) * 2);
        local_14 = local_c;
        *puVar1 = 0;
        do {
          local_18 = (double *)(int)sVar5;
          pdVar7 = local_14;
          if (0 < (int)local_18) {
            do {
              if (*pdVar7 < pdVar7[1] * *pdVar11) {
                *(undefined2 *)(param_1 + -0x4aaa + (local_28 + (int)pdVar4) * 2) = 1;
              }
              local_18 = (double *)((int)local_18 + -1);
              pdVar7 = pdVar7 + 1;
            } while (local_18 != (double *)0x0);
          }
          pdVar11 = pdVar11 + 1;
          sVar5 = sVar5 << 1;
          local_14 = local_14 + 6;
        } while ((int)pdVar11 < 0x63101620);
        if (local_c[1] < _DAT_63102958) {
          *puVar1 = 0;
        }
        if (dVar3 < *local_10) {
          *puVar1 = 0;
        }
        sVar5 = 1;
        pdVar11 = (double *)&DAT_631015f0;
        puVar1 = (undefined2 *)(param_1 + (local_28 + (int)pdVar4) * 2);
        local_18 = local_c;
        *puVar1 = 0;
        do {
          local_2c = (int)sVar5;
          pdVar7 = local_18;
          if (0 < local_2c) {
            do {
              if (*pdVar7 < *pdVar11 * pdVar7[1]) {
                *(undefined2 *)(param_1 + (local_28 + (int)pdVar4) * 2) = 1;
              }
              local_2c = local_2c + -1;
              pdVar7 = pdVar7 + 1;
            } while (local_2c != 0);
          }
          pdVar11 = pdVar11 + 1;
          sVar5 = sVar5 << 1;
          local_18 = local_18 + 6;
        } while ((int)pdVar11 < 0x63101608);
        if (local_c[1] < _DAT_63102960) {
          *puVar1 = 0;
        }
        if (dVar3 * _DAT_63102968 < *local_10) {
          *puVar1 = 0;
        }
        if (*(short *)(param_1 + 0x3fc04) != 0) {
          *puVar1 = 0;
        }
        *local_10 = dVar3;
        sVar5 = 1;
        local_c = local_c + -1;
        iVar12 = 3;
        do {
          iVar8 = (int)sVar5;
          *(undefined4 *)local_c = *(undefined4 *)(local_c + iVar8);
          *(undefined4 *)((int)local_c + 4) = *(undefined4 *)((int)local_c + iVar8 * 8 + 4);
          *(undefined4 *)(local_c + 1) = *(undefined4 *)(local_c + iVar8 + 1);
          *(undefined4 *)((int)local_c + 0xc) = *(undefined4 *)((int)local_c + iVar8 * 8 + 0xc);
          sVar5 = sVar5 << 1;
          local_c = local_c + 6;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        local_1c = local_1c + 8;
        pdVar10 = pdVar10 + 1;
        local_10 = local_10 + 1;
        local_18 = (double *)((int)pdVar4 + 1);
        local_c = local_14;
      } while ((int)local_18 < (int)*(short *)(param_1 + 0x6344));
    }
    local_24 = local_24 + 1;
    pdVar9 = pdVar9 + 6;
    local_28 = local_28 + 5;
  } while (local_28 < 0x31c2);
  return;
}


