/* Module: rmbe3260.dll
   Function: FUN_6603e330
   Address: 6603e330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6603e330(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  uVar2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  if (param_1[0x11] != 0) goto LAB_6603e39e;
  FUN_6603ea10((int)param_1);
  local_10 = 100;
  local_8 = 0;
  local_c = param_1;
  (**(code **)(*param_1 + 0xc))(&local_10);
  iVar1 = 0;
  param_1[0x11] = 1;
  if ((int *)param_1[6] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[6] + 0x20))();
  }
  if ((int *)param_1[8] == (int *)0x0) {
LAB_6603e395:
    if (iVar1 == 0) goto LAB_6603e39e;
  }
  else if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_1[8] + 0x20))();
    goto LAB_6603e395;
  }
  uVar2 = 0xfff4;
LAB_6603e39e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  return uVar2;
}


