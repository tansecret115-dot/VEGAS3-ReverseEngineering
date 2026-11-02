/* Module: vidcap30.exe
   Function: FUN_0042f800
   Address: 0042f800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042f800(LPSTR param_1,int param_2,int *param_3,undefined4 param_4,LPCSTR param_5)

{
  uchar *_Source;
  LPCSTR pCVar1;
  int iVar2;
  HGLOBAL pvVar3;
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
    _SfLoadString_16(DAT_005ba2a0,0xaa,&local_25c[0].pvReserved,0x104);
  }
  else {
    _Source = (uchar *)_SfGetFileNamePtrA_4(param_1);
    _mbscpy((uchar *)&local_25c[0].pvReserved,_Source);
  }
  pCVar1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(&local_25c[0].pvReserved);
  iVar2 = lstrcmpiA(".sfvidcap",pCVar1);
  if (iVar2 != 0) {
    _mbscat((uchar *)&local_25c[0].pvReserved,(uchar *)".sfvidcap");
  }
  pvVar3 = GlobalAlloc(0,0x30c);
  pCVar1 = GlobalLock(pvVar3);
  if (pCVar1 != (LPCSTR)0x0) {
    _SfLoadString_16(DAT_005ba2a0,0xa9,pCVar1,0x30c);
    _SfStringReplaceChars_12(pCVar1,9,0);
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
    iVar2 = 0;
    local_25c[0].nFilterIndex = iVar5 + 1;
    local_25c[0].lpstrFile = (LPSTR)&local_25c[0].pvReserved;
    local_25c[0].lStructSize = 0x4c;
    local_25c[0].hwndOwner = DAT_005ba4bc;
    local_25c[0].lpstrDefExt = "sfvidcap";
    local_25c[0].nMaxFile = 0x104;
    local_25c[0].lpTemplateName = (LPCSTR)0x0;
    local_25c[0].lpstrFilter = pCVar1;
    local_10c[0] = iVar5;
    local_25c[0].hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_005ba2a0,0,5);
    local_25c[0].lpfnHook = (LPOFNHOOKPROC)&LAB_0042f9f0;
    local_25c[0].lCustData = (LPARAM)local_10c;
    local_25c[0].Flags = 0x80026;
    local_25c[0].lpstrTitle = param_5;
    BVar4 = GetSaveFileNameA(local_25c);
    if (BVar4 == 0) {
      iVar2 = -0x7ffb1ff4;
    }
    pvVar3 = GlobalHandle(pCVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pCVar1);
    GlobalFree(pvVar3);
    if (-1 < iVar2) {
      if (param_3 != (int *)0x0) {
        *param_3 = local_25c[0].nFilterIndex - 1;
      }
      if (local_10c[0] == 2) {
        *param_3 = 2;
      }
      if (local_25c[0].nFilterIndex - 1 == 1) {
        *param_3 = -1;
      }
      lstrcpynA(param_1,local_25c[0].lpstrFile,param_2);
      param_1[param_2 + -1] = '\0';
    }
    return iVar2;
  }
  return -0x7ff8fff2;
}


