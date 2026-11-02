/* Module: sfpagepeel.dll
   Function: FUN_00410ff0
   Address: 00410ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_00410ff0(int param_1,uint param_2,int param_3,int *param_4,int *param_5)

{
  int *piVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  HMODULE pHVar4;
  DWORD DVar5;
  int iVar6;
  WCHAR *pWVar7;
  HRESULT HVar8;
  LPCSTR lpMultiByteStr;
  WCHAR *pWVar9;
  LPCWSTR lpString;
  CHAR local_210 [260];
  CHAR local_10c [260];
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_5 == (int *)0x0) {
    HVar8 = CoCreateInstance((IID *)&DAT_0046fb10,(LPUNKNOWN)0x0,1,(IID *)&DAT_0046fb00,&local_8);
    if (HVar8 < 0) goto LAB_00411222;
  }
  else {
    (**(code **)(*param_5 + 4))(param_5);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    local_8 = param_5;
  }
  GetModuleFileNameA(*(HMODULE *)(param_1 + 4),local_10c,0x104);
  if ((*(int *)(param_1 + 4) == 0) ||
     (pHVar4 = GetModuleHandleA((LPCSTR)0x0), *(HMODULE *)(param_1 + 4) == pHVar4)) {
    DVar5 = GetShortPathNameA(local_10c,local_210,0x104);
    if (DVar5 == 0x104) {
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
      }
      return -0x7ff8fff2;
    }
    if ((DVar5 == 0) || (DVar5 == 0x57)) {
      if (&stack0x00000000 != (undefined1 *)0x10c) goto LAB_0041111c;
      lpString = (LPCWSTR)0x0;
    }
    else {
      if (&stack0x00000000 != (undefined1 *)0x210) {
        iVar6 = lstrlenA(local_210);
        FUN_0046d450();
        lpMultiByteStr = local_210;
        goto LAB_0041114a;
      }
      lpString = (LPCWSTR)0x0;
    }
  }
  else if (&stack0x00000000 == (undefined1 *)0x10c) {
    lpString = (LPCWSTR)0x0;
  }
  else {
LAB_0041111c:
    iVar6 = lstrlenA(local_10c);
    FUN_0046d450();
    lpMultiByteStr = local_10c;
LAB_0041114a:
    lpString = (LPCWSTR)&stack0xfffffde4;
    MultiByteToWideChar(0,0,lpMultiByteStr,-1,(LPWSTR)&stack0xfffffde4,iVar6 + 1);
  }
  lstrlenW(lpString);
  FUN_0046d450();
  WVar2 = *lpString;
  pWVar9 = lpString;
  pWVar3 = (WCHAR *)&stack0xfffffde4;
  while (WVar2 != L'\0') {
    *pWVar3 = *pWVar9;
    pWVar7 = pWVar3 + 1;
    if (*pWVar9 == L'\'') {
      *pWVar7 = L'\'';
      pWVar7 = pWVar3 + 2;
    }
    pWVar9 = pWVar9 + 1;
    pWVar3 = pWVar7;
    WVar2 = *pWVar9;
  }
  *pWVar3 = L'\0';
  (**(code **)(*local_8 + 0xc))(local_8,L"Module",&stack0xfffffde4);
  if (param_4 != (int *)0x0) {
    iVar6 = *param_4;
    while (iVar6 != 0) {
      (**(code **)(*local_8 + 0xc))(local_8,iVar6,param_4[1]);
      piVar1 = param_4 + 2;
      param_4 = param_4 + 2;
      iVar6 = *piVar1;
    }
  }
  if (param_2 >> 0x10 == 0) {
    if (param_3 == 0) {
      HVar8 = (**(code **)(*local_8 + 0x30))(local_8,lpString,param_2 & 0xffff,L"REGISTRY");
    }
    else {
      HVar8 = (**(code **)(*local_8 + 0x2c))(local_8,lpString,param_2 & 0xffff);
    }
  }
  else if (param_3 == 0) {
    HVar8 = (**(code **)(*local_8 + 0x18))(local_8,lpString,param_2,L"REGISTRY");
  }
  else {
    HVar8 = (**(code **)(*local_8 + 0x14))();
  }
LAB_00411222:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return HVar8;
}


