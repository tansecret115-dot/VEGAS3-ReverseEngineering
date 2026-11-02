/* Module: vegas30k.dll
   Function: _FXPackage_RenamePackage@4
   Address: 0102a6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _FXPackage_RenamePackage_4(int *param_1)

{
  LSTATUS LVar1;
  DWORD cbData;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uchar *puVar6;
  bool bVar7;
  HKEY local_610;
  DWORD local_60c [2];
  uchar local_604 [260];
  uchar local_500 [256];
  BYTE local_400 [1024];
  
                    /* 0x2a6a0  645  _FXPackage_RenamePackage@4 */
  if (param_1 == (int *)0x0) {
    return -0x7fffbffd;
  }
  iVar3 = 4;
  bVar7 = true;
  piVar4 = &DAT_011dab90;
  piVar5 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar7 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar7);
  if (bVar7) {
    return -0x7fffbffd;
  }
  local_610 = (HKEY)0x0;
  iVar3 = _FXPackage_OpenPackageRegKey_24(*param_1,param_1[1],param_1[2],param_1[3],&local_610,0);
  if (iVar3 == 0) {
    local_60c[1] = 0x400;
    LVar1 = RegQueryValueExA(local_610,"Stream",(LPDWORD)0x0,local_60c,local_400,local_60c + 1);
    if (LVar1 == 0) {
      if (local_60c[0] == 1) {
        puVar6 = local_604;
        for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar6[0] = '\0';
          puVar6[1] = '\0';
          puVar6[2] = '\0';
          puVar6[3] = '\0';
          puVar6 = puVar6 + 4;
        }
        _FXPackage_BuildPath_24(*param_1,param_1[1],param_1[2],param_1[3],local_604,0);
        _mbscpy(local_500,(uchar *)(param_1 + 4));
        _SfValidateFileName_8(local_500,1);
        _mbscat(local_604,"\\");
        _mbscat(local_604,local_500);
        _mbscat(local_604,".sfg");
        cbData = lstrlenA((LPCSTR)local_604);
        BVar2 = CopyFileA((LPCSTR)local_400,(LPCSTR)local_604,0);
        if (BVar2 != 0) {
          DeleteFileA((LPCSTR)local_400);
          RegSetValueExA(local_610,"Stream",0,1,local_604,cbData);
        }
      }
      RegSetValueExA(local_610,"Name",0,1,(BYTE *)(param_1 + 4),0x104);
    }
    RegCloseKey(local_610);
    iVar3 = 0;
  }
  return iVar3;
}


