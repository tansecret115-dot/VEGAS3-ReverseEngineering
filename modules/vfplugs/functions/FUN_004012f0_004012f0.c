/* Module: vfplugs.dll
   Function: FUN_004012f0
   Address: 004012f0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_004012f0(int param_1)

{
  WCHAR WVar1;
  WCHAR *pWVar2;
  HRESULT HVar3;
  HMODULE pHVar4;
  DWORD DVar5;
  int iVar6;
  WCHAR *pWVar7;
  WCHAR *pWVar8;
  LPCSTR pCVar9;
  LPWSTR lpString;
  CHAR local_210 [260];
  CHAR local_10c [260];
  int *local_8;
  
  local_8 = (int *)0x0;
  HVar3 = CoCreateInstance((IID *)&DAT_00486b80,(LPUNKNOWN)0x0,1,(IID *)&DAT_00486b70,&local_8);
  if (HVar3 < 0) goto LAB_004014ad;
  GetModuleFileNameA(DAT_0049452c,local_10c,0x104);
  if ((DAT_0049452c == (HMODULE)0x0) ||
     (pHVar4 = GetModuleHandleA((LPCSTR)0x0), DAT_0049452c == pHVar4)) {
    DVar5 = GetShortPathNameA(local_10c,local_210,0x104);
    if (DVar5 == 0x104) {
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
      }
      return -0x7ff8fff2;
    }
    if ((DVar5 == 0) || (DVar5 == 0x57)) {
      if (&stack0x00000000 != (undefined1 *)0x10c) goto LAB_004013fa;
      lpString = (LPCWSTR)0x0;
    }
    else {
      if (&stack0x00000000 != (undefined1 *)0x210) {
        iVar6 = lstrlenA(local_210);
        FUN_00481790();
        pCVar9 = local_210;
        goto LAB_00401422;
      }
      lpString = (LPCWSTR)0x0;
    }
  }
  else if (&stack0x00000000 == (undefined1 *)0x10c) {
    lpString = (LPCWSTR)0x0;
  }
  else {
LAB_004013fa:
    iVar6 = lstrlenA(local_10c);
    FUN_00481790();
    pCVar9 = local_10c;
LAB_00401422:
    lpString = FUN_00401280((LPWSTR)&stack0xfffffde8,pCVar9,iVar6 + 1,0);
  }
  lstrlenW(lpString);
  FUN_00481790();
  WVar1 = *lpString;
  pWVar8 = lpString;
  pWVar2 = (WCHAR *)&stack0xfffffde8;
  while (WVar1 != L'\0') {
    *pWVar2 = *pWVar8;
    pWVar7 = pWVar2 + 1;
    if (*pWVar8 == L'\'') {
      *pWVar7 = L'\'';
      pWVar7 = pWVar2 + 2;
    }
    pWVar8 = pWVar8 + 1;
    pWVar2 = pWVar7;
    WVar1 = *pWVar8;
  }
  *pWVar2 = L'\0';
  (**(code **)(*local_8 + 0xc))(local_8,L"Module",&stack0xfffffde8);
  if (param_1 == 0) {
    HVar3 = (**(code **)(*local_8 + 0x30))(local_8,lpString,0x75,L"REGISTRY");
  }
  else {
    HVar3 = (**(code **)(*local_8 + 0x2c))(local_8,lpString,0x75,L"REGISTRY");
  }
LAB_004014ad:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return HVar3;
}


