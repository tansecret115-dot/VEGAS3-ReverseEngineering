/* Module: gifplug.dll
   Function: FUN_5f6f7320
   Address: 5f6f7320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6f7320(int *param_1,int param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  
  piVar4 = param_1;
  param_1 = (int *)0x0;
  uVar1 = piVar4[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar5 = GetCurrentThreadId(), DVar5 != piVar4[0xd])) {
    return -0x7fffbffb;
  }
  if (param_3 == (int *)0x0) {
    if ((param_4 != -1) || (piVar4[0x13] == 0)) {
      param_1 = (int *)0x80004005;
      goto LAB_5f6f744b;
    }
LAB_5f6f738f:
    param_4 = -param_4;
  }
  else {
    if (param_4 < 0) goto LAB_5f6f738f;
    if ((piVar4[10] & 2U) != 0) {
      param_1 = (int *)0x80004005;
      goto LAB_5f6f744b;
    }
  }
  iVar2 = *piVar4;
  if ((param_2 < 0) || (iVar2 <= param_2)) {
    param_2 = iVar2;
  }
  if ((iVar2 + param_4 <= piVar4[0xe]) ||
     (param_1 = (int *)FUN_5f6f7250((int)piVar4,param_4), param_1 == (int *)0x0)) {
    if (0 < iVar2 - param_2) {
      iVar3 = piVar4[1];
      memmove((void *)((param_4 + param_2) * iVar3 + piVar4[2]),
              (void *)(iVar3 * param_2 + piVar4[2]),iVar3 * (iVar2 - param_2));
    }
    if (param_3 == (int *)0x0) {
      param_3 = piVar4 + 0x13;
    }
    uVar6 = piVar4[1] * param_4;
    piVar8 = (int *)(piVar4[1] * param_2 + piVar4[2]);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *piVar8 = *param_3;
      param_3 = param_3 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)piVar8 = (char)*param_3;
      param_3 = (int *)((int)param_3 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
    piVar4[0x13] = 0;
    *piVar4 = *piVar4 + param_4;
  }
LAB_5f6f744b:
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 3));
  }
  return (int)param_1;
}


