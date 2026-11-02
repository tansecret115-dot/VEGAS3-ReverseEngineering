/* Module: vegas30.exe
   Function: FUN_00547160
   Address: 00547160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00547160(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0x80004005;
  }
  ResetEvent(*(HANDLE *)(param_1 + 0x10));
  iVar1 = FUN_005446f0(0xb,0,0,0,0,0,0);
  if (iVar1 != 0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
  }
  return 0;
}


