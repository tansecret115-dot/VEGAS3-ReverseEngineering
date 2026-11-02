/* Module: vidcap30.exe
   Function: FUN_0045c9a0
   Address: 0045c9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0045c9a0(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    FUN_0045bd00(*(undefined4 *)(param_1 + 0x1c),0);
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x1c),0,0,1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = FUN_0045c070(param_2);
    if (iVar1 != 0) {
      LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
    param_2 = FUN_0045c0e0(*(undefined4 *)(param_1 + 0x1c),param_2,1,0);
    if (-1 < param_2) {
      *(undefined4 *)(param_1 + 0x24) = 1;
      FUN_0045c240();
      LeaveCriticalSection(lpCriticalSection);
      return param_2;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}


