/* Module: sftrans1.dll
   Function: FUN_0053b3e0
   Address: 0053b3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053b3e0(undefined4 *param_1,int *param_2)

{
  LPCSTR lpString;
  int iVar1;
  HGLOBAL pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    pvVar2 = GlobalAlloc(0x40,0xd0);
    piVar3 = GlobalLock(pvVar2);
    *param_1 = piVar3;
    if (piVar3 == (int *)0x0) {
      return 0x80004005;
    }
    if (*param_2 == 0) {
      *piVar3 = 0;
      pvVar2 = GlobalAlloc(0x40,0x34);
      puVar4 = GlobalLock(pvVar2);
      piVar3[1] = (int)puVar4;
      if (puVar4 == (undefined4 *)0x0) goto LAB_0053b4e5;
      *puVar4 = 0;
      *(undefined4 *)(piVar3[1] + 4) = 0;
    }
    else {
      piVar3[1] = 0;
      pvVar2 = GlobalAlloc(0x40,8);
      puVar4 = GlobalLock(pvVar2);
      *piVar3 = (int)puVar4;
      if (puVar4 == (undefined4 *)0x0) goto LAB_0053b4e5;
      *puVar4 = 0;
    }
  }
  else {
    FUN_0053b350(piVar3);
  }
  if (*param_2 == 0) {
    lpString = *(LPCSTR *)param_2[1];
    if (lpString == (LPCSTR)0x0) {
      sVar7 = wcslen((wchar_t *)((undefined4 *)param_2[1])[1]);
      pvVar2 = GlobalAlloc(0x40,sVar7 * 2 + 2);
      pvVar5 = GlobalLock(pvVar2);
      *(LPVOID *)(piVar3[1] + 4) = pvVar5;
      wcscpy(*(wchar_t **)(piVar3[1] + 4),*(wchar_t **)(param_2[1] + 4));
    }
    else {
      iVar6 = lstrlenA(lpString);
      pvVar2 = GlobalAlloc(0x40,iVar6 + 1);
      pvVar5 = GlobalLock(pvVar2);
      *(LPVOID *)piVar3[1] = pvVar5;
      if (*(uchar **)piVar3[1] == (uchar *)0x0) goto LAB_0053b4e5;
      _mbscpy(*(uchar **)piVar3[1],*(uchar **)param_2[1]);
    }
    iVar6 = piVar3[1];
    lstrcpynA((LPSTR)(iVar6 + 8),(LPCSTR)(param_2[1] + 8),0x20);
    *(undefined1 *)(iVar6 + 0x27) = 0;
    *(undefined4 *)(piVar3[1] + 0x28) = *(undefined4 *)(param_2[1] + 0x28);
    *(undefined4 *)(piVar3[1] + 0x2c) = *(undefined4 *)(param_2[1] + 0x2c);
    *(undefined4 *)(piVar3[1] + 0x30) = *(undefined4 *)(param_2[1] + 0x30);
  }
  else {
    pvVar2 = GlobalAlloc(0x40,*(SIZE_T *)(*param_2 + 4));
    pvVar5 = GlobalLock(pvVar2);
    *(LPVOID *)*piVar3 = pvVar5;
    if (*(undefined4 **)*piVar3 == (undefined4 *)0x0) {
LAB_0053b4e5:
      if (piVar3 != (int *)0x0) {
        FUN_0053b2f0(piVar3);
      }
      return 0x80004005;
    }
    uVar9 = ((undefined4 *)*param_2)[1];
    puVar4 = *(undefined4 **)*param_2;
    puVar11 = *(undefined4 **)*piVar3;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    *(undefined4 *)(*piVar3 + 4) = *(undefined4 *)(*param_2 + 4);
  }
  iVar6 = *piVar3;
  iVar1 = piVar3[1];
  piVar12 = piVar3;
  for (iVar10 = 0x34; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar12 = *param_2;
    param_2 = param_2 + 1;
    piVar12 = piVar12 + 1;
  }
  *piVar3 = iVar6;
  piVar3[1] = iVar1;
  return 0;
}


