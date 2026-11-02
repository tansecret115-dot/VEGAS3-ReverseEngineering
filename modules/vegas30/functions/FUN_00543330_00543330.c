/* Module: vegas30.exe
   Function: FUN_00543330
   Address: 00543330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00543330(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00543290();
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_006575d0 + 3));
  iVar1 = 0;
  if (0 < *DAT_006575d0) {
    piVar2 = (int *)DAT_006575d0[2];
    do {
      if (*piVar2 == param_1) {
        _SfList_DeleteList_16(DAT_006575d0,iVar1,1,0);
        break;
      }
      iVar1 = iVar1 + 1;
      piVar2 = (int *)((int)piVar2 + DAT_006575d0[1]);
    } while (iVar1 < *DAT_006575d0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_006575d0 + 3));
  FUN_005432d0();
  return 0;
}


