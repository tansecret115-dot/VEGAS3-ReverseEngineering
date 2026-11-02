/* Module: vegas30.exe
   Function: FUN_005f4690
   Address: 005f4690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f4690(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EBX;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
  if (iVar2 == 0) {
    WaitForSingleObject((HANDLE)param_1[0x20],0xffffffff);
    iVar2 = *param_1;
    if (iVar2 < 8) {
      iVar2 = 8;
    }
    else if (0x800 < iVar2) {
      iVar2 = 0x800;
    }
    iVar3 = param_1[1];
    *param_1 = iVar2;
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    else if (0x800 < iVar3) {
      iVar3 = 0x800;
    }
    param_1[1] = iVar3;
    if ((iVar2 == param_1[0x17] - param_1[0x15]) && (iVar3 == param_1[0x18] - param_1[0x16])) {
      uVar4 = 1;
    }
    else {
      param_1[0x17] = param_1[0x15] + iVar2;
      param_1[0x18] = param_1[0x16] + param_1[1];
      param_1[0x13] = param_1[0x13] + 1;
      piVar5 = (int *)&DAT_0062c9e0;
      puVar1 = *(undefined4 **)(**(int **)(param_1[0x12] + 8) + 0x10);
      iVar2 = (**(code **)*puVar1)(puVar1,&DAT_0062c9e0,&stack0x00000000);
      if (-1 < iVar2) {
        (**(code **)(*unaff_EBX + 0xc))
                  (unaff_EBX,param_1[0x17] - param_1[0x15],param_1[0x18] - param_1[0x16],1);
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      FUN_005f41e0();
      (**(code **)(*(int *)param_1[0x25] + 0x1c))((int *)param_1[0x25]);
      uVar4 = 0;
    }
    ReleaseMutex((HANDLE)param_1[0x20]);
    return uVar4;
  }
  return 0x80070057;
}


