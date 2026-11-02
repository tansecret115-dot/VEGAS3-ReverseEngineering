/* Module: rmbe3260.dll
   Function: FUN_6602d540
   Address: 6602d540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602d540(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 1;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      (**(code **)(**(int **)(param_1 + 0x20) + 200))();
      if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


