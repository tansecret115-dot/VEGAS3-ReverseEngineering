/* Module: vegas30.exe
   Function: FUN_0050a490
   Address: 0050a490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050a490(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_124;
  undefined4 *local_120;
  undefined4 local_11c [71];
  
  if ((param_1 != param_3) && (iVar2 = FUN_0050a790(param_1,param_3), iVar2 != 0)) {
    if (*(int **)(iVar2 + 0x120) == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = **(int **)(iVar2 + 0x120);
    }
    iVar4 = 0;
    if (0 < iVar7) {
      do {
        if (*(undefined4 **)(*(int *)(*(int *)(iVar2 + 0x120) + 8) + iVar4 * 4) == param_3) {
          _SfList_DeleteList_16(*(int *)(iVar2 + 0x120),iVar4,1,1);
          iVar4 = iVar4 + -1;
          iVar7 = iVar7 + -1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar7);
    }
    FUN_00508ba0(param_3,local_11c);
    puVar3 = (undefined4 *)0x0;
    if (param_2 != 0) {
      piVar1 = (int *)(param_2 + 0x120);
      if (*(int *)(param_2 + 0x120) == 0) {
        _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
      }
      if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
        local_124 = 0;
      }
      else {
        local_124 = *(undefined4 *)*piVar1;
      }
      puVar3 = calloc(1,0x124);
      if (puVar3 != (undefined4 *)0x0) {
        puVar5 = local_11c;
        puVar6 = puVar3;
        for (iVar2 = 0x47; puVar6 = puVar6 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
        }
        local_120 = puVar3;
        _SfList_InsertList_16(*piVar1,local_124,&local_120,1);
      }
    }
    puVar6 = param_3;
    for (iVar2 = 0x49; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    free(param_3);
    return 0;
  }
  return 0x80004005;
}


