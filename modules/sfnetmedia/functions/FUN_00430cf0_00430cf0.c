/* Module: sfnetmedia.dll
   Function: FUN_00430cf0
   Address: 00430cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00430cf0(int *param_1,int param_2)

{
  FUN_0042ff00(param_1,param_2,(int *)0x0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[10]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[9]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}


