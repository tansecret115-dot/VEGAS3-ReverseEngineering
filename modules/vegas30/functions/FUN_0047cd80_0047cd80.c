/* Module: vegas30.exe
   Function: FUN_0047cd80
   Address: 0047cd80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047cd80(int param_1,uint param_2,int param_3,uint *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int local_14;
  uint *local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  puVar6 = param_4;
  local_c = 1;
  local_10 = (uint *)(*(int **)(param_1 + 0x30))[2];
  local_14 = **(int **)(param_1 + 0x30);
  if (param_5 < 1) {
    return 1;
  }
  local_8 = *param_4 + param_2;
  iVar2 = param_4[1] + param_3 + (uint)CARRY4(*param_4,param_2);
  if ((iVar2 < 1) && (iVar2 < 0)) {
    local_8 = 0;
    iVar2 = 0;
  }
  uVar4 = local_8;
  uVar5 = param_4[param_5 * 4 + -4] + param_2;
  local_4 = param_4[param_5 * 4 + -3] + param_3 + (uint)CARRY4(param_4[param_5 * 4 + -4],param_2);
  if ((local_4 <= iVar2) && ((local_4 < iVar2 || (uVar5 < local_8)))) {
    uVar5 = local_8;
    local_4 = iVar2;
  }
  local_8 = uVar5;
  iVar7 = 0;
  puVar3 = local_10;
  if (0 < local_14) {
    do {
      if ((iVar2 < (int)puVar3[1]) || ((iVar2 <= (int)puVar3[1] && (uVar4 <= *puVar3)))) break;
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar7 < local_14);
  }
  param_4 = (uint *)0x0;
  if (0 < param_5) {
    iVar2 = iVar7 << 4;
    do {
      if ((local_14 <= iVar7) ||
         ((iVar1 = *(int *)(iVar2 + 4 + (int)local_10), local_4 <= iVar1 &&
          ((local_4 < iVar1 || (local_8 < *(uint *)(iVar2 + (int)local_10))))))) {
        local_c = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x30),iVar7,puVar6,1);
        if (local_c < 0) break;
        local_10 = (uint *)(*(int **)(param_1 + 0x30))[2];
        local_14 = **(int **)(param_1 + 0x30);
      }
      puVar3 = (uint *)(iVar2 + (int)local_10);
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      puVar3[2] = puVar6[2];
      puVar3[3] = puVar6[3];
      uVar5 = *puVar6 + param_2;
      uVar4 = puVar6[1] + param_3 + (uint)CARRY4(*puVar6,param_2);
      if (((int)uVar4 < 1) && ((int)uVar4 < 0)) {
        uVar5 = 0;
        uVar4 = 0;
      }
      *puVar3 = uVar5;
      puVar3[1] = uVar4;
      puVar6 = puVar6 + 4;
      param_4 = (uint *)((int)param_4 + 1);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + 0x10;
    } while ((int)param_4 < param_5);
  }
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  while( true ) {
    if (local_14 <= iVar7) {
      return local_c;
    }
    if (local_4 < (int)local_10[iVar7 * 4 + 1]) break;
    if ((local_4 <= (int)local_10[iVar7 * 4 + 1]) && (local_8 < local_10[iVar7 * 4])) {
      return local_c;
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x30),iVar7,1,0);
    local_14 = **(int **)(param_1 + 0x30);
    local_10 = (uint *)(*(int **)(param_1 + 0x30))[2];
  }
  return local_c;
}


