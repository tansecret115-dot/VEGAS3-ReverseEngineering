/* Module: vegas30.exe
   Function: FUN_0058d0c0
   Address: 0058d0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0058d0c0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  iVar6 = 0;
  iVar2 = **(int **)(param_1 + 0x1dc);
  if (iVar2 < 1) {
    return 0;
  }
  do {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + iVar6 * 4);
    if ((*(int *)(iVar3 + 4) == 2) && (param_2 == *(int *)(iVar3 + 0x3c))) {
      piVar1 = (int *)(iVar3 + 0x248);
      *piVar1 = iVar3;
      *(undefined4 *)(iVar3 + 0x358) = *param_3;
      *(undefined4 *)(iVar3 + 0x35c) = param_3[1];
      *(undefined4 *)(iVar3 + 0x360) = param_3[2];
      *(undefined4 *)(iVar3 + 0x364) = param_3[3];
      *(undefined2 *)(iVar3 + 0x368) = *(undefined2 *)(param_3 + 4);
      FUN_0058a740(piVar1);
      FUN_0058a670(piVar1);
      iVar4 = *(int *)(*piVar1 + 0x40);
      if (iVar4 == 0) {
        local_14 = *(undefined4 *)(iVar3 + 0x358);
        local_10 = *(int *)(iVar3 + 0x35c);
        local_c = *(int *)(iVar3 + 0x360);
        local_8 = *(undefined4 *)(iVar3 + 0x364);
        local_4 = *(undefined2 *)(iVar3 + 0x368);
      }
      else if ((0 < iVar4) && (iVar4 < 4)) {
        local_14 = CONCAT22(1,*(undefined2 *)(iVar3 + 0x358));
        local_10 = *(int *)(iVar3 + 0x35c);
        local_4 = 0;
        uVar5 = *(ushort *)(iVar3 + 0x366) >> 3;
        local_8 = CONCAT22(*(ushort *)(iVar3 + 0x366),uVar5);
        local_c = (uint)uVar5 * local_10;
      }
      if (*(int *)(iVar3 + 0x354) != 0) {
        FUN_005f12a0(&local_14);
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < iVar2);
  return 0;
}


