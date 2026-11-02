/* Module: vegas30.exe
   Function: FUN_005cb5d0
   Address: 005cb5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cb5d0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_005b83b0(param_1,1);
  piVar1 = *(int **)(param_2 + 0x24);
  iVar4 = *piVar1;
  if ((0 < iVar4) && (iVar5 = 0, 0 < iVar4)) {
    do {
      iVar2 = *(int *)(piVar1[2] + iVar5 * 4);
      if (*(int *)(iVar2 + 0x38) != 0) {
        if ((DAT_0064761c & 0x200) == 0) {
          FUN_005d9d30(param_1,iVar2,1);
        }
        else {
          *(undefined4 *)(iVar2 + 0x38) = 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  uVar3 = FUN_005b87b0(param_1);
  iVar4 = _SfList_FindSpecificItemRange_16(uVar3,0,0xffffffff,param_2);
  if (-1 < iVar4) {
    _SfList_DeleteList_16(uVar3,iVar4,1,param_3);
    uVar3 = FUN_005cb570(param_1,param_2);
    FUN_005b9000(param_1);
    *(uint *)*param_1 = *(uint *)*param_1 | 4;
    FUN_005b84d0(param_1,1);
    return uVar3;
  }
  FUN_005b84d0(param_1,1);
  return 0x8000ffff;
}


