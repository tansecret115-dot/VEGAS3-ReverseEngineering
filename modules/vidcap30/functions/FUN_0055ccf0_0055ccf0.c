/* Module: vidcap30.exe
   Function: FUN_0055ccf0
   Address: 0055ccf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055ccf0(int param_1,int param_2)

{
  FUN_0055bf00(param_1,param_2,0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x28));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x24));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}


