/* Module: vegas30k.dll
   Function: FUN_01198a50
   Address: 01198a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01198a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x674); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    if (((*(byte *)(iVar1 + 8) & 2) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x103) != 0)) {
      iVar2 = iVar2 + 1;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
  EnterCriticalSection(lpCriticalSection);
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  else if (iVar2 != *(int *)(param_1 + 0x4a0)) {
    if (*(int *)(param_1 + 0x4a0) == 0) {
      *(int *)(param_1 + 0x4a0) = iVar2;
      *(ulonglong *)(param_1 + 0x498) = CONCAT44(param_3,param_2);
      *(ulonglong *)(param_1 + 0x490) = CONCAT44(param_3,param_2);
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    *(undefined4 *)(param_1 + 0x498) = param_2;
    *(undefined4 *)(param_1 + 0x49c) = param_3;
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  *(ulonglong *)(param_1 + 0x498) = CONCAT44(param_3,param_2);
  *(ulonglong *)(param_1 + 0x490) = CONCAT44(param_3,param_2);
  LeaveCriticalSection(lpCriticalSection);
  return;
}


