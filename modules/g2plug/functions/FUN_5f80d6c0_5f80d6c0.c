/* Module: g2plug.dll
   Function: FUN_5f80d6c0
   Address: 5f80d6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f80d6c0(HWND param_1,int param_2)

{
  HWND pHVar1;
  int iVar2;
  UINT UVar3;
  
  pHVar1 = GetDlgItem(param_1,0x3ed);
  iVar2 = FUN_5f80ae40(pHVar1);
  if (-1 < iVar2) {
    UVar3 = GetDlgItemInt(param_1,0x3f3,(BOOL *)0x0,0);
    *(UINT *)(param_2 + 0x663) = UVar3;
    UVar3 = GetDlgItemInt(param_1,0x3f4,(BOOL *)0x0,0);
    *(UINT *)(param_2 + 0x667) = UVar3;
    return iVar2;
  }
  return iVar2;
}


