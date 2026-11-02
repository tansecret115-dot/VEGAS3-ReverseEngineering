/* Module: vegas30.exe
   Function: FUN_005d13b0
   Address: 005d13b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d13b0(int param_1)

{
  void **ppvVar1;
  int *piVar2;
  int iVar3;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0062a158;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  piVar2 = *(int **)(param_1 + 0x1fc);
  ppvVar1 = &local_14;
  if (piVar2 == (int *)0x0) {
    return 1;
  }
LAB_005d13fd:
  ExceptionList = ppvVar1;
  iVar3 = *piVar2;
  do {
    if (iVar3 + -1 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)piVar2[2];
    }
    do {
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x1fc) != 0) {
          _SfList_Destroy_4(*(int *)(param_1 + 0x1fc));
          *(undefined4 *)(param_1 + 0x1fc) = 0;
        }
        *(undefined4 *)(param_1 + 0x208) = 0;
        ExceptionList = local_14;
        return 0;
      }
      piVar2 = *(int **)(iVar3 + 4);
      if (piVar2 != (int *)0x0) {
        local_8 = 0;
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(iVar3 + 4) = 0;
        goto LAB_005d1468;
      }
      piVar2 = *(int **)(iVar3 + 0x1c);
    } while (piVar2 == (int *)0x0);
    local_8 = 1;
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + -1;
LAB_005d1468:
    local_8 = 0xffffffff;
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x1fc),0,1,1);
    piVar2 = *(int **)(param_1 + 0x1fc);
    ppvVar1 = ExceptionList;
    if (piVar2 != (int *)0x0) goto LAB_005d13fd;
    iVar3 = 0;
  } while( true );
}


