/* Module: wmfplug2.dll
   Function: FUN_00414110
   Address: 00414110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00414110(void *param_1)

{
  HWND pHVar1;
  int iVar2;
  
  if (((*(int *)((int)param_1 + 0x2c) == 0) || (*(int *)((int)param_1 + 0x34) == 0)) ||
     (pHVar1 = *(HWND *)((int)param_1 + 0x10), pHVar1 == (HWND)0x0)) {
    return 0;
  }
  iVar2 = *(int *)((int)param_1 + 0x18);
  if (iVar2 == 0x318) {
    FUN_00412b10(param_1,pHVar1);
    return 1;
  }
  if (iVar2 != 0x319) {
    if (iVar2 != 0x31a) {
      FUN_00411dc0(param_1,pHVar1);
      return 1;
    }
    FUN_00412390(param_1,pHVar1);
    return 1;
  }
  FUN_00413830(param_1,pHVar1);
  return 1;
}


