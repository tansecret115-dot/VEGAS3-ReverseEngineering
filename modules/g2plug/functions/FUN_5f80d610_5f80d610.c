/* Module: g2plug.dll
   Function: FUN_5f80d610
   Address: 5f80d610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80d610(HWND param_1,int param_2)

{
  HWND pHVar1;
  CHAR *pCVar2;
  SIZE_T SVar3;
  CHAR local_400 [1024];
  
  pHVar1 = GetDlgItem(param_1,0x3ed);
  if (pHVar1 != (HWND)0x0) {
    FUN_5f80ac70(pHVar1);
    FUN_5f80aef0();
    pCVar2 = local_400;
    SVar3 = 0x400;
    pHVar1 = GetDlgItem(param_1,0x3ed);
    FUN_5f80b050(pHVar1,pCVar2,SVar3);
    SetDlgItemTextA(param_1,0x3ef,local_400);
  }
  SetDlgItemInt(param_1,0x3f3,*(UINT *)(param_2 + 0x663),0);
  SetDlgItemInt(param_1,0x3f4,*(UINT *)(param_2 + 0x667),0);
  FUN_5f80ccc0(param_1,*(uint *)(param_2 + 0x138));
  return 0;
}


