/* Module: gifplug.dll
   Function: FUN_5f6c1860
   Address: 5f6c1860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6c1860(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_5f7022c8;
  FUN_5f6c1a70((int)param_1);
  piVar1 = *(int **)((int)param_1 + 0x6a3);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x6a3) = 0;
    *(undefined4 *)((int)param_1 + 0x6a7) = 0;
  }
  if ((int *)param_1[0x85] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x85] + 0x20))(1);
  }
  FUN_5f6c2f10(param_1 + 0x86);
  return;
}


