/* Module: vegas30.exe
   Function: FUN_004ca540
   Address: 004ca540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ca540(int param_1,int param_2)

{
  undefined4 uVar1;
  HWND pHVar2;
  
  if (param_2 != DAT_006477c8) {
    DAT_006477c8 = param_2;
    uVar1 = 3;
    if (param_2 == 0) {
      uVar1 = DAT_006477c4;
    }
    *(undefined4 *)(param_1 + 0x3a4) = uVar1;
    FUN_004ca4b0(param_1,uVar1,0);
    if (param_2 != 0) {
      pHVar2 = GetFocus();
      if ((pHVar2 == *(HWND *)(param_1 + 4)) && (*(int *)(param_1 + 0xb24) != 0)) {
        FUN_00459560(param_1,0);
      }
    }
  }
  return;
}


