/* Module: rmto3260.dll
   Function: FUN_662d3ac0
   Address: 662d3ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d3ac0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  piVar2 = param_1;
  iVar4 = param_1[0xd];
  if (iVar4 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = *(int **)(iVar4 + 0x10);
  }
  local_14 = *(int *)(iVar4 + 4);
  if ((ushort)param_1 != 0) {
    local_10 = (uint)param_1 & 0xffff;
    do {
      piVar3 = (int *)FUN_662ed930(&local_14);
      puVar1 = (undefined4 *)*piVar3;
      if (*(int *)((int)puVar1 + 6) != 0) {
        puVar5 = (undefined4 *)0x0;
        local_18 = *(int *)(piVar2[0xd] + 4);
        local_8 = 0;
        local_c = 0;
        do {
          if (local_8 != 0) goto LAB_662d3b73;
          piVar3 = (int *)FUN_662ed930(&local_18);
          puVar5 = (undefined4 *)*piVar3;
          if ((puVar5 != puVar1) && (*(int *)((int)puVar5 + 6) == 0)) {
            iVar4 = (**(code **)(*piVar2 + 100))(piVar2,*puVar1,0,*puVar5,0);
            local_8 = (uint)(-1 < iVar4);
          }
          local_c = local_c + 1;
        } while ((ushort)local_c < (ushort)param_1);
        if (local_8 != 0) {
LAB_662d3b73:
          *(undefined4 *)((int)puVar5 + 10) = 1;
          *(undefined4 *)((int)puVar5 + 6) = 1;
          *(undefined4 *)((int)puVar1 + 0xe) = 1;
        }
      }
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  return 0;
}


