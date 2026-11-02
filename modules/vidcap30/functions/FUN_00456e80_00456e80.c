/* Module: vidcap30.exe
   Function: FUN_00456e80
   Address: 00456e80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00456e80(HWND param_1,int param_2,undefined4 *param_3,WPARAM param_4)

{
  LPCSTR lpString1;
  SHORT SVar1;
  uint uVar2;
  undefined4 uVar3;
  LPCSTR lpString;
  int iVar4;
  uchar *puVar5;
  int iVar6;
  undefined4 *puVar7;
  UINT Msg;
  char *pcVar8;
  undefined1 *lParam;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac [8];
  int local_18c;
  uchar auStack_185 [129];
  uchar local_104 [260];
  
  local_1b0 = DAT_005bb838;
  local_1bc = 0;
  local_1b8 = 0;
  if (param_2 != 0x9c80) {
    return 0;
  }
  switch(param_3[2]) {
  case 0xffffff65:
    break;
  default:
    goto switchD_00456ed5_caseD_ffffff66;
  case 0xffffff94:
    FUN_0041f990(param_4 + 0x8c,param_3[4]);
    param_1 = (HWND)*param_3;
    lParam = &LAB_00458a20;
    Msg = 0x1030;
    goto LAB_004572e2;
  case 0xffffff96:
    uVar3 = param_3[4];
    puVar7 = local_1ac;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_1ac[0] = 4;
    local_1ac[1] = uVar3;
    SendMessageA((HWND)*param_3,0x1005,0,(LPARAM)local_1ac);
    local_1b4 = local_18c;
    if ((char *)param_3[8] == (char *)0x0) {
      return 1;
    }
    if (*(char *)param_3[8] == '\0') {
      uVar3 = _SfGetString_8(DAT_005ba2a0,0xc526);
      SfMsgBox(param_1,0x10,uVar3);
      return 0;
    }
    lpString1 = (LPCSTR)(local_18c + 0x134);
    _SfGetPathNameFromFilePath_12(lpString1,local_104,0x104);
    lpString = (LPCSTR)_SfGetFileNameExtensionPtrA_4(lpString1);
    iVar6 = lstrlenA((LPCSTR)local_104);
    iVar4 = lstrlenA(lpString);
    uVar2 = (0x103 - iVar6) - iVar4;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x80 < uVar2) {
      uVar2 = 0x80;
    }
    lstrcpynA((LPSTR)(auStack_185 + 1),(LPCSTR)param_3[8],uVar2);
    uVar3 = local_1b0;
    auStack_185[uVar2] = '\0';
    iVar6 = local_1b4 + 0x238;
    iVar4 = FUN_004436d0(local_1b0,iVar6,0);
    if ((iVar4 != 0) && (iVar4 = FUN_004444d0(uVar3,iVar4,auStack_185 + 1,0), iVar4 != 0)) {
      puVar5 = auStack_185 + 1;
      uVar3 = _SfGetString_8(DAT_005ba2a0,0xc516);
      SfMsgBox(param_1,0x10,uVar3,puVar5,iVar6);
      return 0;
    }
    _SfGetPathNameFromFilePath_12(lpString1,local_104,0x104);
    _mbscat(local_104,auStack_185 + 1);
    puVar5 = (uchar *)_SfGetFileNameExtensionPtrA_4(lpString1);
    _mbscat(local_104,puVar5);
    iVar6 = lstrcmpiA(lpString1,(LPCSTR)local_104);
    if ((iVar6 == 0) || (iVar6 = _SfDoesFileExist_4(local_104), iVar6 == 0)) {
      iVar4 = FUN_0045b320(auStack_185 + 1);
      iVar6 = local_1b4;
      if (iVar4 != 0) {
        lstrcpynA((LPSTR)(local_1b4 + 0x30),(LPCSTR)(auStack_185 + 1),0x104);
        *(undefined1 *)(iVar6 + 0x133) = 0;
        return 1;
      }
      pcVar8 = "\\ / : * ? < > | \"";
      uVar3 = 0xc517;
    }
    else {
      pcVar8 = (char *)(auStack_185 + 1);
      uVar3 = 0xc551;
    }
    uVar3 = _SfGetString_8(DAT_005ba2a0,uVar3);
    SfMsgBox(param_1,0x10,uVar3,pcVar8);
    return 0;
  case 0xffffff97:
    return (uint)(*(int *)(param_4 + 0xc) == 0);
  case 0xfffffff4:
    uVar2 = FUN_00458330(param_1,param_4,param_3);
    return uVar2;
  case 0xfffffffb:
    FUN_00458660(param_1,param_4,*param_3,param_3 + 8,param_3[3]);
    return 0;
  }
  switch(*(undefined2 *)(param_3 + 3)) {
  case 0x2e:
    lParam = (undefined1 *)0x0;
    param_4 = 0x9cc4;
    Msg = 0x111;
    goto LAB_004572e2;
  case 0x41:
    SVar1 = GetKeyState(0x11);
    if (SVar1 < 0) {
      FUN_0041f810(*param_3);
      return 0;
    }
    break;
  case 0x5d:
    uVar3 = FUN_0041f9c0(*param_3,1);
    FUN_0041f9f0(*param_3,uVar3,&local_1bc);
    FUN_00458660(param_1,param_4,*param_3,&local_1bc,uVar3);
    return 0;
  case 0x71:
    lParam = (undefined1 *)0x0;
    param_4 = 0x9cc5;
    Msg = 0x111;
LAB_004572e2:
    SendMessageA(param_1,Msg,param_4,(LPARAM)lParam);
    break;
  case 0x79:
    SVar1 = GetKeyState(0x10);
    if (SVar1 < 0) {
      uVar3 = FUN_0041f9c0(*param_3,1);
      FUN_0041f9f0(*param_3,uVar3,&local_1bc);
      FUN_00458660(param_1,param_4,*param_3,&local_1bc,uVar3);
      return 0;
    }
  }
switchD_00456ed5_caseD_ffffff66:
  return 0;
}


