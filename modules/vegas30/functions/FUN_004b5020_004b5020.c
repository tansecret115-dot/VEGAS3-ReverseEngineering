/* Module: vegas30.exe
   Function: FUN_004b5020
   Address: 004b5020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b5020(code *param_1,undefined4 param_2,byte param_3,LPARAM param_4)

{
  HPROPSHEETPAGE p_Var1;
  int iVar2;
  DWORD *pDVar3;
  DWORD local_30 [2];
  HINSTANCE local_28;
  _union_1933 local_24;
  LPCSTR local_1c;
  code *local_18;
  LPARAM local_14;
  
  if ((param_3 & 1) != 0) {
    pDVar3 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pDVar3 = 0;
      pDVar3 = pDVar3 + 1;
    }
    local_30[0] = 0x30;
    local_30[1] = 8;
    local_24 = (_union_1933)0x556;
    local_28 = (HINSTANCE)_SfFindResInstance_12(DAT_00647204,0x556,5);
    local_1c = (LPCSTR)_SfGetString_8(DAT_00647204,0x6d9a);
    local_18 = FUN_004b40d0;
    local_14 = param_4;
    p_Var1 = CreatePropertySheetPageA((LPCPROPSHEETPAGEA)local_30);
    if (p_Var1 != (HPROPSHEETPAGE)0x0) {
      iVar2 = (*param_1)(p_Var1,param_2);
      if (iVar2 == 0) {
        DestroyPropertySheetPage(p_Var1);
      }
    }
  }
  if ((param_3 & 2) != 0) {
    pDVar3 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pDVar3 = 0;
      pDVar3 = pDVar3 + 1;
    }
    local_30[0] = 0x30;
    local_30[1] = 8;
    local_24 = (_union_1933)0x14a;
    local_28 = (HINSTANCE)_SfFindResInstance_12(DAT_00647204,0x14a,5);
    local_1c = (LPCSTR)_SfGetString_8(DAT_00647204,0x6d9b);
    local_18 = FUN_004b4900;
    local_14 = param_4;
    p_Var1 = CreatePropertySheetPageA((LPCPROPSHEETPAGEA)local_30);
    if (p_Var1 != (HPROPSHEETPAGE)0x0) {
      iVar2 = (*param_1)(p_Var1,param_2);
      if (iVar2 == 0) {
        DestroyPropertySheetPage(p_Var1);
      }
    }
  }
  if ((param_3 & 8) != 0) {
    pDVar3 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pDVar3 = 0;
      pDVar3 = pDVar3 + 1;
    }
    local_30[0] = 0x30;
    local_30[1] = 8;
    local_24 = (_union_1933)0x557;
    local_28 = (HINSTANCE)_SfFindResInstance_12(DAT_00647204,0x557,5);
    local_1c = (LPCSTR)_SfGetString_8(DAT_00647204,0x6d9c);
    local_18 = FUN_004b4e50;
    local_14 = param_4;
    p_Var1 = CreatePropertySheetPageA((LPCPROPSHEETPAGEA)local_30);
    if (p_Var1 != (HPROPSHEETPAGE)0x0) {
      iVar2 = (*param_1)(p_Var1,param_2);
      if (iVar2 == 0) {
        DestroyPropertySheetPage(p_Var1);
      }
    }
  }
  return 0;
}


