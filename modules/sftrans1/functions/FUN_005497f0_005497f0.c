/* Module: sftrans1.dll
   Function: FUN_005497f0
   Address: 005497f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005497f0(int param_1,HDC param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  int local_30;
  int local_2c;
  int local_28;
  COLORREF local_24;
  COLORREF local_20;
  RECT local_18;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  iVar3 = *piVar2;
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
    pdVar9 = *(double **)piVar2[2];
    local_28 = 1;
    pdVar7 = pdVar9;
    if (0 < iVar3) {
      do {
        if (*(double *)(param_1 + 0xb0) + *(double *)(param_1 + 0xa8) < *pdVar7) {
          return;
        }
        pdVar9 = *(double **)
                  (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8)
                  + local_28 * 4);
        if (*(double *)(param_1 + 0xa8) <= *pdVar9 + pdVar9[10]) {
          cVar1 = *(char *)(pdVar7 + 2);
          if (cVar1 == '\0') {
            local_24 = *(COLORREF *)(param_1 + 0x178);
          }
          else {
            local_24 = *(COLORREF *)(param_1 + 0x17c);
          }
          iVar4 = *(int *)(param_1 + 0x158);
          iVar5 = ftol();
          iVar10 = iVar5 + -2;
          iVar6 = ftol();
          local_2c = 5;
          local_30 = 5;
          iVar8 = iVar6 + -2;
          if (cVar1 != '\0') {
            iVar10 = iVar5 + -3;
            iVar8 = iVar6 + -3;
            local_2c = 7;
            local_30 = 7;
          }
          if (iVar4 == local_28 + -1) {
            SetBkColor(param_2,*(COLORREF *)(param_1 + 0x188));
            local_18.left = iVar10 + -1;
            local_18.right = iVar10 + 1 + local_2c;
            local_18.top = iVar8 + -1;
            local_18.bottom = iVar8 + 1 + local_30;
            ExtTextOutA(param_2,0,0,2,&local_18,(LPCSTR)0x0,0,(INT *)0x0);
          }
          SetBkColor(param_2,local_24);
          FUN_0048cd60(param_2,iVar10,iVar8,local_2c,local_30);
          if (cVar1 != '\0') {
            SetBkColor(param_2,0xffffff);
            FUN_0048cd60(param_2,iVar10 + 2,iVar8 + 2,local_2c + -4,local_30 + -4);
          }
        }
        local_28 = local_28 + 1;
        pdVar7 = pdVar9;
      } while (local_28 <= iVar3);
    }
    cVar1 = *(char *)(pdVar9 + 2);
    if (cVar1 == '\0') {
      local_20 = *(COLORREF *)(param_1 + 0x178);
    }
    else {
      local_20 = *(COLORREF *)(param_1 + 0x17c);
    }
    iVar3 = *(int *)(param_1 + 0x158);
    iVar4 = **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
    iVar5 = ftol();
    iVar10 = iVar5 + -2;
    iVar6 = ftol();
    local_2c = 5;
    local_30 = 5;
    iVar8 = iVar6 + -2;
    if (cVar1 != '\0') {
      iVar10 = iVar5 + -3;
      iVar8 = iVar6 + -3;
      local_2c = 7;
      local_30 = 7;
    }
    if (iVar3 == iVar4 + -1) {
      SetBkColor(param_2,*(COLORREF *)(param_1 + 0x188));
      local_18.left = iVar10 + -1;
      local_18.right = iVar10 + 1 + local_2c;
      local_18.top = iVar8 + -1;
      local_18.bottom = iVar8 + 1 + local_30;
      ExtTextOutA(param_2,0,0,2,&local_18,(LPCSTR)0x0,0,(INT *)0x0);
    }
    SetBkColor(param_2,local_20);
    local_18.right = local_2c + iVar10;
    local_18.bottom = local_30 + iVar8;
    local_18.left = iVar10;
    local_18.top = iVar8;
    ExtTextOutA(param_2,0,0,2,&local_18,(LPCSTR)0x0,0,(INT *)0x0);
    if (cVar1 != '\0') {
      SetBkColor(param_2,0xffffff);
      local_18.left = iVar10 + 2;
      local_18.right = iVar10 + -2 + local_2c;
      local_18.top = iVar8 + 2;
      local_18.bottom = iVar8 + -2 + local_30;
      ExtTextOutA(param_2,0,0,2,&local_18,(LPCSTR)0x0,0,(INT *)0x0);
    }
  }
  return;
}


