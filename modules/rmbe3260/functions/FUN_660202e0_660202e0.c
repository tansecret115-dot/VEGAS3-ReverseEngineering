/* Module: rmbe3260.dll
   Function: FUN_660202e0
   Address: 660202e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660202e0(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_c;
  
  iVar4 = 0;
  local_c = 0x80004005;
  bVar2 = false;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x158));
  if (0 < *(int *)(param_1 + 0x160)) {
    piVar3 = *(int **)(param_1 + 0x15c);
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 == param_2) {
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        FUN_6605d000((void *)(param_1 + 0x15c),iVar4,1);
        bVar2 = true;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x160));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x158));
  if (bVar2) {
    local_c = 0;
  }
  return local_c;
}


