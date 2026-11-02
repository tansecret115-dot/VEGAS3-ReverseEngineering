/* Module: vegas30.exe
   Function: FUN_0040fed0
   Address: 0040fed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040fed0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0064762c;
  if (DAT_00647630 != 0) {
    FUN_004c53c0(DAT_00647630,param_1);
  }
  FUN_00573400(param_1);
  if (*(int *)(iVar1 + 0x70) != 0) {
    FUN_004defe0(*(int *)(iVar1 + 0x70),param_1);
  }
  if (*(int *)(iVar1 + 0x34) != 0) {
    SendMessageA(*(HWND *)(*(int *)(iVar1 + 0x34) + 8),0x15,0,0);
  }
  if (*(int *)(iVar1 + 0x80) != 0) {
    FUN_004280f0(*(int *)(iVar1 + 0x80),param_1);
  }
  if (*(int *)(iVar1 + 0x78) != 0) {
    FUN_004926b0(*(int *)(iVar1 + 0x78),param_1);
  }
  return;
}


