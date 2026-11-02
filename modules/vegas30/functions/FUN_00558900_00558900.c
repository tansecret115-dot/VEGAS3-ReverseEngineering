/* Module: vegas30.exe
   Function: FUN_00558900
   Address: 00558900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00558900(HWND param_1,int param_2)

{
  UINT UVar1;
  HPROPSHEETPAGE p_Var2;
  int iVar3;
  _union_1933 *p_Var4;
  DWORD *pDVar5;
  _union_1935 *p_Var6;
  PROPSHEETHEADERA_V2 *pPVar7;
  PROPSHEETPAGEA_V4 *pPVar8;
  int local_21c;
  DWORD local_218 [3];
  PROPSHEETHEADERA_V2 local_20c;
  PROPSHEETPAGEA_V4 local_1d8;
  undefined4 local_1a0;
  int local_19c;
  undefined1 local_198 [368];
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 == 0) {
    return -0x7ff8ffa9;
  }
  p_Var6 = (_union_1935 *)&local_1d8.hActCtx;
  for (iVar3 = 0x6a; iVar3 != 0; iVar3 = iVar3 + -1) {
    p_Var6->hbmHeader = (HBITMAP)0x0;
    p_Var6 = p_Var6 + 1;
  }
  iVar3 = *(int *)(param_2 + 0x50);
  local_1d8.hActCtx = (HANDLE)0x1;
  local_1d8.u3 = (_union_1935)0x1;
  local_1a0 = 1;
  local_19c = param_2;
  if (iVar3 == 0) {
    DAT_00645424 = 1;
  }
  else {
    local_28 = *(undefined4 *)(iVar3 + 0x18);
    if ((*(int *)(iVar3 + 0x18) != 0) && ((*(uint *)(*(int *)(iVar3 + 0x18) + 0x134) & 0x400) != 0))
    {
      DAT_00645424 = 1;
      _DAT_00645430 = 0;
      goto LAB_00558996;
    }
    DAT_00645424 = 0;
  }
  _DAT_00645430 = 1;
LAB_00558996:
  local_24 = DAT_0064b138;
  if (*(int *)(param_2 + 4) == 2) {
    DAT_0064541c = 0x31a;
    DAT_00645420 = FUN_00558ba0;
    FUN_0055b670(param_2,local_198);
  }
  else {
    if (*(int *)(param_2 + 4) != 3) {
      return -0x7fff0001;
    }
    DAT_0064541c = 0x33c;
    DAT_00645420 = FUN_0055a390;
    FUN_0055b8c0(param_2,local_198);
  }
  pPVar7 = &local_20c;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    pPVar7->dwSize = 0;
    pPVar7 = (PROPSHEETHEADERA_V2 *)&pPVar7->dwFlags;
  }
  local_20c.u3.ppsp = (LPCPROPSHEETPAGEA)local_218;
  local_20c.nPages = 0;
  local_20c.u2.nStartPage = 0;
  local_21c = 0;
  local_20c.dwSize = 0x34;
  local_20c.dwFlags = 0x80;
  local_20c.hwndParent = param_1;
  local_20c.hInstance = DAT_006471fc;
  local_20c.pszCaption = "Properties";
  p_Var4 = (_union_1933 *)&DAT_0064541c;
  do {
    if (p_Var4[-1].pszTemplate == (LPCSTR)0x0) {
      pPVar8 = &local_1d8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pPVar8->dwSize = 0;
        pPVar8 = (PROPSHEETPAGEA_V4 *)&pPVar8->dwFlags;
      }
      local_1d8.dwFlags = 0;
      local_1d8.u = (_union_1933)p_Var4->pszTemplate;
      local_1d8.dwSize = 0x30;
      local_1d8.hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_00647204,local_1d8.u.pszTemplate,5)
      ;
      local_1d8.pfnDlgProc = *(DLGPROC *)(p_Var4 + 1);
      local_1d8.lParam = (LPARAM)&local_1d8.hActCtx;
      p_Var2 = CreatePropertySheetPageA(&local_1d8);
      UVar1 = local_20c.nPages;
      local_218[local_20c.nPages] = (DWORD)p_Var2;
      if (p_Var2 == (HPROPSHEETPAGE)0x0) {
        if (0 < local_21c) {
          pDVar5 = local_218;
          do {
            if ((HPROPSHEETPAGE)*pDVar5 != (HPROPSHEETPAGE)0x0) {
              DestroyPropertySheetPage((HPROPSHEETPAGE)*pDVar5);
            }
            pDVar5 = pDVar5 + 1;
            local_21c = local_21c + -1;
          } while (local_21c != 0);
        }
        return -0x7fff0001;
      }
      local_20c.nPages = UVar1 + 1;
    }
    p_Var4 = p_Var4 + 3;
    local_21c = local_21c + 1;
    if ((_union_1933 *)&DAT_00645440 <= p_Var4) {
      iVar3 = FUN_004e9f70(*(undefined4 *)(*(int *)(param_2 + 8) + 8),0x32,0);
      if ((-1 < iVar3) &&
         (iVar3 = FUN_004ea750(*(undefined4 *)(*(int *)(param_2 + 8) + 8),param_2,2,0), -1 < iVar3))
      {
        if (*(int *)(param_2 + 0x50) != 0) {
          iVar3 = FUN_004eb0f0(local_24,0x25,local_28);
        }
        if (-1 < iVar3) {
          _DAT_00659414 = 1;
          PropertySheetA(&local_20c);
          _DAT_00659414 = 0;
          FUN_004ea040(*(undefined4 *)(*(int *)(param_2 + 8) + 8),0);
        }
      }
      return iVar3;
    }
  } while( true );
}


