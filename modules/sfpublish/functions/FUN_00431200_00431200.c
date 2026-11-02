/* Module: sfpublish.dll
   Function: FUN_00431200
   Address: 00431200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00431200(int *param_1,int param_2)

{
  FUN_00430410(param_1,param_2,(int *)0x0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[10]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[9]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}


