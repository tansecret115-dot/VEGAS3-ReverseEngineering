/* Module: vidcap30.exe
   Function: FUN_005816a0
   Address: 005816a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005816a0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005849ee;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))(1);
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0xc))(1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c));
  local_4 = 0xffffffff;
  FUN_0057c340();
  ExceptionList = pvStack_c;
  return;
}


