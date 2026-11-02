/* Module: vegas30.exe
   Function: FUN_00547000
   Address: 00547000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00547000(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0x80004005;
  }
  if (*(int *)(param_1 + 0x14) == 0xb) {
    return 1;
  }
  ResetEvent(*(HANDLE *)(param_1 + 0x10));
  iVar1 = FUN_005446f0(5,0,0,0,0,0,0);
  if (iVar1 != 0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
  }
  return 0;
}


