/* Module: encn3260.dll
   Function: FUN_664a6310
   Address: 664a6310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a6310(int param_1,uint *param_2)

{
  void *this;
  int *piVar1;
  DWORD DVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x6c) + 0xb4));
  this = operator_new(0x22c);
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_664a5700(this,*(int *)(param_1 + 0x94),*(int *)(param_1 + 0x3c));
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  FUN_664a5d60(piVar1,param_1);
  FUN_664a5d70(piVar1,*(int **)(param_1 + 0x6c));
  FUN_664aa9b0(piVar1,*(int **)(param_1 + 0x140));
  FUN_664aa8f0(piVar1,(undefined4 *)(param_1 + 0x110));
  (**(code **)*piVar1)(piVar1,&DAT_664dcdc0,param_2);
  FUN_664c3e40((void *)(param_1 + 0x30),*param_2,(int)piVar1);
  piVar1[0x35] = *(int *)(param_1 + 0xd4);
  piVar1[0x36] = *(int *)(param_1 + 0xd8);
  if (*(void **)(param_1 + 0x6c) != (void *)0x0) {
    FUN_664aa6d0(*(void **)(param_1 + 0x6c),1,0);
  }
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    DVar2 = GetCurrentThreadId();
    if ((*(DWORD *)(param_1 + 0x84) == DVar2) && (*(int *)(param_1 + 0x68) == 0)) {
      SetFocus((HWND)*piVar1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x6c) + 0xb4));
  return 0;
}


