/* Module: aviplug.dll
   Function: FUN_5f951ac0
   Address: 5f951ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f951ac0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1[1] != 0) {
      (**(code **)(*(int *)(iVar1 + 8) + 0x24))(iVar1 + 8);
      (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1,param_1[1]);
    }
    (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
    *param_1 = 0;
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[1] = 0;
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[2] = 0;
  }
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[3] = 0;
  }
  if ((LPVOID)param_1[4] != (LPVOID)0x0) {
    CoTaskMemFree((LPVOID)param_1[4]);
    param_1[4] = 0;
  }
  if ((LPVOID)param_1[5] != (LPVOID)0x0) {
    CoTaskMemFree((LPVOID)param_1[5]);
    param_1[5] = 0;
  }
  param_1[6] = 0;
  return;
}


