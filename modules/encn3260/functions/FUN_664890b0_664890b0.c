/* Module: encn3260.dll
   Function: FUN_664890b0
   Address: 664890b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664890b0(void *this,void *param_1)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  int local_10;
  int local_c;
  void *local_8;
  
  iVar4 = DAT_664dfcf0;
  if (*(int *)(*(int *)((int)this + 0x70) + 0x28) == 0) {
    local_8 = this;
    FUN_664d08d0(&local_10);
    if ((local_10 < iVar4) || ((local_10 == iVar4 && (local_c < 0)))) {
      *(undefined4 *)(*(int *)((int)this + 0x70) + 0x28) = 1;
      *(undefined4 *)(*(int *)((int)this + 0x70) + 0x2c) = 1;
      pvVar2 = *(void **)(*(int *)((int)this + 0x70) + 0x30);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        *(undefined4 *)(*(int *)((int)this + 0x70) + 0x30) = 0;
        return 0;
      }
    }
    else {
      iVar4 = FUN_664bd670(param_1,s_RealChallenge3_664e2634);
      if ((iVar4 != 0) && (*(int *)(*(int *)((int)this + 0x70) + 0x30) != 0)) {
        iVar5 = FUN_664be4b0(iVar4);
        if (iVar5 != 0) {
          pbVar8 = (byte *)0x0;
          puVar6 = (undefined4 *)FUN_664be280(iVar5);
          this = local_8;
          if (puVar6 != (undefined4 *)0x0) {
            pbVar9 = (byte *)*puVar6;
            iVar4 = FUN_664be4d0(iVar4);
            if ((iVar4 != 0) && (iVar4 = FUN_664be280(iVar4), iVar4 != 0)) {
              pbVar8 = *(byte **)(iVar4 + 0xc);
            }
            pvVar3 = local_8;
            pvVar2 = *(void **)(*(int *)((int)local_8 + 0x70) + 0x30);
            FUN_664cba80(pvVar2,(byte *)((int)pvVar2 + 0x21),&DAT_664dfd30,DAT_664dfcfc,DAT_664dfd00
                        );
            pbVar7 = (byte *)(*(int *)(*(int *)((int)pvVar3 + 0x70) + 0x30) + 0x21);
            do {
              bVar1 = *pbVar7;
              bVar10 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_664891de:
                iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_664891e3;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar10 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_664891de;
              pbVar7 = pbVar7 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_664891e3:
            this = local_8;
            if ((iVar4 == 0) &&
               (*(undefined4 *)(*(int *)((int)pvVar3 + 0x70) + 0x2c) = 1, pbVar8 != (byte *)0x0)) {
              pbVar9 = (byte *)(*(int *)(*(int *)((int)local_8 + 0x70) + 0x30) + 0x4a);
              do {
                bVar1 = *pbVar9;
                bVar10 = bVar1 < *pbVar8;
                if (bVar1 != *pbVar8) {
LAB_66489225:
                  iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_6648922a;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar10 = bVar1 < pbVar8[1];
                if (bVar1 != pbVar8[1]) goto LAB_66489225;
                pbVar9 = pbVar9 + 2;
                pbVar8 = pbVar8 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_6648922a:
              if (iVar4 == 0) {
                *(undefined4 *)(*(int *)((int)local_8 + 0x70) + 0x34) = 1;
              }
            }
          }
        }
        *(undefined4 *)(*(int *)((int)this + 0x70) + 0x28) = 1;
      }
    }
  }
  return 0;
}


