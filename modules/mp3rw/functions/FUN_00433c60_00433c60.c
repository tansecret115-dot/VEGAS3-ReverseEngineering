/* Module: mp3rw.dll
   Function: FUN_00433c60
   Address: 00433c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00433c60(int param_1,undefined4 *param_2,uint *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  HGLOBAL hMem;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  LPVOID pvVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  float10 fVar10;
  uint local_28;
  int local_24;
  double local_20;
  double local_18;
  uint local_c [2];
  
  uVar7 = 0;
  FUN_00447a80(*(int *)(param_1 + 4),*(int *)(param_1 + 8),&local_24,&local_28);
  uVar5 = 1 << ((byte)*(undefined4 *)(param_1 + 0x18) & 0x1f);
  if ((int)uVar5 < (int)local_28) {
    local_28 = uVar5;
  }
  if ((int)local_28 < 0) {
    local_28 = 0;
  }
  if (param_2 == (undefined4 *)0x0) goto LAB_00433e81;
  pvVar6 = (LPVOID)0x0;
  if (0 < (int)local_28) {
    uVar7 = 0x8007000e;
    hMem = GlobalAlloc(0x42,local_28 * 4);
    pvVar6 = GlobalLock(hMem);
    local_20 = (double)CONCAT44(local_20._4_4_,pvVar6);
    if (pvVar6 != (LPVOID)0x0) {
      iVar8 = 0;
      if (0 < (int)local_28) {
        puVar4 = (undefined1 *)((int)pvVar6 + 1);
        iVar3 = 0;
        do {
          iVar8 = iVar8 + 1;
          puVar4[1] = *(undefined1 *)(iVar3 + local_24);
          *puVar4 = *(undefined1 *)(iVar3 + 1 + local_24);
          puVar4[-1] = *(undefined1 *)(iVar3 + 2 + local_24);
          puVar4[2] = 0xff;
          puVar4 = puVar4 + 4;
          iVar3 = iVar3 + 3;
        } while (iVar8 < (int)local_28);
      }
      uVar5 = FUN_00447460(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
      if (uVar5 != 0) {
        FUN_00447b70(*(int *)(param_1 + 4),*(int *)(param_1 + 8),local_c,(uint *)&local_18,
                     (int *)0x0);
        iVar8 = 0;
        if (0 < local_18._0_4_) {
          puVar4 = (undefined1 *)((int)pvVar6 + 3);
          do {
            puVar1 = (undefined1 *)(iVar8 + local_c[0]);
            iVar8 = iVar8 + 1;
            *puVar4 = *puVar1;
            puVar4 = puVar4 + 4;
          } while (iVar8 < local_18._0_4_);
          pvVar6 = local_20._0_4_;
        }
      }
      if ((*(int *)(param_1 + 0x24) != 0) &&
         (((*(int *)(param_1 + 0x28) != 0 || (*(int *)(param_1 + 0x2c) != 0x3ff00000)) &&
          (_DAT_0049bc68 <= *(double *)(param_1 + 0x28))))) {
        local_18 = _DAT_0049c008 / *(double *)(param_1 + 0x28);
        fVar10 = (float10)_CIpow();
        iVar8 = 0;
        local_20 = (double)((float10)_DAT_0049c008 / fVar10);
        if (0 < (int)local_28) {
          pbVar9 = (byte *)((int)pvVar6 + 1);
          do {
            local_c[0] = (uint)pbVar9[1];
            _CIpow();
            bVar2 = ftol();
            pbVar9[1] = bVar2;
            local_c[0] = (uint)*pbVar9;
            _CIpow();
            bVar2 = ftol();
            *pbVar9 = bVar2;
            local_c[0] = (uint)pbVar9[-1];
            _CIpow();
            bVar2 = ftol();
            pbVar9[-1] = bVar2;
            iVar8 = iVar8 + 1;
            pbVar9 = pbVar9 + 4;
          } while (iVar8 < (int)local_28);
          uVar7 = 0;
          goto LAB_00433e7c;
        }
      }
      uVar7 = 0;
    }
  }
LAB_00433e7c:
  *param_2 = pvVar6;
LAB_00433e81:
  if (param_3 != (uint *)0x0) {
    *param_3 = local_28;
  }
  return uVar7;
}


