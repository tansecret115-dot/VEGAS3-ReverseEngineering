/* Module: g2plug.dll
   Function: FUN_5f80dba0
   Address: 5f80dba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f80dba0(HWND param_1,int param_2)

{
  if ((7 < *(int *)(param_2 + 0x3e3)) || (*(int *)(param_2 + 0x3e3) < 0)) {
    *(undefined4 *)(param_2 + 0x3e3) = 0;
  }
  CheckRadioButton(param_1,0x84c,0x853,*(int *)(&DAT_5f876350 + *(int *)(param_2 + 0x3e3) * 4));
  FUN_5f80da00(param_1,param_2,*(int *)(&DAT_5f876350 + *(int *)(param_2 + 0x3e3) * 4));
  return;
}


