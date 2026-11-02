/* Module: vidcap30.exe
   Function: FUN_005838a0
   Address: 005838a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005838a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00584b73;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005a6244;
  param_1[3] = &PTR_LAB_005a6208;
  param_1[4] = &PTR_LAB_005a61f4;
  iVar1 = param_1[0x14];
  local_4 = 1;
  while (iVar1 != 0) {
    piVar2 = *(int **)(param_1[0x15] + -4 + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(1);
    }
    iVar1 = param_1[0x14];
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  local_4 = 0xffffffff;
  FUN_0057c340();
  ExceptionList = pvStack_c;
  return;
}


