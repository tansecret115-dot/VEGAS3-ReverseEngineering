/* Module: sftrans1.dll
   Function: FUN_0045db30
   Address: 0045db30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0045ddbd) */

int FUN_0045db30(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int param_6,int *param_7)

{
  WCHAR WVar1;
  WCHAR *pWVar2;
  undefined2 uVar3;
  HRESULT HVar4;
  int iVar5;
  HMODULE pHVar6;
  DWORD DVar7;
  WCHAR *pWVar8;
  WCHAR *pWVar9;
  CHAR *pCVar10;
  int *piVar11;
  LPCWSTR lpString;
  CHAR local_210 [260];
  CHAR local_10c [260];
  int *local_8;
  
  piVar11 = param_7;
  uVar3 = param_2;
  if (param_7 == (int *)0x0) {
    _param_2 = 0;
LAB_0045db6e:
    local_8 = (int *)0x0;
    HVar4 = CoCreateInstance((IID *)&DAT_0056f688,(LPUNKNOWN)0x0,3,(IID *)&DAT_0056f698,&local_8);
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
    _param_2 = FUN_00406630(&DAT_00577250,param_2,param_7,0,0);
    if (-1 < _param_2) goto LAB_0045db6e;
  }
  if (piVar11 != (int *)0x0) {
    return _param_2;
  }
  if (_param_2 < 0) {
    return _param_2;
  }
  param_7 = piVar11;
  HVar4 = CoCreateInstance((IID *)&DAT_005551c8,(LPUNKNOWN)0x0,1,(IID *)&DAT_005551b8,&param_7);
  if (HVar4 < 0) goto LAB_0045ddcd;
  GetModuleFileNameA(DAT_00577254,local_10c,0x104);
  if ((DAT_00577254 == (HMODULE)0x0) ||
     (pHVar6 = GetModuleHandleA((LPCSTR)0x0), DAT_00577254 == pHVar6)) {
    DVar7 = GetShortPathNameA(local_10c,local_210,0x104);
    if (DVar7 == 0x104) {
      if (param_7 == (int *)0x0) {
        return _param_2;
      }
      (**(code **)(*param_7 + 8))(param_7);
      return _param_2;
    }
    if ((DVar7 == 0) || (DVar7 == 0x57)) {
      if (&stack0x00000000 != (undefined1 *)0x10c) goto LAB_0045dd15;
      lpString = (LPCWSTR)0x0;
    }
    else {
      if (&stack0x00000000 != (undefined1 *)0x210) {
        iVar5 = lstrlenA(local_210);
        FUN_00551640();
        pCVar10 = local_210;
        goto LAB_0045dd3d;
      }
      lpString = (LPCWSTR)0x0;
    }
  }
  else if (&stack0x00000000 == (undefined1 *)0x10c) {
    lpString = (LPCWSTR)0x0;
  }
  else {
LAB_0045dd15:
    iVar5 = lstrlenA(local_10c);
    FUN_00551640();
    pCVar10 = local_10c;
LAB_0045dd3d:
    lpString = (LPCWSTR)FUN_00401230(&stack0xfffffde4,pCVar10,iVar5 + 1,0);
  }
  lstrlenW(lpString);
  FUN_00551640();
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
LAB_0045ddcd:
  if (param_7 != (int *)0x0) {
    (**(code **)(*param_7 + 8))(param_7);
  }
  return _param_2;
}


