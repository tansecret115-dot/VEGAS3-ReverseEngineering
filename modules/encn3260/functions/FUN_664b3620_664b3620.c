/* Module: encn3260.dll
   Function: FUN_664b3620
   Address: 664b3620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664b3620(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar2 = 0x80004005;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xac);
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0xb0);
  *(int *)(param_1 + 0x38) = iVar1;
  if (((*(int *)(param_1 + 0x1198) == 0) || (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x34)))
     || (*(int *)(param_1 + 0x40) < iVar1)) {
    iVar1 = FUN_664b3900(param_1);
    if (iVar1 != 0) goto LAB_664b367e;
    iVar1 = FUN_664b3770(param_1);
    if (iVar1 != 0) goto LAB_664b367e;
  }
  uVar2 = 0;
LAB_664b367e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar2;
}


