/* Module: vegas30.exe
   Function: FUN_00582bb0
   Address: 00582bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00582bb0(int param_1,DWORD param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD local_30 [2];
  HINSTANCE local_28;
  _union_1933 local_24;
  _union_1934 local_20;
  DLGPROC local_18;
  int local_14;
  
  pDVar1 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pDVar1 = 0;
    pDVar1 = pDVar1 + 1;
  }
  local_30[0] = 0x30;
  local_30[1] = param_2;
  local_28 = *(HINSTANCE *)(DAT_0065a054 + 8);
  local_24._2_2_ = 0;
  local_24._0_2_ = *(ushort *)(param_1 + 8);
  local_20.hIcon = (HICON)0x0;
  local_18 = (DLGPROC)&LAB_00582c20;
  local_14 = param_1;
  CreatePropertySheetPageA((LPCPROPSHEETPAGEA)local_30);
  return;
}


