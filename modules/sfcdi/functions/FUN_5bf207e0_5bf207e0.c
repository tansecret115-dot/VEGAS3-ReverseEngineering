/* Module: sfcdi.dll
   Function: FUN_5bf207e0
   Address: 5bf207e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5bf207e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_LAB_5bf564f8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5bf2b040((int *)param_1[3]);
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_5bf3ceb0((int *)param_1[2]);
    FUN_5bf3e060((int *)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


