/* Module: vidcap30.exe
   Function: FUN_00520e80
   Address: 00520e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00520e80(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_0059bbc0;
  if (param_1[8] != 0) {
    FUN_00522340();
    (**(code **)(*(int *)param_1[8] + 8))((int *)param_1[8]);
    param_1[8] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  DestroyWindow((HWND)param_1[10]);
  return;
}


