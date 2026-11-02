/* Module: vegas30k.dll
   Function: FUN_01144780
   Address: 01144780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01144780(int param_1,HCURSOR param_2,uchar *param_3)

{
  char cVar1;
  uchar uVar2;
  HWND hWnd;
  uchar *puVar3;
  LPCSTR pCVar4;
  uint uVar5;
  uchar local_208 [520];
  
  hWnd = *(HWND *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  _mbscpy(local_208,(uchar *)(param_1 + 0x250));
  puVar3 = local_208;
  while ((local_208[0] != '\0' && (local_208[0] != '\\'))) {
    puVar3 = (uchar *)CharNextA((LPCSTR)puVar3);
    local_208[0] = *puVar3;
  }
  pCVar4 = CharNextA((LPCSTR)puVar3);
  cVar1 = *pCVar4;
  while ((cVar1 != '\0' && (cVar1 != '\\'))) {
    pCVar4 = CharNextA(pCVar4);
    cVar1 = *pCVar4;
  }
  pCVar4 = CharNextA(pCVar4);
  cVar1 = *pCVar4;
  while ((cVar1 != '\0' && (cVar1 != '\\'))) {
    pCVar4 = CharNextA(pCVar4);
    cVar1 = *pCVar4;
  }
  if (pCVar4 != (LPCSTR)0x0) {
    *pCVar4 = '\0';
    uVar2 = *param_3;
    puVar3 = param_3;
    while ((uVar2 != '\0' && (uVar2 != '\\'))) {
      puVar3 = (uchar *)CharNextA((LPCSTR)puVar3);
      uVar2 = *puVar3;
    }
    uVar5 = lstrlenA((LPCSTR)param_3);
    if (1 < uVar5) {
      _mbscat(local_208,puVar3);
    }
  }
  _mbscpy((uchar *)(param_1 + 0x250),local_208);
  SendMessageA(hWnd,0xb,0,0);
  FUN_0112fdb0(param_1,(uchar *)(param_1 + 0x250),1,1);
  SendMessageA(hWnd,0xb,1,0);
  SetCursor(param_2);
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  return;
}


