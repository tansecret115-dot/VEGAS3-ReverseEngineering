/* Module: vidcap30.exe
   Function: FUN_0046bd20
   Address: 0046bd20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0046bd20(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *unaff_EDI;
  int *piVar2;
  int local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  local_4 = param_1;
  EnterCriticalSection(lpCriticalSection);
  piVar2 = &local_4;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x50))(*(int **)(param_1 + 0x90),piVar2,L".avi")
  ;
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,*(undefined4 *)(param_1 + 0x90));
    if (-1 < iVar1) {
      *unaff_EDI = (int)piVar2;
      LeaveCriticalSection(lpCriticalSection);
      return iVar1;
    }
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}


