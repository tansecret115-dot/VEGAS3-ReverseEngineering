/* Module: sfnetmedia.dll
   Function: FUN_0040c950
   Address: 0040c950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040c950(void *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  LRESULT LVar2;
  undefined4 *puVar3;
  LPSTR lpString2;
  int iVar4;
  WPARAM *pWVar5;
  WPARAM wParam;
  uint uVar6;
  WPARAM local_12c [5];
  CHAR *local_118;
  undefined4 local_114;
  int local_10c;
  CHAR local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)((int)param_1 + 4),600);
  LVar1 = SendMessageA(hWnd,0x1004,0,0);
  pWVar5 = local_12c;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pWVar5 = 0;
    pWVar5 = pWVar5 + 1;
  }
  wParam = 0;
  if (LVar1 < 1) {
    return 0;
  }
  do {
    local_118 = local_104;
    local_12c[2] = 2;
    local_12c[0] = 0xd;
    local_114 = 0x103;
    local_12c[3] = 0;
    local_12c[1] = wParam;
    LVar2 = SendMessageA(hWnd,0x1005,0,(LPARAM)local_12c);
    if (LVar2 != 0) {
      uVar6 = 0x75;
      puVar3 = (undefined4 *)FUN_004012d0();
      lpString2 = FUN_00418380(puVar3,uVar6);
      iVar4 = lstrcmpA(local_118,lpString2);
      if (iVar4 == 0) {
        iVar4 = FUN_0040e0a0(param_1,local_10c);
        if (iVar4 < 0) {
          return 0;
        }
        uVar6 = 0x74;
        puVar3 = (undefined4 *)FUN_004012d0();
        local_118 = FUN_00418380(puVar3,uVar6);
        SendMessageA(hWnd,0x1006,0,(LPARAM)local_12c);
        local_118 = "0";
        local_12c[2] = 1;
        SendMessageA(hWnd,0x1006,0,(LPARAM)local_12c);
        SendMessageA(hWnd,0x102a,wParam,0);
        return 0;
      }
    }
    wParam = wParam + 1;
  } while ((int)wParam < LVar1);
  return 0;
}


