/* Module: sfcdi.dll
   Function: FUN_5bf173c0
   Address: 5bf173c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf173c0(HWND param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 0x28);
    SfTAO_CheckDiscStatus
              (*(void **)(param_2 + 0x20),(char *)(param_2 + 0x30),(ulong *)(param_2 + 0xbc),
               (int *)(param_2 + 0x24),piVar1);
    if (*(int *)(param_2 + 0xc0) == 0) {
      *piVar1 = 0;
    }
    if (*piVar1 != 0) {
      *(undefined4 *)(param_2 + 0x2c) = 0;
      FUN_5bf17290(param_1,param_2,0x476);
      return;
    }
    *(undefined4 *)(param_2 + 0x2c) = 1;
    FUN_5bf17290(param_1,param_2,0x476);
  }
  return;
}


