/* Module: vidcap30.exe
   Function: FUN_0057c340
   Address: 0057c340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057c340(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00584478;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00404b20(*(undefined4 *)(param_1 + 0x3c));
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  local_4 = 0xffffffff;
  FUN_0057b430();
  ExceptionList = pvStack_c;
  return;
}


