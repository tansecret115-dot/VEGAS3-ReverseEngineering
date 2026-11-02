/* Module: vegas30.exe
   Function: FUN_00459560
   Address: 00459560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00459560(int param_1,int param_2)

{
  HWND pHVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xb24) != param_2) {
    pHVar1 = GetFocus();
    bVar2 = pHVar1 == *(HWND *)(param_1 + 4);
    if (bVar2) {
      FUN_00452e00(param_1);
      DestroyCaret();
    }
    *(int *)(param_1 + 0xb24) = param_2;
    if (bVar2) {
      FUN_00452e30(param_1);
      FUN_00452ea0(param_1);
      if ((*(int *)(param_1 + 0xb24) == 1) && (DAT_006477c8 != 0)) {
        FUN_004ca5a0(param_1);
      }
    }
  }
  SetFocus(*(HWND *)(param_1 + 4));
  return;
}


