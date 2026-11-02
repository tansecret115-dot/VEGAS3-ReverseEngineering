/* Module: g2plug.dll
   Function: FUN_5f8145b0
   Address: 5f8145b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f8145b0(void *param_1)

{
  HWND pHVar1;
  int iVar2;
  
  if (((*(int *)((int)param_1 + 0x2c) == 0) || (*(int *)((int)param_1 + 0x34) == 0)) ||
     (pHVar1 = *(HWND *)((int)param_1 + 0x10), pHVar1 == (HWND)0x0)) {
    return 0;
  }
  iVar2 = *(int *)((int)param_1 + 0x18);
  if (iVar2 == 0x3ea) {
    FUN_5f813680(param_1,pHVar1);
    return 1;
  }
  if (iVar2 != 0x7533) {
    if (iVar2 != 0x7534) {
      FUN_5f811e60(param_1,pHVar1);
      return 1;
    }
    FUN_5f813be0(param_1,pHVar1);
    return 1;
  }
  FUN_5f813e70(param_1,pHVar1);
  return 1;
}


