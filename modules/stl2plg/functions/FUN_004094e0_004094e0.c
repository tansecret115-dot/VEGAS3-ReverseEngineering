/* Module: stl2plg.dll
   Function: FUN_004094e0
   Address: 004094e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004094e0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  HANDLE pvVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  if (param_1[4] == 0) {
    pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    param_1[4] = (int)pvVar2;
  }
  if ((LPCVOID)param_1[10] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[10]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[10]);
    GlobalFree(pvVar3);
  }
  param_1[5] = param_3;
  param_1[7] = param_5;
  param_1[6] = param_4;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (param_1[0xb] != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  if ((LPCVOID)param_1[0x10] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x10]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x10]);
    GlobalFree(pvVar3);
  }
  piVar4 = param_6;
  piVar7 = param_1 + 0xc;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  piVar4 = (int *)param_6[4];
  if (piVar4 != (int *)0x0) {
    if (piVar4[4] == 3) {
      iVar5 = 0xc;
    }
    else {
      iVar5 = piVar4[8] << 2;
    }
    pvVar3 = GlobalAlloc(0x42,*piVar4 + iVar5);
    piVar4 = GlobalLock(pvVar3);
    param_1[0x10] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      return 0x8007000e;
    }
    piVar7 = (int *)param_6[4];
    if (piVar7[4] == 3) {
      iVar5 = 0xc;
    }
    else {
      iVar5 = piVar7[8] << 2;
    }
    iVar1 = *piVar7;
    for (uVar6 = (uint)(iVar1 + iVar5) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar4 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar4 = piVar4 + 1;
    }
    for (uVar6 = iVar1 + iVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)piVar4 = (char)*piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar4 = (int *)((int)piVar4 + 1);
    }
  }
  param_1[0xb] = 1;
  return 0;
}


