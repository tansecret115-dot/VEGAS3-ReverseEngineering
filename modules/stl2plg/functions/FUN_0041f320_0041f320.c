/* Module: stl2plg.dll
   Function: FUN_0041f320
   Address: 0041f320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f320(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPCRITICAL_SECTION unaff_EBX;
  int iVar4;
  int iVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  iVar5 = param_1[9] + -1;
  param_1[9] = iVar5;
  if (iVar5 <= param_1[6]) {
    iVar5 = param_1[6];
  }
  param_1[7] = iVar5;
  if (iVar5 < param_1[8]) {
    piVar1 = (int *)param_1[4];
    iVar4 = -1;
    iVar5 = *piVar1;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        if (*(int *)(piVar1[2] + 0x14 + piVar1[1] * iVar5) < 0x7fffffff) {
          iVar4 = iVar5;
        }
      } while (0 < iVar5);
      if (-1 < iVar4) {
        iVar5 = piVar1[1];
        iVar2 = piVar1[2];
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar5 * iVar4 + 0x10 + iVar2));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar5 * iVar4 + iVar2 + 0x10));
        GlobalFree(pvVar3);
        FUN_004164c0((int *)param_1[4],iVar4,1,0);
        param_1[8] = param_1[8] + -1;
      }
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  LeaveCriticalSection(unaff_EBX);
  return;
}


