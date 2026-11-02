/* Module: vegas30.exe
   Function: FUN_0057acb0
   Address: 0057acb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0057acb0(int param_1,int param_2)

{
  KillTimer(DAT_00647624,param_2 + 0xaabb);
  *(undefined4 *)(param_1 + (param_2 * 5 + 10) * 4) = 0;
  return;
}


