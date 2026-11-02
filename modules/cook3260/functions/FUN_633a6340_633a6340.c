/* Module: cook3260.dll
   Function: FUN_633a6340
   Address: 633a6340
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a6340(void *this,int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int local_18;
  int local_14;
  int local_c;
  int *local_8;
  
  *(undefined4 *)((int)this + param_1 * 4 + 0x4320) = 0;
  if (param_2 != 7) {
    iVar1 = *(int *)(&DAT_633a9650 + param_2 * 4);
    local_18 = *(int *)(&DAT_633a9858 + param_2 * 4);
    puVar2 = (&PTR_DAT_633a9878)[param_2];
    iVar3 = *(int *)(&DAT_633a9838 + param_2 * 4);
    puVar4 = (&PTR_DAT_633a9898)[param_2];
    iVar11 = 0;
    if (0 < local_18) {
      local_8 = param_3;
      do {
        iVar6 = *local_8;
        if (1 < iVar3) {
          local_c = iVar3 + -1;
          piVar9 = local_8;
          do {
            piVar9 = piVar9 + 1;
            iVar6 = iVar6 * (iVar1 + 1) + *piVar9;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        iVar6 = iVar6 * 4;
        iVar5 = *(int *)(puVar2 + iVar6);
        iVar7 = param_1 * 0x14;
        *(undefined4 *)
         ((int)this + (iVar7 + *(int *)((int)this + param_1 * 4 + 0x4320)) * 4 + 0x360) =
             *(undefined4 *)(puVar4 + iVar6);
        uVar8 = 0;
        *(undefined4 *)
         ((int)this + (iVar7 + *(int *)((int)this + param_1 * 4 + 0x4320)) * 4 + 0x2340) =
             *(undefined4 *)(puVar2 + iVar6);
        *(int *)((int)this + param_1 * 4 + 0x4320) = *(int *)((int)this + param_1 * 4 + 0x4320) + 1;
        iVar6 = 0;
        if (0 < iVar3) {
          puVar10 = (uint *)((int)local_8 + (param_4 - (int)param_3));
          local_14 = iVar3;
          do {
            if (*(int *)(((int)param_3 - param_4) + (int)puVar10) != 0) {
              uVar8 = uVar8 * 2 | *puVar10;
              iVar6 = iVar6 + 1;
            }
            puVar10 = puVar10 + 1;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
        }
        iVar11 = iVar11 + iVar5 + iVar6;
        if (0 < iVar6) {
          *(uint *)((int)this + (*(int *)((int)this + param_1 * 4 + 0x4320) + iVar7) * 4 + 0x360) =
               uVar8;
          *(int *)((int)this + (iVar7 + *(int *)((int)this + param_1 * 4 + 0x4320)) * 4 + 0x2340) =
               iVar6;
          *(int *)((int)this + param_1 * 4 + 0x4320) =
               *(int *)((int)this + param_1 * 4 + 0x4320) + 1;
        }
        local_8 = local_8 + iVar3;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    return iVar11;
  }
  return 0;
}


