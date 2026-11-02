/* Module: vegas30k.dll
   Function: FUN_0112e520
   Address: 0112e520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0112e520(int param_1,uchar *param_2,LPCSTR param_3)

{
  HWND hWnd;
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  uchar *lpsz;
  uchar *puVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  CHAR *pCVar9;
  undefined4 local_228 [5];
  LPCSTR local_214;
  uchar *local_210;
  uchar local_208;
  char local_207;
  char local_206 [258];
  CHAR local_104 [259];
  undefined1 local_1;
  
  hWnd = *(HWND *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  if (((*(byte *)(param_1 + 0x4e0) & 0x20) == 0) || (*(int *)(param_1 + 0xbac) == 0)) {
    _mbscpy(&local_208,param_2);
  }
  else {
    _SfList_DeleteList_16(*(int *)(param_1 + 0xbac),0,0xffffffff,0);
    FUN_0112e880(param_2,&local_208,*(undefined4 *)(param_1 + 0xbac));
    if (**(int **)(param_1 + 0xbac) != 0) {
      *(uint *)(param_1 + 0x4e0) = *(uint *)(param_1 + 0x4e0) | 1;
    }
  }
  if (local_208 != '\0') {
    if (local_208 != '\\') {
      puVar4 = &local_208;
      do {
        lpsz = puVar4;
        puVar4 = (uchar *)CharNextA((LPCSTR)lpsz);
      } while (*puVar4 != '\0');
      if (*lpsz == '\\') {
        *lpsz = '\0';
      }
      if (local_207 == ':') {
        pCVar1 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x108a);
        lstrcpynA(local_104,pCVar1,0x104);
        local_1 = 0;
        iVar2 = lstrlenA(local_104);
        pCVar9 = local_104 + iVar2;
        uVar3 = _SfGetString2_8(DAT_0120e5c8,0x108c);
        FUN_0112e460("{20D04FE0-3AEA-1069-A2D8-08002B30309D}",uVar3,pCVar9);
        SfPrintF(param_3,"%s\\%s",local_104,&local_208);
        iVar2 = lstrcmpiA(param_3,(LPCSTR)(param_1 + 0x250));
        if (iVar2 == 0) {
          FUN_01131090(param_1);
        }
      }
      else {
        SfPrintF(param_3,"%s\\%s",param_1 + 0x250,&local_208);
      }
      SendMessageA(hWnd,0xb,0,0);
      iVar2 = FUN_0112fdb0(param_1,param_3,1,1);
      if (iVar2 == 0) {
        FUN_01131090(param_1);
      }
      SendMessageA(hWnd,0xb,1,0);
      *(undefined4 *)(param_1 + 0x4e4) = 0;
      return;
    }
    if ((local_207 == '\\') && (local_206[0] != '\0')) {
      pCVar1 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x108a);
      lstrcpynA(local_104,pCVar1,0x104);
      local_1 = 0;
      iVar2 = lstrlenA(local_104);
      pCVar9 = local_104 + iVar2;
      uVar3 = _SfGetString2_8(DAT_0120e5c8,0x108b);
      FUN_0112e460("{208D2C60-3AEA-1069-A2D7-08002B30309D}",uVar3,pCVar9);
      SfPrintF(param_3,"%s\\%s",local_104,local_206);
      SendMessageA(hWnd,0xb,0,0);
      iVar2 = FUN_0112fdb0(param_1,param_3,1,1);
      if (iVar2 == 0) {
        pCVar1 = local_206;
        while ((local_206[0] != '\0' && (local_206[0] != '\\'))) {
          pCVar1 = CharNextA(pCVar1);
          local_206[0] = *pCVar1;
        }
        pCVar1 = pCVar1 + (-2 - (int)&local_208);
        pcVar6 = local_206;
        pcVar7 = param_3;
        for (uVar5 = (uint)pCVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = (uint)pCVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        param_3[(int)pCVar1] = '\0';
        puVar8 = local_228;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        local_228[0] = 0x405;
        local_214 = param_3;
        local_210 = param_2;
        (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_228);
        if (*param_2 != '\0') {
          SfPrintF(param_3,"%s\\Entire Network\\%s\\%s",local_104,param_2,local_206);
          FUN_0112fdb0(param_1,param_3,1,1);
        }
      }
      SendMessageA(hWnd,0xb,1,0);
      *(undefined4 *)(param_1 + 0x4e4) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  return;
}


