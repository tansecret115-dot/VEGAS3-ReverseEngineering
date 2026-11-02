/* Module: rmme3260.dll
   Function: FUN_6623c620
   Address: 6623c620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623c620(int *param_1)

{
  LONG *lpAddend;
  LONG LVar1;
  int iVar2;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  lpAddend = param_1 + 0x39;
  LVar1 = InterlockedIncrement(lpAddend);
  if (LVar1 < 2) {
    if (*(int *)(param_1[0x1b] + 0xfc) != 0) {
      *(undefined4 *)(param_1[0x1b] + 0xfc) = 1;
      InterlockedDecrement(lpAddend);
      return 0;
    }
    (**(code **)(*param_1 + 4))(param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1[0x1b] + 0xb4));
    if ((param_1[0x38] != 0) && (param_1[0x18] != 0)) {
      iVar2 = FUN_66247f80(param_1[0x1d]);
      if (iVar2 != 0) {
        FUN_662403e0((int)param_1);
        local_14 = param_1[0x1d];
        local_18 = param_1[0x51];
        local_1c = 0x2001;
        local_10 = 0;
        local_c = 0;
        local_8 = 0;
        (**(code **)(*(int *)param_1[0x18] + 0x14))((int *)param_1[0x18],&local_1c);
        if (((param_1[0x6a] == 0) && (local_8 == 0)) && ((HWND)param_1[0x51] != (HWND)0x0)) {
          InvalidateRect((HWND)param_1[0x51],(RECT *)0x0,0);
          FUN_66240f90(param_1,(HWND)param_1[0x51]);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x1b] + 0xb4));
    (**(code **)(*param_1 + 8))(param_1);
  }
  InterlockedDecrement(lpAddend);
  return 0;
}


