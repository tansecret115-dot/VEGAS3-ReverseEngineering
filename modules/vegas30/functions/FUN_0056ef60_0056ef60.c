/* Module: vegas30.exe
   Function: FUN_0056ef60
   Address: 0056ef60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0056ef60(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_14;
  int local_4;
  
  local_14 = 0;
  iVar1 = **(int **)(param_1 + 0x2b0);
  iVar8 = iVar1;
  if (iVar1 < 1) {
    return 0;
  }
  do {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + local_14 * 4);
    uVar3 = *(uint *)(iVar2 + 0x1c);
    if ((((uVar3 & 1) != 0) && (iVar2 != param_3)) && (*(int *)(iVar2 + 8) != 1)) {
      if (param_2 == 0) {
        uVar3 = uVar3 >> 1;
      }
      else {
        uVar3 = uVar3 >> 2;
      }
      if ((uVar3 & 1) == 0) {
        iVar8 = (*(int *)(iVar2 + 0x620) - *(int *)(param_1 + 0x284)) + *param_4;
        local_4 = (*(int *)(iVar2 + 0x624) - *(int *)(param_1 + 0x288)) + param_4[1];
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x28c);
        iVar6 = 0;
        iVar4 = 0;
        if (uVar3 != 0) {
          piVar5 = (int *)(param_1 + 0x284);
          piVar7 = param_4;
          do {
            if ((uVar3 & 1) != 0) {
              iVar6 = iVar6 + 1;
              iVar4 = iVar4 + (*piVar7 - *piVar5);
            }
            uVar3 = uVar3 >> 1;
            piVar5 = piVar5 + 1;
            piVar7 = piVar7 + 1;
          } while (uVar3 != 0);
          if (iVar6 != 0) {
            iVar8 = *(int *)(iVar2 + 0x620) + iVar4 / iVar6;
            local_4 = *(int *)(iVar2 + 0x624) + iVar4 / iVar6;
          }
        }
      }
      if (iVar8 < -0x2d0) {
        iVar8 = -0x2d0;
      }
      else if (0x78 < iVar8) {
        iVar8 = 0x78;
      }
      if (local_4 < -0x2d0) {
        local_4 = -0x2d0;
      }
      else if (0x78 < local_4) {
        local_4 = 0x78;
      }
      if (param_2 == 0) {
        FUN_0056e790(local_14,iVar8,local_4);
      }
      else {
        FUN_0056e8e0(local_14,iVar8,local_4);
      }
      FUN_0056df80(iVar2);
    }
    local_14 = local_14 + 1;
  } while (local_14 < iVar1);
  return 0;
}


