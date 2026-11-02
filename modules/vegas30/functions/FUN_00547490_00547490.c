/* Module: vegas30.exe
   Function: FUN_00547490
   Address: 00547490
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00547490(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    piVar1 = (int *)param_1[0x7e];
    piVar2 = param_1 + 0x7e;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *piVar2 = 0;
    iVar3 = (**(code **)*param_2)(param_2,&DAT_0060ef78,piVar2);
    if (-1 < iVar3) {
      (**(code **)(*(int *)*piVar2 + 0x30))((int *)*piVar2,param_1 + 0x80);
    }
    (**(code **)(*param_1 + 0x74))(0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    return iVar3;
  }
  (**(code **)(*param_1 + 0x74))(1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  piVar2 = (int *)param_1[0x7e];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  param_1[0x7e] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return 0;
}


