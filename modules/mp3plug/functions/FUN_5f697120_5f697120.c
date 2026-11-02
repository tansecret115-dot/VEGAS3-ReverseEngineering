/* Module: mp3plug.dll
   Function: FUN_5f697120
   Address: 5f697120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f697120(void *param_1)

{
  HWND pHVar1;
  
  if (((*(int *)((int)param_1 + 0x2c) != 0) && (*(int *)((int)param_1 + 0x34) != 0)) &&
     (pHVar1 = *(HWND *)((int)param_1 + 0x10), pHVar1 != (HWND)0x0)) {
    if (*(int *)((int)param_1 + 0x18) != 0x3f5) {
      FUN_5f695a60(param_1,pHVar1);
      return 1;
    }
    FUN_5f696650(param_1,pHVar1);
    return 1;
  }
  return 0;
}


