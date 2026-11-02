/* Module: rmbe3260.dll
   Function: FUN_6603d3e0
   Address: 6603d3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6603d3e0(int param_1)

{
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 8))(param_1);
    if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return 0;
}


