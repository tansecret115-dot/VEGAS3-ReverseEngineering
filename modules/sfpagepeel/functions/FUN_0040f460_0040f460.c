/* Module: sfpagepeel.dll
   Function: FUN_0040f460
   Address: 0040f460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040f460(int param_1,undefined4 param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  BVar2 = IsBadWritePtr(param_3,4);
  if (BVar2 != 0) {
    return 0x80004003;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,param_2,param_3);
    LeaveCriticalSection(lpCriticalSection);
    return uVar3;
  }
  *param_3 = 0;
  LeaveCriticalSection(lpCriticalSection);
  return 0x80004005;
}


