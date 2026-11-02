/* Module: vegas30.exe
   Function: FUN_00582e10
   Address: 00582e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00582e10(int param_1,HWND param_2,LPCSTR param_3,DWORD param_4)

{
  UINT UVar1;
  int *piVar2;
  _union_1956 _Memory;
  DWORD DVar3;
  INT_PTR IVar4;
  int iVar5;
  PROPSHEETHEADERA_V2 *pPVar6;
  undefined4 local_3c;
  PROPSHEETHEADERA_V2 local_34;
  
  UVar1 = **(UINT **)(param_1 + 4);
  _Memory.ppsp = calloc(1,UVar1 * 4);
  iVar5 = 0;
  if (_Memory.ppsp == (LPCPROPSHEETPAGEA)0x0) {
    local_3c = 0x8007000e;
  }
  else {
    local_3c = 0;
    if (0 < (int)UVar1) {
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 8) + iVar5 * 4);
        DVar3 = (**(code **)(*piVar2 + 0x10))(0,piVar2[3]);
        (&(_Memory.ppsp)->dwSize)[iVar5] = DVar3;
        if (DVar3 == 0) goto LAB_00582ec8;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)UVar1);
    }
    pPVar6 = &local_34;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      pPVar6->dwSize = 0;
      pPVar6 = (PROPSHEETHEADERA_V2 *)&pPVar6->dwFlags;
    }
    local_34.dwSize = 0x34;
    local_34.dwFlags = param_4;
    local_34.hwndParent = param_2;
    local_34.hInstance = *(HINSTANCE *)(DAT_0065a054 + 8);
    local_34.u.hIcon = (HICON)0x0;
    local_34.pszCaption = param_3;
    local_34.u2.nStartPage = 0;
    local_34.nPages = UVar1;
    local_34.u3.ppsp = _Memory.ppsp;
    IVar4 = PropertySheetA(&local_34);
    if (IVar4 == -1) {
LAB_00582ec8:
      local_3c = 0x8007000e;
    }
    free(_Memory.ppsp);
  }
  FUN_00582dd0();
  return local_3c;
}


