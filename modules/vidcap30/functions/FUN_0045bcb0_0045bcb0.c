/* Module: vidcap30.exe
   Function: FUN_0045bcb0
   Address: 0045bcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0045bcb0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar2 = *param_2;
  if (0 < iVar2) {
    do {
      FUN_0045bd00(param_2,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar1 = _SfList_DeleteList_16(param_2,0,0,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return uVar1;
}


