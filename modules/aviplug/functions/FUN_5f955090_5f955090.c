/* Module: aviplug.dll
   Function: FUN_5f955090
   Address: 5f955090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f955090(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (param_2[1] != 0) {
      (**(code **)(*(int *)(iVar1 + 8) + 0x24))(iVar1 + 8);
      (**(code **)(*(int *)*param_2 + 0x10))((int *)*param_2,param_2[1]);
    }
    (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
    *param_2 = 0;
  }
  piVar2 = (int *)param_2[1];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_2[1] = 0;
  }
  piVar2 = (int *)param_2[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_2[2] = 0;
  }
  piVar2 = (int *)param_2[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_2[3] = 0;
  }
  if ((LPVOID)param_2[4] != (LPVOID)0x0) {
    CoTaskMemFree((LPVOID)param_2[4]);
    param_2[4] = 0;
  }
  if ((LPVOID)param_2[5] != (LPVOID)0x0) {
    CoTaskMemFree((LPVOID)param_2[5]);
    param_2[5] = 0;
  }
  param_2[6] = 0;
  return;
}


