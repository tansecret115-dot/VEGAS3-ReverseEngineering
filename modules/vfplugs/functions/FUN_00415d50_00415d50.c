/* Module: vfplugs.dll
   Function: FUN_00415d50
   Address: 00415d50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00415fdd) */

int FUN_00415d50(undefined4 param_1,ushort param_2,undefined4 param_3,undefined4 param_4,int param_5
                ,int param_6,int *param_7)

{
  WCHAR WVar1;
  WCHAR *pWVar2;
  ushort uVar3;
  HRESULT HVar4;
  int iVar5;
  HMODULE pHVar6;
  DWORD DVar7;
  WCHAR *pWVar8;
  WCHAR *pWVar9;
  LPCSTR pCVar10;
  int *piVar11;
  LPWSTR lpString;
  CHAR local_210 [260];
  CHAR local_10c [260];
  int *local_8;
  
  piVar11 = param_7;
  uVar3 = param_2;
  if (param_7 == (int *)0x0) {
    _param_2 = 0;
LAB_00415d8e:
    local_8 = (int *)0x0;
    HVar4 = CoCreateInstance((IID *)&DAT_00490b78,(LPUNKNOWN)0x0,3,(IID *)&DAT_00490b88,&local_8);
    if (-1 < HVar4) {
      if (piVar11 == (int *)0x0) {
        (**(code **)(*local_8 + 0x18))(local_8,param_1,param_3,param_4);
        if ((param_5 != 0) && (param_6 != 0)) {
          (**(code **)(*local_8 + 0x20))(local_8,param_1,param_5,param_6);
          piVar11 = param_7;
        }
      }
      else {
        iVar5 = (**(code **)(*local_8 + 0x14))();
        if (((-1 < iVar5) && (param_5 != 0)) && (param_6 != 0)) {
          (**(code **)(*local_8 + 0x1c))(local_8,param_1,param_5,param_6);
          piVar11 = param_7;
        }
      }
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  else {
    _param_2 = FUN_00402e60(0x494528,(uint)param_2,(int)param_7,(int *)0x0,(int *)0x0);
    if (-1 < _param_2) goto LAB_00415d8e;
  }
  if (piVar11 != (int *)0x0) {
    return _param_2;
  }
  if (_param_2 < 0) {
    return _param_2;
  }
  param_7 = piVar11;
  HVar4 = CoCreateInstance((IID *)&DAT_00486b80,(LPUNKNOWN)0x0,1,(IID *)&DAT_00486b70,&param_7);
  if (HVar4 < 0) goto LAB_00415fed;
  GetModuleFileNameA(DAT_0049452c,local_10c,0x104);
  if ((DAT_0049452c == (HMODULE)0x0) ||
     (pHVar6 = GetModuleHandleA((LPCSTR)0x0), DAT_0049452c == pHVar6)) {
    DVar7 = GetShortPathNameA(local_10c,local_210,0x104);
    if (DVar7 == 0x104) {
      if (param_7 == (int *)0x0) {
        return _param_2;
      }
      (**(code **)(*param_7 + 8))(param_7);
      return _param_2;
    }
    if ((DVar7 == 0) || (DVar7 == 0x57)) {
      if (&stack0x00000000 != (undefined1 *)0x10c) goto LAB_00415f35;
      lpString = (LPCWSTR)0x0;
    }
    else {
      if (&stack0x00000000 != (undefined1 *)0x210) {
        iVar5 = lstrlenA(local_210);
        FUN_00481790();
        pCVar10 = local_210;
        goto LAB_00415f5d;
      }
      lpString = (LPCWSTR)0x0;
    }
  }
  else if (&stack0x00000000 == (undefined1 *)0x10c) {
    lpString = (LPCWSTR)0x0;
  }
  else {
LAB_00415f35:
    iVar5 = lstrlenA(local_10c);
    FUN_00481790();
    pCVar10 = local_10c;
LAB_00415f5d:
    lpString = FUN_00401280((LPWSTR)&stack0xfffffde4,pCVar10,iVar5 + 1,0);
  }
  lstrlenW(lpString);
  FUN_00481790();
  WVar1 = *lpString;
  pWVar9 = lpString;
  pWVar2 = (WCHAR *)&stack0xfffffde4;
  while (WVar1 != L'\0') {
    *pWVar2 = *pWVar9;
    pWVar8 = pWVar2 + 1;
    if (*pWVar9 == L'\'') {
      *pWVar8 = L'\'';
      pWVar8 = pWVar2 + 2;
    }
    pWVar9 = pWVar9 + 1;
    pWVar2 = pWVar8;
    WVar1 = *pWVar9;
  }
  *pWVar2 = L'\0';
  (**(code **)(*param_7 + 0xc))(param_7,L"Module",&stack0xfffffde4);
  (**(code **)(*param_7 + 0x30))(param_7,lpString,uVar3,L"REGISTRY");
LAB_00415fed:
  if (param_7 != (int *)0x0) {
    (**(code **)(*param_7 + 8))(param_7);
  }
  return _param_2;
}


