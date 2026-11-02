/* Module: vegas30.exe
   Function: FUN_00541250
   Address: 00541250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00541250(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_10;
  int local_c;
  
  local_10 = 0;
  if (param_1 == 0) {
    return 0;
  }
  piVar3 = *(int **)(param_1 + 0x228);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  local_c = *piVar3;
  if (0 < local_c) {
    piVar3 = (int *)piVar3[2];
    do {
      iVar5 = *piVar3;
      if (iVar5 != 0) {
        iVar1 = *(int *)(iVar5 + 0x14);
        uVar2 = *(uint *)(iVar5 + 0x10);
        if ((iVar1 < param_3) || ((iVar1 <= param_3 && (uVar2 < param_2)))) {
LAB_005412dc:
          uVar6 = uVar2 + *(uint *)(iVar5 + 0x20);
          iVar5 = iVar1 + *(int *)(iVar5 + 0x24) + (uint)CARRY4(uVar2,*(uint *)(iVar5 + 0x20));
          if ((param_3 <= iVar5) && ((param_3 < iVar5 || (param_2 <= uVar6)))) {
            iVar4 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
            if ((iVar5 < iVar4) || ((iVar5 <= iVar4 && (uVar6 < param_2 + param_4))))
            goto LAB_00541324;
          }
          if (((param_3 < iVar1) || (((param_3 <= iVar1 && (param_2 < uVar2)) || (iVar5 < param_3)))
              ) || ((iVar5 <= param_3 && (uVar6 <= param_2)))) goto LAB_00541328;
        }
        else {
          iVar4 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
          if ((iVar4 <= iVar1) && ((iVar4 < iVar1 || (param_2 + param_4 <= uVar2))))
          goto LAB_005412dc;
        }
LAB_00541324:
        local_10 = local_10 + 1;
      }
LAB_00541328:
      piVar3 = piVar3 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return local_10;
}


