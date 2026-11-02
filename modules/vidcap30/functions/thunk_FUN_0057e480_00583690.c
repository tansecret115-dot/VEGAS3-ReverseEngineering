/* Module: vidcap30.exe
   Function: thunk_FUN_0057e480
   Address: 00583690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_0057e480(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00584738;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x9c);
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uStack_4 = 0xffffffff;
  FUN_0057d600();
  ExceptionList = pvStack_c;
  return;
}


