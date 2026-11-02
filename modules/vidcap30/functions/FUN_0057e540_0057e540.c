/* Module: vidcap30.exe
   Function: FUN_0057e540
   Address: 0057e540
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057e540(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_00584758;
  local_c = ExceptionList;
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x78);
    ExceptionList = &local_c;
    EnterCriticalSection(lpCriticalSection);
    puVar2 = (undefined4 *)(param_1 + 4);
    local_4 = 0;
    if ((*(int *)(param_1 + 4) == 0) && (iVar1 = FUN_0057bd20(puVar2), iVar1 < 0)) {
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return iVar1;
    }
    *param_2 = *puVar2;
    (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2);
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = 0;
  }
  ExceptionList = local_c;
  return iVar1;
}


