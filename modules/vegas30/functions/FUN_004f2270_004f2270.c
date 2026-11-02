/* Module: vegas30.exe
   Function: FUN_004f2270
   Address: 004f2270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f2270(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x3500) != *(int *)(param_2 + 0x3500) ||
      *(int *)(param_1 + 0x2e98) != *(int *)(param_2 + 0x2e98)) {
    _SfMessageBox_16(DAT_00647624,
                     "For one or more of these changes to take effect, the app must be shut down and restarted"
                     ,"Preference change",0);
  }
  return;
}


