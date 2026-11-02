/* Module: vegas30k.dll
   Function: FUN_01161000
   Address: 01161000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01161000(int param_1,int param_2)

{
  FUN_01160210(param_1,param_2,0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x28));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x24));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}


