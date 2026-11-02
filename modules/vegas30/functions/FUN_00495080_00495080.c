/* Module: vegas30.exe
   Function: FUN_00495080
   Address: 00495080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00495080(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if (DAT_006476b8 == 0) {
    if (DAT_006476c0 == 0) {
      return CONCAT44(param_3,param_2);
    }
    if (-1 < param_3) {
      _param_2 = ftol();
      uVar6 = ftol();
      return uVar6;
    }
    bVar5 = param_2 != 0;
    param_2 = -param_2;
    param_3 = -(param_3 + (uint)bVar5);
    _param_2 = ftol();
  }
  else {
    iVar2 = FUN_004942c0(param_1,&param_2);
    iVar1 = param_4;
    if (iVar2 != 0) {
      return CONCAT44(param_3,param_2);
    }
    iVar3 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),param_4);
    iVar2 = iVar3;
    if (iVar3 < 1) {
LAB_00495190:
      iVar2 = **(int **)(*(int *)(iVar1 + 8) + 0x24);
      if (iVar3 < iVar2 + -1) {
        do {
          iVar3 = iVar3 + 1;
          if (iVar2 <= iVar3) break;
          iVar4 = FUN_00494ba0(param_1,&param_2,
                               *(undefined4 *)
                                (*(int *)(*(int *)(*(int *)(iVar1 + 8) + 0x24) + 8) + iVar3 * 4));
        } while (iVar4 == 0);
      }
    }
    else {
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) goto LAB_00495190;
        iVar4 = FUN_00494ca0(param_1,&param_2,
                             *(undefined4 *)
                              (*(int *)(*(int *)(*(int *)(iVar1 + 8) + 0x24) + 8) + iVar2 * 4));
      } while (iVar4 == 0);
    }
    if (DAT_006476c0 == 0) {
      return CONCAT44(param_3,param_2);
    }
    if (-1 < param_3) {
      _param_2 = ftol();
      uVar6 = ftol();
      return uVar6;
    }
    bVar5 = param_2 != 0;
    param_2 = -param_2;
    param_3 = -(param_3 + (uint)bVar5);
    _param_2 = ftol();
  }
  uVar6 = ftol();
  return CONCAT44(-((int)((ulonglong)uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
}


