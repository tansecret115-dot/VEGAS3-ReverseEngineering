/* Module: vegas30.exe
   Function: FUN_00559c40
   Address: 00559c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00559c40(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  UINT UVar3;
  HWND pHVar4;
  LRESULT LVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  UINT Msg;
  WPARAM WVar10;
  CHAR *pCVar11;
  LPARAM LVar12;
  int iVar13;
  CHAR local_104 [260];
  
  UVar3 = IsDlgButtonChecked((HWND)*param_1,0x472);
  param_1[0x49] = (param_1[0x49] ^ UVar3) & 1 ^ param_1[0x49];
  UVar3 = IsDlgButtonChecked((HWND)*param_1,0x470);
  param_1[0x49] = (UVar3 & 1) << 2 | param_1[0x49] & 0xfffffffb;
  UVar3 = IsDlgButtonChecked((HWND)*param_1,0x471);
  param_1[0x49] = (UVar3 & 1) << 1 | param_1[0x49] & 0xfffffffd;
  UVar3 = IsDlgButtonChecked((HWND)*param_1,0x488);
  param_1[0x49] = (UVar3 & 1) << 3 | param_1[0x49] & 0xfffffff7;
  UVar3 = IsDlgButtonChecked((HWND)*param_1,0x46f);
  LVar12 = 0;
  WVar10 = 0;
  Msg = 0x147;
  param_1[0x49] = (UVar3 & 1) << 4 | param_1[0x49] & 0xffffffef;
  pHVar4 = GetDlgItem((HWND)*param_1,0x434);
  LVar5 = SendMessageA(pHVar4,Msg,WVar10,LVar12);
  LVar12 = 0;
  param_1[0x48] = LVar5 + -1;
  WVar10 = 0;
  UVar3 = 0x147;
  pHVar4 = GetDlgItem((HWND)*param_1,0x436);
  uVar6 = SendMessageA(pHVar4,UVar3,WVar10,LVar12);
  param_1[0x49] = (uVar6 & 7) << 5 | param_1[0x49] & 0xffffff1f;
  GetDlgItemTextA((HWND)*param_1,0x438,(LPSTR)(param_1 + 4),0x104);
  switch(param_1[0x48]) {
  case 0:
    pCVar11 = local_104;
    iVar13 = 0x104;
    bVar2 = false;
    pHVar4 = GetDlgItem((HWND)*param_1,0xe78);
    GetWindowTextA(pHVar4,pCVar11,iVar13);
    uVar9 = _SfTextToNanoTimeToken2_40(local_104,&DAT_0064b110,0,0,0,0,0,0,2,0);
    if ((param_1[0x52] != (int)uVar9) || (param_1[0x53] != (int)((ulonglong)uVar9 >> 0x20))) {
      bVar2 = true;
    }
    *(undefined8 *)(param_1 + 0x52) = uVar9;
    if (!bVar2) {
      return;
    }
    FUN_005586d0(param_1);
    return;
  case 1:
    GetDlgItemTextA((HWND)*param_1,0xe77,local_104,0x104);
    iVar7 = _SfTextToLongTokenEx_20(local_104,param_1[2],0xffffffe8,0x18,0);
    iVar13 = param_1[2];
    param_1[2] = iVar7;
    GetDlgItemTextA((HWND)*param_1,0xe78,local_104,0x104);
    iVar8 = _SfTextToLongTokenEx_20(local_104,param_1[3],0xffffff9c,100,0);
    iVar1 = param_1[3];
    param_1[3] = iVar8;
    if (iVar1 == iVar8 && iVar13 == iVar7) {
      return;
    }
    break;
  case 2:
    pCVar11 = local_104;
    iVar13 = 0x104;
    bVar2 = false;
    pHVar4 = GetDlgItem((HWND)*param_1,0xe78);
    GetWindowTextA(pHVar4,pCVar11,iVar13);
    uVar9 = _SfTextToNanoTimeToken2_40(local_104,&DAT_0064b110,0,0,0,0,0,0,2,0);
    if ((param_1[0x52] != (int)uVar9) || (param_1[0x53] != (int)((ulonglong)uVar9 >> 0x20))) {
      bVar2 = true;
    }
    *(undefined8 *)(param_1 + 0x52) = uVar9;
    if (bVar2) {
      FUN_005586d0(param_1);
      return;
    }
    GetDlgItemTextA((HWND)*param_1,0xe79,local_104,0x104);
    iVar7 = _SfTextToLongTokenEx_20(local_104,param_1[2],0xffffffe8,0x18,0);
    iVar13 = param_1[2];
    param_1[2] = iVar7;
    GetDlgItemTextA((HWND)*param_1,0xe7e,local_104,0x104);
    iVar8 = _SfTextToLongTokenEx_20(local_104,param_1[3],0xffffff9c,100,0);
    iVar1 = param_1[3];
    param_1[3] = iVar8;
    if (iVar1 == iVar8 && iVar13 == iVar7) {
      return;
    }
    break;
  case 0xffffffff:
    FUN_00558790(param_1);
    return;
  default:
    goto switchD_00559d78_default;
  }
  FUN_00558630(param_1,0);
switchD_00559d78_default:
  return;
}


