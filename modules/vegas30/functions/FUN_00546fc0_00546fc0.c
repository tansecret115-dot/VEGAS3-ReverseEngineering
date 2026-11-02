/* Module: vegas30.exe
   Function: FUN_00546fc0
   Address: 00546fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00546fc0(int *param_1)

{
  int iVar1;
  
  ResetEvent((HANDLE)param_1[4]);
  iVar1 = FUN_005446f0(10,0,0,0,0,0,0);
  if (iVar1 != 0) {
    WaitForSingleObject((HANDLE)param_1[4],0xffffffff);
    (**(code **)(*param_1 + 0x74))(1);
  }
  return 0;
}


