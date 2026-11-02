/* Module: g2plug.dll
   Function: FUN_5f807b50
   Address: 5f807b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f807b50(LPCVOID param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  piVar1 = *(int **)((int)param_1 + 0x6c8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x6c8) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x6cc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x6cc) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x6d0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x6d0) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x6d4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x6d4) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x688);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x688) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x68c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x68c) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x690);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x690) = 0;
  }
  if (*(int *)((int)param_1 + 0x698) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x694) + 0x10))
              (*(int **)((int)param_1 + 0x694),*(int *)((int)param_1 + 0x698));
    piVar1 = *(int **)((int)param_1 + 0x694);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)param_1 + 0x694) = 0;
    }
    piVar1 = *(int **)((int)param_1 + 0x698);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)((int)param_1 + 0x698) = 0;
  }
  pvVar2 = GlobalHandle(param_1);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(param_1);
  GlobalFree(pvVar2);
  return 0;
}


