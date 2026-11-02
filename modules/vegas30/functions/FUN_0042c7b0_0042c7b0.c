/* Module: vegas30.exe
   Function: FUN_0042c7b0
   Address: 0042c7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042c7b0(undefined4 *param_1)

{
  uchar *_Source;
  HWND hDlg;
  undefined4 *puVar1;
  HWND pHVar2;
  undefined4 uVar3;
  long lVar4;
  LRESULT LVar5;
  HANDLE pvVar6;
  DWORD DVar7;
  UINT UVar8;
  char *lpString;
  WPARAM WVar9;
  LPSTR lpString_00;
  int iVar10;
  char *pcVar11;
  LPARAM LVar12;
  DWORD local_4;
  
  puVar1 = param_1;
  hDlg = (HWND)*param_1;
  if ((param_1[0x31e] == 0) && (param_1[0x319] == 0)) {
    if (param_1[0x84] != 0) {
      pcVar11 = (char *)(param_1 + 0x43);
      iVar10 = 0x104;
      lpString = pcVar11;
      pHVar2 = GetDlgItem(hDlg,0x644);
      GetWindowTextA(pHVar2,lpString,iVar10);
      iVar10 = _SfDoesFileExist_4(pcVar11);
      if (iVar10 == 0) {
        uVar3 = _SfGetString_8(DAT_00647204,0x6e84);
        SfMsgBox(hDlg,0x10,uVar3,pcVar11);
        return 0x80004005;
      }
      if (puVar1[0x317] == 2) {
        lVar4 = SfValidateMPEGAsVCD(pcVar11,(VCDTYPE *)&param_1);
        if ((lVar4 < 0) || (param_1 != (undefined4 *)0x1)) {
          uVar3 = _SfGetString_8(DAT_00647204,0x6e80);
          iVar10 = SfMsgBox(hDlg,0x34,uVar3,pcVar11);
          if (iVar10 != 6) {
            return 0x80004005;
          }
        }
      }
      if (puVar1[0x317] == 3) {
        LVar12 = 0;
        WVar9 = 0;
        UVar8 = 0xf0;
        pHVar2 = GetDlgItem(hDlg,0x46f);
        LVar5 = SendMessageA(pHVar2,UVar8,WVar9,LVar12);
        LVar12 = 0;
        WVar9 = 0;
        UVar8 = 0xf0;
        puVar1[0x321] = LVar5;
        pHVar2 = GetDlgItem(hDlg,0x470);
        LVar5 = SendMessageA(pHVar2,UVar8,WVar9,LVar12);
        puVar1[0x322] = LVar5;
        if (puVar1[0x321] != 0) {
          iVar10 = 0x104;
          lpString_00 = &DAT_0064aa70;
          pHVar2 = GetDlgItem(hDlg,0x64f);
          GetWindowTextA(pHVar2,lpString_00,iVar10);
          pvVar6 = CreateFileA(&DAT_0064aa70,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                               (HANDLE)0x0);
          if (pvVar6 == (HANDLE)0xffffffff) {
            uVar3 = _SfGetString_8(DAT_00647204,0x6e86);
            SfMsgBox(hDlg,0x10,uVar3);
            return 0x80004005;
          }
          DVar7 = GetFileSize(pvVar6,&local_4);
          puVar1[0x324] = DVar7;
          puVar1[0x325] = local_4;
          CloseHandle(pvVar6);
        }
      }
      pvVar6 = CreateFileA((LPCSTR)(puVar1 + 0x43),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,
                           0x8000000,(HANDLE)0x0);
      if (pvVar6 != (HANDLE)0xffffffff) {
        DVar7 = GetFileSize(pvVar6,&local_4);
        puVar1[0x31a] = DVar7;
        puVar1[0x31b] = local_4;
        CloseHandle(pvVar6);
      }
      if (((puVar1[0x317] == 4) && (-1 < (int)puVar1[0x31b])) &&
         ((0 < (int)puVar1[0x31b] || (0x100000 < (uint)puVar1[0x31a])))) {
        uVar3 = _SfGetString_8(DAT_00647204,0x6e6a);
        iVar10 = SfMsgBox(hDlg,0x34,uVar3);
        if (iVar10 != 6) {
          return 0x80004005;
        }
      }
      puVar1[0x31e] = 1;
      puVar1[0x319] = 0;
      return 0;
    }
    _Source = (uchar *)(param_1 + 0x86);
    param_1[0x319] = 0;
    iVar10 = FUN_0042caa0(hDlg,param_1[0x312],param_1,_Source);
    _mbscpy((uchar *)(puVar1 + 0x43),_Source);
    if (iVar10 < 0) {
      return 0x80004005;
    }
    DAT_0064a514 = puVar1[0xcc];
    DAT_0064a56c = puVar1[0xcd];
  }
  return 0;
}


