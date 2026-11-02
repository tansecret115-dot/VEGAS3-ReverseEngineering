/* Module: vidcap30.exe
   Function: FUN_0046d1d0
   Address: 0046d1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046d1d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x25];
  *param_1 = &PTR_LAB_00593238;
  param_1[3] = &PTR_LAB_005931fc;
  param_1[4] = &PTR_LAB_005931e8;
  param_1[0x1c] = &PTR_LAB_005931d0;
  param_1[0x1d] = &PTR_LAB_00593180;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x24];
  param_1[0x25] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x4b] != 0) {
    FUN_0046c490(param_1 + 0x1c);
    _SfList_Destroy_4(param_1[0x4b]);
    param_1[0x4b] = 0;
  }
  FUN_0057ad20();
  FUN_0057ad20();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  FUN_005838a0();
  return;
}


