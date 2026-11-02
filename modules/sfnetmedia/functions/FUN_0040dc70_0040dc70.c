/* Module: sfnetmedia.dll
   Function: FUN_0040dc70
   Address: 0040dc70
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT __fastcall FUN_0040dc70(int param_1)

{
  HWND pHVar1;
  undefined4 *puVar2;
  LPSTR pCVar3;
  HRESULT HVar4;
  WPARAM wParam;
  uint uVar5;
  IMalloc *pIVar6;
  LPCITEMIDLIST pIVar7;
  int iVar8;
  int iVar9;
  IMalloc local_104 [65];
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x25a);
  GetWindowTextA(pHVar1,(LPSTR)local_104,0x104);
  SetCurrentDirectoryA((LPCSTR)local_104);
  iVar9 = 1;
  iVar8 = 1;
  pIVar6 = local_104;
  pIVar7 = (LPCITEMIDLIST)0x104;
  uVar5 = 0x6c;
  puVar2 = (undefined4 *)FUN_004012d0();
  pCVar3 = FUN_00418380(puVar2,uVar5);
  HVar4 = FUN_0041dc40(*(HWND *)(param_1 + 4),pCVar3,pIVar6,pIVar7,iVar8,iVar9);
  if (-1 < HVar4) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x25a);
    wParam = SendMessageA(pHVar1,0x158,0,(LPARAM)local_104);
    if (wParam == 0xffffffff) {
      SendMessageA(pHVar1,0x14a,0,(LPARAM)local_104);
      wParam = 0;
    }
    SendMessageA(pHVar1,0x14e,wParam,0);
    HVar4 = 0;
  }
  return HVar4;
}


