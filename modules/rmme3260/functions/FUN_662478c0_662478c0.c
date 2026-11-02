/* Module: rmme3260.dll
   Function: FUN_662478c0
   Address: 662478c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662478c0(void *this,int *param_1,int *param_2,int param_3,int param_4)

{
  HDC pHVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  COLORREF CVar5;
  uint uVar6;
  DWORD *pDVar7;
  DWORD local_458 [3];
  uint local_44a;
  double local_30;
  HDC local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  tagRECT local_14;
  
  if (*(int *)((int)this + 0x4a2) != 1) {
    return 0x80004005;
  }
  iVar2 = FUN_662406e0(*(int *)((int)this + 0x3a));
  pHVar1 = (HDC)(iVar2 + 0x48);
  piVar3 = (int *)(*(int *)((int)this + 0x3a) + 8);
  local_28 = pHVar1;
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x1c))(piVar3);
  if ((puVar4 != (undefined4 *)0x0) && ((HWND)*puVar4 != (HWND)0x0)) {
    if ((param_3 == 0) && (param_4 == 0)) {
      GetWindowRect((HWND)*puVar4,&local_14);
      local_14.bottom = param_1[3] + local_14.top;
      local_14.right = param_1[2] + local_14.left;
      local_14.left = local_14.left + *param_1;
      local_14.top = local_14.top + param_1[1];
    }
    else {
      local_14.bottom = param_1[3] + param_4;
      local_14.right = param_1[2] + param_3;
      local_14.left = param_3 + *param_1;
      local_14.top = param_1[1] + param_4;
    }
    if ((param_2[3] == 0) && (param_2[2] == 0)) {
      local_18 = *(int *)((int)this + 0x49e);
      local_24 = 0;
      local_20 = 0;
      local_1c = *(int *)((int)this + 0x49a);
    }
    else {
      local_24 = *param_2;
      local_20 = param_2[1];
      local_1c = param_2[2];
      local_18 = param_2[3];
    }
    if (local_14.left < 0) {
      local_14.left = 0;
      local_24 = ftol();
    }
    iVar2 = GetSystemMetrics(0);
    if (iVar2 < local_14.right) {
      iVar2 = GetSystemMetrics(0);
      local_30 = (double)(local_14.right - iVar2) / (double)(local_14.right - local_14.left);
      local_14.right = GetSystemMetrics(0);
      local_1c = ftol();
    }
    if (local_14.top < 0) {
      local_14.top = 0;
      local_20 = ftol();
    }
    iVar2 = GetSystemMetrics(1);
    if (iVar2 < local_14.bottom) {
      iVar2 = GetSystemMetrics(1);
      local_30 = (double)(local_14.bottom - iVar2) / (double)(local_14.bottom - local_14.top);
      local_14.bottom = GetSystemMetrics(1);
      local_18 = ftol();
    }
    pDVar7 = local_458;
    for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pDVar7 = 0;
      pDVar7 = pDVar7 + 1;
    }
    FUN_6624ae60((uint *)pHVar1,local_458);
    if ((local_44a & 0xffff) != *(uint *)((int)this + 0x46)) {
      *(uint *)((int)this + 0x46) = local_44a & 0xffff;
      CVar5 = FUN_66247800((int)this);
      uVar6 = FUN_6624c0e0(pHVar1,CVar5);
      *(uint *)((int)this + 0x4a) = uVar6;
    }
    FUN_6624b100((byte *)pHVar1,*(undefined4 *)((int)this + 0x4a),*(undefined4 *)((int)this + 0x4a))
    ;
    if ((-1 < local_14.right - local_14.left) && (-1 < local_14.bottom - local_14.top)) {
      if ((((((*(int *)((int)this + 0x4ca) == local_14.left) &&
             (*(int *)((int)this + 0x4d2) == local_14.right)) &&
            (*(int *)((int)this + 0x4ce) == local_14.top)) &&
           ((*(int *)((int)this + 0x4d6) == local_14.bottom &&
            (*(int *)((int)this + 0x4da) == local_24)))) &&
          ((*(int *)((int)this + 0x4e2) == local_1c &&
           ((*(int *)((int)this + 0x4de) == local_20 && (*(int *)((int)this + 0x4e6) == local_18))))
          )) && ((*(int *)((int)this + 0x4ee) < 9 && (*(int *)((int)this + 0x4b2) == 0)))) {
        *(int *)((int)this + 0x4ee) = *(int *)((int)this + 0x4ee) + 1;
      }
      else {
        *(LONG *)((int)this + 0x4ca) = local_14.left;
        *(LONG *)((int)this + 0x4ce) = local_14.top;
        *(LONG *)((int)this + 0x4d2) = local_14.right;
        *(LONG *)((int)this + 0x4d6) = local_14.bottom;
        *(undefined4 *)((int)this + 0x4ee) = 0;
        *(int *)((int)this + 0x4da) = local_24;
        *(int *)((int)this + 0x4de) = local_20;
        *(int *)((int)this + 0x4e2) = local_1c;
        *(int *)((int)this + 0x4e6) = local_18;
        FUN_6624b150((int)local_28,(uint *)((int)this + 0x56),&local_14,&local_24,0x4400);
      }
      *(int *)((int)this + 0x4ba) = local_24;
      *(int *)((int)this + 0x4be) = local_20;
      *(int *)((int)this + 0x4c2) = local_1c;
      *(int *)((int)this + 0x4c6) = local_18;
      iVar2 = FUN_6624b1e0((uint *)((int)this + 0x56));
      if (iVar2 == 0) {
        iVar2 = *(int *)((int)this + 0x4ea) + 1;
      }
      else {
        iVar2 = *(int *)((int)this + 0x4ea) + -1;
      }
      *(int *)((int)this + 0x4ea) = iVar2;
      if (3 < iVar2) {
        *(undefined4 *)((int)this + 0x4a2) = 0;
        *(undefined4 *)((int)this + 0x49a) = 0;
        *(undefined4 *)((int)this + 0x49e) = 0;
        FUN_6624b560((uint *)local_28,(uint *)((int)this + 0x56));
      }
      return 0;
    }
    local_18 = *(LONG *)((int)this + 0x49e);
    local_14.left = 0;
    local_24 = 0;
    local_14.top = 0;
    local_1c = *(LONG *)((int)this + 0x49a);
    local_20 = 0;
    local_14.right = local_1c;
    local_14.bottom = local_18;
    FUN_6624b150((int)pHVar1,(uint *)((int)this + 0x56),&local_14,&local_24,0x600);
    return 0;
  }
  return 0x80004005;
}


