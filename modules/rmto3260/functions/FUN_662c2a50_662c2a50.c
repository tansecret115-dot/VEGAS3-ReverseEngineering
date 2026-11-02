/* Module: rmto3260.dll
   Function: FUN_662c2a50
   Address: 662c2a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c2a50(int param_1)

{
  FUN_662c1020();
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_662c2c40(param_1 + -0x10);
  return 0;
}


