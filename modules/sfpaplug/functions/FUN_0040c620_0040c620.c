/* Module: sfpaplug.dll
   Function: FUN_0040c620
   Address: 0040c620
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040c620(int *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  int *local_4;
  
  *param_1 = (int)&PTR_LAB_0044eaf8;
  local_4 = param_1;
  FUN_0040c800(param_1);
  if (param_1[0x9a] != 0) {
    FUN_0040ceb0(param_1,&local_4);
    iVar3 = 0;
    if (0 < (int)local_4) {
      iVar4 = 0;
      do {
        piVar1 = *(int **)(param_1[0x9a] + 0x20 + iVar4);
        if (((piVar1 != (int *)0x0) && (*(int *)(param_1[0x9a] + iVar4) == 1)) &&
           (piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x48))(1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x28;
      } while (iVar3 < (int)local_4);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x9a]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x9a]);
    GlobalFree(pvVar2);
    if ((LPCVOID)param_1[0x88] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x88]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x88]);
      GlobalFree(pvVar2);
    }
  }
  if ((int *)param_1[0x9b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x9b] + 0x20))(1);
  }
  return;
}


