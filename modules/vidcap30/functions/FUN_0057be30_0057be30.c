/* Module: vidcap30.exe
   Function: FUN_0057be30
   Address: 0057be30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057be30(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005843f8;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x14);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  local_4 = 0xffffffff;
  FUN_0057b430();
  ExceptionList = pvStack_c;
  return;
}


