/* Module: vegas30k.dll
   Function: FUN_010023e0
   Address: 010023e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010023e0(int param_1,undefined4 *param_2,int *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  HGLOBAL hMem;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  LPVOID pvVar6;
  undefined4 uVar7;
  byte *pbVar8;
  float10 fVar9;
  int local_28;
  int local_24;
  double local_20;
  double local_18;
  uint local_c [2];
  
  uVar7 = 0;
  FUN_011222e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_24,&local_28);
  iVar5 = 1 << ((byte)*(undefined4 *)(param_1 + 0x18) & 0x1f);
  if (iVar5 < local_28) {
    local_28 = iVar5;
  }
  if (local_28 < 0) {
    local_28 = 0;
  }
  if (param_2 == (undefined4 *)0x0) goto LAB_01002601;
  pvVar6 = (LPVOID)0x0;
  if (0 < local_28) {
    uVar7 = 0x8007000e;
    hMem = GlobalAlloc(0x42,local_28 * 4);
    pvVar6 = GlobalLock(hMem);
    local_20 = (double)CONCAT44(local_20._4_4_,pvVar6);
    if (pvVar6 != (LPVOID)0x0) {
      iVar5 = 0;
      if (0 < local_28) {
        puVar4 = (undefined1 *)((int)pvVar6 + 1);
        iVar3 = 0;
        do {
          iVar5 = iVar5 + 1;
          puVar4[1] = *(undefined1 *)(iVar3 + local_24);
          *puVar4 = *(undefined1 *)(iVar3 + 1 + local_24);
          puVar4[-1] = *(undefined1 *)(iVar3 + 2 + local_24);
          puVar4[2] = 0xff;
          puVar4 = puVar4 + 4;
          iVar3 = iVar3 + 3;
        } while (iVar5 < local_28);
      }
      iVar5 = FUN_01121cc0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x10);
      if (iVar5 != 0) {
        FUN_011223d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),local_c,&local_18,0);
        iVar5 = 0;
        if (0 < local_18._0_4_) {
          puVar4 = (undefined1 *)((int)pvVar6 + 3);
          do {
            puVar1 = (undefined1 *)(iVar5 + local_c[0]);
            iVar5 = iVar5 + 1;
            *puVar4 = *puVar1;
            puVar4 = puVar4 + 4;
          } while (iVar5 < local_18._0_4_);
          pvVar6 = local_20._0_4_;
        }
      }
      if ((*(int *)(param_1 + 0x24) != 0) &&
         (((*(int *)(param_1 + 0x28) != 0 || (*(int *)(param_1 + 0x2c) != 0x3ff00000)) &&
          (_DAT_011dad60 <= *(double *)(param_1 + 0x28))))) {
        local_18 = _DAT_011dad58 / *(double *)(param_1 + 0x28);
        fVar9 = (float10)_CIpow();
        iVar5 = 0;
        local_20 = (double)((float10)_DAT_011dad58 / fVar9);
        if (0 < local_28) {
          pbVar8 = (byte *)((int)pvVar6 + 1);
          do {
            local_c[0] = (uint)pbVar8[1];
            _CIpow();
            bVar2 = ftol();
            pbVar8[1] = bVar2;
            local_c[0] = (uint)*pbVar8;
            _CIpow();
            bVar2 = ftol();
            *pbVar8 = bVar2;
            local_c[0] = (uint)pbVar8[-1];
            _CIpow();
            bVar2 = ftol();
            pbVar8[-1] = bVar2;
            iVar5 = iVar5 + 1;
            pbVar8 = pbVar8 + 4;
          } while (iVar5 < local_28);
          uVar7 = 0;
          goto LAB_010025fc;
        }
      }
      uVar7 = 0;
    }
  }
LAB_010025fc:
  *param_2 = pvVar6;
LAB_01002601:
  if (param_3 != (int *)0x0) {
    *param_3 = local_28;
  }
  return uVar7;
}


