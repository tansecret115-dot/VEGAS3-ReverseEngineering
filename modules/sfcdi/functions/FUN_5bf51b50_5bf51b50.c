/* Module: sfcdi.dll
   Function: FUN_5bf51b50
   Address: 5bf51b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf51b50(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *local_8;
  int local_4;
  
  iVar5 = 0;
  local_4 = param_3;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar1[1] * iVar3 + piVar1[2];
  }
  iVar3 = *(int *)(iVar3 + 0x14);
  iVar2 = *(int *)(*(int *)(iVar3 + 0x34c) + 8);
  if ((iVar2 != 0) &&
     ((*(int *)(param_1 + 0x40) != 0 ||
      (iVar5 = FUN_5bf46410(*(undefined4 **)(param_1 + 0x3c),(LPCSTR)(iVar3 + 0x224),
                            *(LPCSTR *)(iVar3 + 0x328),*(uint *)(iVar3 + 0x32c),
                            *(int *)(iVar3 + 0x330),*(undefined4 **)(iVar3 + 0x334),
                            *(undefined4 *)(*(int *)(iVar3 + 0x34c) + 0x18)), iVar5 == 0)))) {
    do {
      puVar4 = (undefined4 *)(iVar2 - *(int *)(param_1 + 0x40));
      if ((undefined4 *)0x92f < puVar4) {
        puVar4 = (undefined4 *)0x930;
      }
      iVar5 = FUN_5bf46110(*(undefined4 **)(param_1 + 0x3c),param_2,puVar4,(uint *)&local_8);
      if ((iVar5 < 0) || (puVar4 != local_8)) {
        iVar5 = -0x7ffb1ff8;
        goto LAB_5bf51c59;
      }
      iVar3 = *(int *)(param_1 + 0x40) + (int)local_8;
      param_2 = (undefined4 *)((int)param_2 + (int)local_8);
      param_3 = param_3 - (int)local_8;
      *(int *)(param_1 + 0x40) = iVar3;
    } while ((param_3 != 0) && (iVar3 != iVar2));
    if (-1 < iVar5) {
      if (iVar3 == iVar2) {
        FUN_5bf463f0(*(undefined4 **)(param_1 + 0x3c));
      }
      else {
        iVar5 = 1;
      }
    }
  }
LAB_5bf51c59:
  *param_4 = local_4 - param_3;
  return iVar5;
}


