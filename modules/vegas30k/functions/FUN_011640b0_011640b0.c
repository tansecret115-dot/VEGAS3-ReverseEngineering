/* Module: vegas30k.dll
   Function: FUN_011640b0
   Address: 011640b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_011640b0(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)(param_1[4] + 0x10) != 0) {
    *param_3 = 0;
    *param_2 = 0;
    return true;
  }
  *param_2 = param_1[0xb];
  *param_3 = param_1[0xc];
  iVar1 = param_1[4];
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar5 = *(undefined4 *)(iVar1 + 0x44);
    uVar6 = 0;
    if (param_1[0xc] != 0) {
      do {
        piVar2 = *(int **)(param_1[10] + uVar6 * 4);
        (**(code **)(*piVar2 + 0x40))(piVar2,uVar5);
        piVar2 = *(int **)(param_1[10] + uVar6 * 4);
        (**(code **)(*piVar2 + 0x48))(piVar2,param_1[4] + 0x30,param_1[4] + 0x38);
        uVar5 = 0;
        (**(code **)(*param_1 + 4))(param_1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)param_1[0xc]);
    }
    *param_3 = uVar6;
    return uVar6 == 0;
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x44);
  uVar6 = 0;
  uVar7 = 0;
  if (param_1[0xc] != 0) {
    do {
      if (*(uint *)(param_1[4] + 0x18) <= uVar6) break;
      piVar2 = *(int **)(param_1[10] + uVar7 * 4);
      (**(code **)(*piVar2 + 0x40))(piVar2,uVar5);
      piVar2 = *(int **)(param_1[10] + uVar7 * 4);
      (**(code **)(*piVar2 + 0x48))(piVar2,param_1[4] + 0x30,param_1[4] + 0x38);
      uVar5 = 0;
      uVar4 = *(int *)(param_1[4] + 0x18) - uVar6;
      iVar1 = *(int *)(*(int *)(param_1[10] + uVar7 * 4) + 0x10);
      uVar3 = *(uint *)(iVar1 + 0x14);
      if (uVar3 <= uVar4) {
        uVar4 = uVar3;
      }
      *(uint *)(iVar1 + 0x18) = uVar4;
      uVar6 = uVar6 + uVar4;
      (**(code **)(*param_1 + 4))(param_1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[0xc]);
  }
  *param_3 = uVar7;
  return uVar7 == 0;
}


