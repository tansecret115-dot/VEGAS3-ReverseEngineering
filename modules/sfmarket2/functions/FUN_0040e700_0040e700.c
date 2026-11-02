/* Module: sfmarket2.dll
   Function: FUN_0040e700
   Address: 0040e700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040e700(void *param_1)

{
  int iVar1;
  uint local_10 [2];
  uint local_8 [2];
  
  iVar1 = FUN_0042e9d0(*(void **)((int)param_1 + 0x1c),local_8,local_10);
  if (-1 < iVar1) {
    FUN_0040e340(param_1,local_8,local_10);
  }
  FUN_0040e750((int)param_1);
  EndDialog(*(HWND *)((int)param_1 + 4),1);
  return 0;
}


