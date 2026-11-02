/* Module: vidcap30.exe
   Function: FUN_00583d70
   Address: 00583d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00583d70(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 unaff_retaddr;
  undefined1 local_54 [68];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584c10;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x58);
  ExceptionList = &pvStack_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  FUN_0057ad30();
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*(int *)(param_1 + -0x48) + 0x1c))(local_54);
  iVar1 = FUN_0057adf0(unaff_retaddr);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (iVar1 != 0) {
    FUN_0057ad20();
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = pvStack_10;
    return 0;
  }
  FUN_0057ad20();
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_10;
  return 0x80004005;
}


