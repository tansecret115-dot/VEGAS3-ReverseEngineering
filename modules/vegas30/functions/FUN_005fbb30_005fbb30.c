/* Module: vegas30.exe
   Function: FUN_005fbb30
   Address: 005fbb30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fbb30(int param_1,undefined4 param_2,undefined4 param_3,WPARAM param_4)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_00647208) {
    PostMessageA(DAT_00647624,0x617,param_4,0);
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004584e0(*(int *)(param_1 + 8),param_2,param_3);
  }
  if (DAT_0064768c != &DAT_005fdae0) {
    FUN_00404750(0);
    FUN_004046b0(&DAT_005fdae0,DAT_006476e8,param_1);
  }
  return 0;
}


