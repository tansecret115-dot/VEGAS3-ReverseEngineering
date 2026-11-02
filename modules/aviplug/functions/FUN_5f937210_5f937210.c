/* Module: aviplug.dll
   Function: FUN_5f937210
   Address: 5f937210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f937210(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x49] != 0) {
    iVar2 = param_1[0x48];
    while (0 < iVar2) {
      param_1[0x48] = iVar2 + -1;
      (**(code **)(*param_1 + 0x6c))(param_1,param_1[0x49] + (iVar2 + -1) * 0x48);
      iVar2 = param_1[0x48];
    }
  }
  if ((int *)param_1[0x4e] != (int *)0x0) {
    iVar2 = *(int *)param_1[0x4e];
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      piVar1 = *(int **)(*(int *)(param_1[0x4e] + 8) + iVar2 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      FUN_5f978470((int *)param_1[0x4e],iVar2,1,0);
    }
    FUN_5f9796e0((int *)param_1[0x4e]);
    param_1[0x4e] = 0;
  }
  if (param_1[0x4c] != 0) {
    iVar2 = param_1[0x4b];
    while (0 < iVar2) {
      param_1[0x4b] = iVar2 + -1;
      (**(code **)(*param_1 + 0x68))(param_1,param_1[0x4c] + (iVar2 + -1) * 0x48);
      iVar2 = param_1[0x4b];
    }
  }
  if ((int *)param_1[0x4d] != (int *)0x0) {
    iVar2 = *(int *)param_1[0x4d];
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      piVar1 = *(int **)(*(int *)(param_1[0x4d] + 8) + iVar2 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      FUN_5f978470((int *)param_1[0x4d],iVar2,1,0);
    }
    FUN_5f9796e0((int *)param_1[0x4d]);
    param_1[0x4d] = 0;
  }
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  return;
}


