/* Module: vegas30.exe
   Function: FUN_0057ace0
   Address: 0057ace0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057ace0(int param_1,int param_2)

{
  if (((DAT_0064b4f0 == 0) && (*(int *)(param_1 + 0x1ec) == 0)) &&
     (*(int *)(&DAT_00659e64 + param_2 * 4) != 0)) {
    return 1;
  }
  return 0;
}


