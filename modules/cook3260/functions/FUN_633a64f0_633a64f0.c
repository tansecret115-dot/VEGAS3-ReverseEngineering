/* Module: cook3260.dll
   Function: FUN_633a64f0
   Address: 633a64f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_633a64f0(void *this,int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  void *local_8;
  
  local_10 = 0;
  local_18 = *(int *)(&DAT_633a9858 + param_1 * 4);
  iVar1 = *(int *)(&DAT_633a9838 + param_1 * 4);
  local_20 = *(int *)(&DAT_633a9650 + param_1 * 4) + 1;
  local_1c = *(int *)(&DAT_633a9670 + param_1 * 4);
  if (0 < local_18) {
    local_c = (int *)(param_2 + iVar1 * 4);
    local_24 = param_2 - (int)param_3;
    local_8 = this;
    do {
      iVar2 = FUN_633a5ab0(local_8,*(int *)((int)local_8 + param_1 * 4 + 0x4580),(int *)&param_2);
      if (iVar2 == 0) {
        local_10 = 1;
        param_2 = 0;
      }
      iVar2 = iVar1;
      piVar5 = local_c;
      if (0 < iVar1) {
        do {
          uVar3 = param_2 * local_1c >> 0x14;
          iVar2 = iVar2 + -1;
          piVar5[-1] = param_2 - uVar3 * local_20;
          param_2 = uVar3;
          piVar5 = piVar5 + -1;
        } while (iVar2 != 0);
      }
      piVar5 = (int *)(local_24 + (int)param_3);
      puVar4 = param_3;
      iVar2 = iVar1;
      if (0 < iVar1) {
        do {
          local_14 = iVar2;
          iVar2 = *piVar5;
          piVar5 = piVar5 + 1;
          if (iVar2 == 0) {
LAB_633a65d3:
            *puVar4 = 0;
          }
          else {
            iVar2 = FUN_633a39b0(local_8,&local_28);
            if (iVar2 == 0) {
              local_10 = 1;
              goto LAB_633a65d3;
            }
            *puVar4 = local_28;
          }
          local_14 = local_14 + -1;
          puVar4 = puVar4 + 1;
          iVar2 = local_14;
        } while (local_14 != 0);
      }
      local_c = local_c + iVar1;
      param_3 = param_3 + iVar1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return local_10;
}


