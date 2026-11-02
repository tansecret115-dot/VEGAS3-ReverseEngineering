/* Module: sftrans1.dll
   Function: FUN_00499240
   Address: 00499240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00499240(int param_1,uint param_2)

{
  int *piVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0xc)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
    FUN_00499ea0(*(undefined4 *)(&DAT_00563e08 + param_2 * 4));
    *(undefined4 *)(param_1 + 0x74) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
    piVar1 = *(int **)(param_1 + 0xd0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    if (*(HWND *)(param_1 + 0xd4) != (HWND)0x0) {
      PostMessageA(*(HWND *)(param_1 + 0xd4),0x111,*(WPARAM *)(param_1 + 0xd8),0);
    }
    return 0;
  }
  return 0x80070057;
}


