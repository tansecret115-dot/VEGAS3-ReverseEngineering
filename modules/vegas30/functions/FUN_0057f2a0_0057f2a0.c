/* Module: vegas30.exe
   Function: FUN_0057f2a0
   Address: 0057f2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057f2a0(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 0x10))();
    (**(code **)(*(int *)param_1[0x12] + 8))();
    if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x12])(1);
    }
    param_1[0x12] = 0;
  }
  FUN_00584a20();
  FUN_005847a0();
  return;
}


