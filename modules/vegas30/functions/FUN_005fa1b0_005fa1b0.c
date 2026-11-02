/* Module: vegas30.exe
   Function: FUN_005fa1b0
   Address: 005fa1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fa1b0(int param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x80070057;
  }
  piVar1 = (int *)(param_1 + 8);
  (**(code **)(*(int *)(param_1 + 8) + 0x24))(piVar1,1);
  uVar2 = ftol();
  *param_2 = uVar2;
  (**(code **)(*piVar1 + 0x24))(piVar1,0);
  return 0;
}


