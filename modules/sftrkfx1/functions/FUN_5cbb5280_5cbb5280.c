/* Module: sftrkfx1.dll
   Function: FUN_5cbb5280
   Address: 5cbb5280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cbb5280(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_18;
  double *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  puVar6 = param_2;
  piVar1 = param_1;
  local_18 = 0;
  if (0 < param_1[6]) {
    local_4 = 0;
    local_c = 6;
    do {
      iVar5 = 0;
      piVar1[10] = *puVar6;
      piVar1[0xb] = puVar6[1];
      piVar1[0xc] = puVar6[2];
      piVar1[0xd] = puVar6[3];
      param_1 = puVar6 + 0x1c;
      local_14 = (double *)(puVar6 + 4);
      piVar1[2] = 1;
      iVar3 = 0;
      param_2 = (undefined4 *)0x0;
      local_10 = local_4;
      local_8 = local_4;
      do {
        *(undefined4 *)(piVar1[7] + local_10) = 0;
        if (*local_14 != _DAT_5cc04098) {
          iVar4 = *param_1;
          if (iVar4 == 1) {
            FUN_5cbb4f90((int)puVar6,(double *)(piVar1[7] + local_4 + 0x28 + iVar5),iVar3);
          }
          else if (iVar4 == 2) {
            FUN_5cbb44c0((int)puVar6,(double *)(piVar1[7] + local_4 + 0x28 + iVar5),iVar3);
          }
          else if (iVar4 == 3) {
            FUN_5cbb50f0((int)puVar6,(double *)(piVar1[7] + local_4 + 0x28 + iVar5),iVar3);
          }
          piVar1[2] = 0;
          *(int *)(piVar1[7] + (local_c + (int)param_2) * 4) = *param_1;
          *(undefined4 *)(piVar1[7] + local_8) = 1;
          param_2 = (undefined4 *)((int)param_2 + 1);
          local_8 = local_8 + 4;
          iVar5 = iVar5 + 0x70;
        }
        local_14 = local_14 + 1;
        iVar3 = iVar3 + 1;
        local_10 = local_10 + 4;
        param_1 = param_1 + 1;
      } while (iVar3 < 4);
      local_18 = local_18 + 1;
      local_4 = local_4 + 0x1e8;
      local_c = local_c + 0x7a;
    } while (local_18 < piVar1[6]);
  }
  iVar3 = 0;
  if ((piVar1[2] != 0) && (local_18 = 0, 0 < piVar1[6])) {
    do {
      iVar4 = 4;
      iVar5 = iVar3;
      do {
        puVar6 = (undefined4 *)(piVar1[7] + 0x48 + iVar5);
        iVar5 = iVar5 + 0x70;
        iVar4 = iVar4 + -1;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      } while (iVar4 != 0);
      local_18 = local_18 + 1;
      iVar3 = iVar3 + 0x1e8;
    } while (local_18 < piVar1[6]);
  }
  return 0;
}


