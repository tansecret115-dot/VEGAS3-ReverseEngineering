/* Module: oggplug.dll
   Function: FUN_00407b90
   Address: 00407b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407b90(int *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1[2] != 0) {
    FUN_00441080(param_1 + 0x1a);
    FUN_00430fb0(param_1 + 0xa8);
    FUN_004313a0(param_1 + 0x8c);
    FUN_00430070(param_1 + 0x80);
    FUN_004415e0(param_1 + 0x12);
  }
  if ((param_1[0xcd] != 0) && (param_1[9] != 0)) {
    FUN_004093c0(param_1[9]);
    param_1[0xcd] = 0;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if ((param_1[0xd9] != 0) && (iVar3 = 0, 0 < param_1[0xd2])) {
    do {
      piVar1 = *(int **)(param_1[0xd9] + 0x1c + iVar4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (iVar3 < param_1[0xd2]);
  }
  if ((int *)param_1[9] != (int *)0x0) {
    FUN_00408fa0((int *)param_1[9]);
    piVar1 = (int *)param_1[9];
    if (piVar1 != (int *)0x0) {
      FUN_00408b70(piVar1);
      pvVar2 = GlobalHandle(piVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(piVar1);
      GlobalFree(pvVar2);
    }
    param_1[9] = 0;
  }
  if ((LPCVOID)param_1[6] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalFree(pvVar2);
    param_1[6] = 0;
  }
  if (param_1[2] != 0) {
    param_1[2] = 0;
  }
  return 0;
}


