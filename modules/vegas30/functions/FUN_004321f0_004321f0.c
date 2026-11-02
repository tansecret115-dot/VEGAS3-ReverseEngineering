/* Module: vegas30.exe
   Function: FUN_004321f0
   Address: 004321f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004321f0(LPSTR param_1,int param_2,int *param_3,int param_4)

{
  uchar *puVar1;
  LPCSTR lpString2;
  int iVar2;
  HGLOBAL pvVar3;
  uchar *_Source;
  BOOL BVar4;
  int iVar5;
  int *piVar6;
  tagOFNA *ptVar7;
  tagOFNA local_25c [3];
  int local_10c [67];
  
  if (param_3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *param_3;
  }
  if (*param_1 == '\0') {
    _SfLoadString_16(DAT_00647204,0x50fa,&local_25c[0].pvReserved,0x104);
  }
  else {
    puVar1 = (uchar *)_SfGetFileNamePtrA_4(param_1);
    _mbscpy((uchar *)&local_25c[0].pvReserved,puVar1);
  }
  lpString2 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(&local_25c[0].pvReserved);
  iVar2 = lstrcmpiA(".veg",lpString2);
  if (iVar2 != 0) {
    _mbscat((uchar *)&local_25c[0].pvReserved,".veg");
  }
  pvVar3 = GlobalAlloc(0,0x30c);
  puVar1 = GlobalLock(pvVar3);
  if (puVar1 == (uchar *)0x0) {
    return -0x7ff8fff2;
  }
  _SfLoadString_16(DAT_00647204,0xf,puVar1,0x30c);
  if (param_4 != 0) {
    _Source = (uchar *)_SfGetString_8(DAT_00647204,0x11);
    _mbscat(puVar1,_Source);
  }
  _SfStringReplaceChars_12(puVar1,9,0);
  piVar6 = local_10c;
  for (iVar2 = 0x43; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  ptVar7 = local_25c;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    ptVar7->lStructSize = 0;
    ptVar7 = (tagOFNA *)&ptVar7->hwndOwner;
  }
  local_25c[0].nFilterIndex = iVar5 + 1;
  local_25c[0].lpstrFile = (LPSTR)&local_25c[0].pvReserved;
  local_25c[0].lStructSize = 0x4c;
  local_25c[0].hwndOwner = DAT_00647624;
  local_25c[0].lpstrDefExt = "veg";
  local_25c[0].nMaxFile = 0x104;
  local_25c[0].lpTemplateName = (LPCSTR)0x339;
  local_25c[0].lpstrFilter = (LPCSTR)puVar1;
  local_10c[0] = iVar5;
  local_25c[0].hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_00647204,0x339,5);
  local_25c[0].lCustData = (LPARAM)local_10c;
  local_25c[0].lpfnHook = (LPOFNHOOKPROC)&LAB_00432400;
  local_25c[0].Flags = 0x80066;
  iVar5 = 0;
  BVar4 = GetSaveFileNameA(local_25c);
  if (BVar4 == 0) {
    iVar5 = -0x7ffb1ff4;
  }
  pvVar3 = GlobalHandle(puVar1);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(puVar1);
  GlobalFree(pvVar3);
  if (-1 < iVar5) {
    if (param_3 != (int *)0x0) {
      *param_3 = local_25c[0].nFilterIndex - 1;
    }
    if (local_25c[0].nFilterIndex - 1 == 1) {
      *param_3 = -1;
    }
    else if (local_10c[0] == 2) {
      *param_3 = 2;
    }
    lstrcpynA(param_1,local_25c[0].lpstrFile,param_2);
    param_1[param_2 + -1] = '\0';
  }
  return iVar5;
}


