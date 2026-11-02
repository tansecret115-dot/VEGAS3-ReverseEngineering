/* Module: vfplugs.dll
   Function: FUN_0044b090
   Address: 0044b090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044b090(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  piVar2 = param_1;
  uVar1 = param_1[10];
  param_1 = (int *)0x0;
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar3 = GetCurrentThreadId(), DVar3 != piVar2[0xd])) {
    return 0x80004005;
  }
  iVar8 = param_3;
  if (param_2 < 0) {
    if (param_3 < 0) {
      if ((void *)piVar2[0x13] == (void *)0x0) {
        param_1 = (int *)0x80004005;
      }
      else {
        FUN_0044aa10((int)piVar2,(void *)piVar2[0x13]);
        piVar2[0x13] = 0;
        param_1 = (int *)0x0;
      }
      goto LAB_0044b21b;
    }
  }
  else if (param_3 < 0) {
    iVar8 = *piVar2 - param_2;
  }
  if (iVar8 < 1) {
    param_1 = (int *)0x0;
    goto LAB_0044b21b;
  }
  if (piVar2 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  if ((param_2 < 0) || (iVar4 + -1 < param_2)) {
    param_1 = (int *)0x80004005;
    goto LAB_0044b21b;
  }
  iVar4 = *piVar2;
  if (iVar8 < 0) {
    iVar7 = iVar4 - param_2;
LAB_0044b15f:
    iVar8 = iVar7;
  }
  else {
    iVar7 = iVar4 - param_2;
    if (iVar7 <= iVar8) goto LAB_0044b15f;
  }
  if (0 < iVar8) {
    if (((piVar2[10] & 2U) != 0) && (0 < iVar8)) {
      iVar9 = param_2 * 4;
      param_3 = iVar8;
      do {
        FUN_0044aa10((int)piVar2,*(void **)(piVar2[2] + iVar9));
        iVar9 = iVar9 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (param_2 + iVar8 < iVar4) {
      iVar9 = piVar2[1];
      memmove((void *)(iVar9 * param_2 + piVar2[2]),(void *)(iVar9 * (param_2 + iVar8) + piVar2[2]),
              (iVar7 - iVar8) * iVar9);
    }
    uVar5 = piVar2[1] * iVar8;
    puVar10 = (undefined4 *)((iVar4 - iVar8) * piVar2[1] + piVar2[2]);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *piVar2 = *piVar2 - iVar8;
  }
  if ((param_4 != 0) && (piVar2[0xf] < piVar2[0xe] - *piVar2)) {
    FUN_0044aef0(piVar2,piVar2[0xe] - *piVar2);
  }
LAB_0044b21b:
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 3));
  }
  return param_1;
}


