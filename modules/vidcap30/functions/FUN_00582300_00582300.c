/* Module: vidcap30.exe
   Function: FUN_00582300
   Address: 00582300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00582300(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00584ae8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005a60dc;
  param_1[3] = &PTR_LAB_005a6094;
  param_1[4] = &PTR_LAB_005a6080;
  piVar1 = (int *)param_1[0x29];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_4 = 0xffffffff;
  FUN_0057d600();
  ExceptionList = pvStack_c;
  return;
}


