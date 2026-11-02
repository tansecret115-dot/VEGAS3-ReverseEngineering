/* Module: sfmarket2.dll
   Function: FUN_00458f70
   Address: 00458f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00458f70(int *param_1,int param_2)

{
  FUN_00458180(param_1,param_2,(int *)0x0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[10]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[9]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}


