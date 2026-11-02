/* Module: vegas30.exe
   Function: FUN_005d70e0
   Address: 005d70e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d70e0(HWND param_1,int param_2)

{
  HWND hWnd;
  uchar *_Source;
  int iVar1;
  LPCSTR pCVar2;
  int iVar3;
  undefined4 uVar4;
  WPARAM wParam;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_230 [4];
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  uchar local_208 [260];
  CHAR local_104 [260];
  
  hWnd = GetDlgItem(param_1,0x435);
  GetWindowTextA(hWnd,(LPSTR)local_208,0x104);
  _Source = local_208;
  if (local_208[0] == '\\') {
    do {
      _Source = (uchar *)CharNextA((LPCSTR)_Source);
    } while (*_Source == '\\');
    if (_Source != local_208) {
      _mbscpy(local_208,_Source);
    }
  }
  iVar1 = lstrlenA((LPCSTR)local_208);
  if (iVar1 == 0) {
    SfMsgBox(param_1,0x30,
             "Can\'t save the template without a valid name.  Please rename it before saving.");
    return 0;
  }
  pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5637);
  iVar1 = lstrcmpA((LPCSTR)local_208,pCVar2);
  if (iVar1 == 0) {
    SfMsgBox(param_1,0x30,"Please rename the \'%s\' template before saving.",local_208);
    return 0;
  }
  puVar5 = &DAT_00646980;
  do {
    FUN_005d7470(puVar5,local_104,0x104);
    iVar1 = lstrcmpA((LPCSTR)local_208,local_104);
    if (iVar1 == 0) {
      SfMsgBox(param_1,0x30,
               "Can\'t modify the built-in \'%s\' template.  Please rename it before saving",
               local_104);
      return 0;
    }
    puVar5 = puVar5 + 10;
  } while ((int)puVar5 < 0x646b60);
  iVar1 = FUN_005d7730(param_2,1);
  if (iVar1 != -1) {
    if (iVar1 < 0xc) {
      FUN_005d7470(&DAT_00646980 + iVar1 * 10,local_104,0x104);
      iVar1 = SfMsgBox(param_1,0x31,
                       "This template is identical to the built-in \'%s\' preset.  Save anyway?",
                       local_104);
      if (iVar1 == 2) {
        return 0;
      }
    }
    else {
      FUN_005d7550(iVar1 + -0xc,local_104,0x104);
      iVar1 = lstrcmpA((LPCSTR)local_208,local_104);
      if (iVar1 != 0) {
        pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5637);
        iVar1 = lstrcmpA(local_104,pCVar2);
        if ((iVar1 != 0) &&
           (iVar1 = SfMsgBox(param_1,0x31,
                             "This template is identical to the user-defined \'%s\' template.  Save anyway?"
                             ,local_104), iVar1 == 2)) {
          return 0;
        }
      }
    }
  }
  iVar1 = FUN_005d74f0();
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      FUN_005d7550(iVar6,local_104,0x104);
      iVar3 = lstrcmpA((LPCSTR)local_208,local_104);
      if (iVar3 == 0) {
        iVar1 = SfMsgBox(param_1,0x31,"Overwrite existing \'%s\' template?",local_208);
        if (iVar1 == 2) {
          return 0;
        }
        FUN_005d7640(iVar6);
        SendMessageA(hWnd,0x144,iVar6 + 0xc,0);
        SendMessageA(hWnd,0x14e,0xffffffff,0);
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  uVar4 = *(undefined4 *)(param_2 + 0xd78);
  puVar5 = local_230;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_230[2] = *(undefined4 *)(param_2 + 0xd74);
  local_220 = *(undefined4 *)(param_2 + 0xd80);
  local_21c = *(undefined4 *)(param_2 + 0xd84);
  local_230[1] = *(undefined4 *)(param_2 + 0xd7c);
  local_218 = *(undefined4 *)(param_2 + 0xda0);
  local_214 = *(undefined4 *)(param_2 + 0xda4);
  local_230[0] = 1;
  local_230[3] = uVar4;
  uVar4 = FUN_005d74f0();
  iVar1 = FUN_005d75c0(uVar4,local_208,local_230);
  if (iVar1 != 0) {
    wParam = SendMessageA(hWnd,0x143,0,(LPARAM)local_208);
    SendMessageA(hWnd,0x14e,wParam,0);
    FUN_005d67b0(param_1,hWnd,param_2,1);
    return 1;
  }
  SfMsgBox(param_1,0x30,"An error occurred while saving the template.",local_104);
  return 0;
}


