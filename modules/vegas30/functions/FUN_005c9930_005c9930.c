/* Module: vegas30.exe
   Function: FUN_005c9930
   Address: 005c9930
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005c9930(undefined4 *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_005b83b0(param_1,1);
  iVar6 = 0;
  bVar3 = false;
  iVar1 = **(int **)(param_2 + 0x24);
  if (param_3 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x24) + 8) + param_3 * 4);
      if ((*(byte *)(iVar2 + 0x10) & 8) == 0) {
        iVar6 = iVar6 + 1;
        iVar5 = *(uint *)(iVar2 + 0x18) + param_4;
        iVar4 = *(int *)(iVar2 + 0x1c) + param_5 + (uint)CARRY4(*(uint *)(iVar2 + 0x18),param_4);
        if ((iVar4 < 1) && (iVar4 < 0)) {
          iVar5 = 0;
          iVar4 = 0;
        }
        *(int *)(iVar2 + 0x18) = iVar5;
        *(int *)(iVar2 + 0x1c) = iVar4;
        iVar4 = *(int *)(iVar2 + 0x3c) + 1;
        if (iVar4 < 2) {
          iVar4 = 1;
        }
        *(int *)(iVar2 + 0x3c) = iVar4;
        iVar4 = *(int *)(iVar2 + 8);
        if (iVar4 != 0) {
          *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 0x200000;
          *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
        }
        *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
        if (((*(uint *)(iVar2 + 0x10) & 0x400) != 0) ||
           ((*(uint *)(*(int *)(iVar2 + 8) + 0x10) & 0x200) != 0)) {
          *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
        }
      }
      else {
        bVar3 = true;
      }
      param_3 = param_3 + 1;
    } while (param_3 < iVar1);
    if ((bVar3) || (((iVar6 != 0 && (param_5 < 1)) && (param_5 < 0)))) {
      FUN_005c8a20(param_2);
    }
  }
  FUN_005b84d0(param_1,1);
  return iVar6 == 0;
}


