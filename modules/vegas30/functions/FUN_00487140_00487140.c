/* Module: vegas30.exe
   Function: FUN_00487140
   Address: 00487140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00487140(undefined4 param_1,undefined4 param_2,undefined4 param_3,uchar *param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  uchar *puVar2;
  int iVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  FILE *_File;
  _WIN32_FIND_DATAA *p_Var6;
  int iVar7;
  _WIN32_FIND_DATAA *p_Var8;
  undefined *puVar9;
  undefined4 uVar10;
  char local_ca4 [4];
  char local_ca0 [4];
  char local_c9c [4];
  char local_c98;
  char *local_c94 [5];
  uchar *local_c80 [5];
  _WIN32_FIND_DATAA local_c6c;
  uchar local_b2c [260];
  uchar local_a28 [260];
  uchar local_924 [260];
  uchar local_820 [260];
  uchar local_71c [260];
  CHAR local_618 [260];
  uchar local_514 [260];
  uchar local_410 [260];
  uchar local_30c [260];
  uchar local_208 [260];
  uchar local_104 [260];
  
  _mbscpy(local_104,param_4);
  local_ca0[0] = s__Autorun_inf_00612c00[4];
  local_ca0[1] = s__Autorun_inf_00612c00[5];
  local_ca0[2] = s__Autorun_inf_00612c00[6];
  local_ca0[3] = s__Autorun_inf_00612c00[7];
  puVar2 = local_514;
  local_c9c[0] = s__Autorun_inf_00612c00[8];
  local_c9c[1] = s__Autorun_inf_00612c00[9];
  local_c9c[2] = s__Autorun_inf_00612c00[10];
  local_c9c[3] = s__Autorun_inf_00612c00[0xb];
  uVar10 = 0x104;
  local_ca4[0] = s__Autorun_inf_00612c00[0];
  local_ca4[1] = s__Autorun_inf_00612c00[1];
  local_ca4[2] = s__Autorun_inf_00612c00[2];
  local_ca4[3] = s__Autorun_inf_00612c00[3];
  puVar9 = &DAT_00612bf8;
  local_c98 = s__Autorun_inf_00612c00[0xc];
  uVar1 = FUN_005b8960(param_3);
  uVar1 = _SfCreateTempFileAndName_16(uVar1,puVar9,puVar2,uVar10);
  local_c80[0] = local_514;
  local_c94[0] = local_ca4;
  local_c80[1] = param_4;
  _mbscpy(local_a28,"\\");
  puVar2 = (uchar *)_SfGetFileNamePtrA_4(local_104);
  _mbscat(local_a28,puVar2);
  _SfStringReplaceChars_12(local_a28,0x20,0x5f);
  local_c94[1] = (char *)local_a28;
  iVar7 = 2;
  if (param_7 != 0) {
    _mbscpy(local_410,"\\");
    puVar2 = (uchar *)_SfGetFileNamePtrA_4(param_8);
    _mbscat(local_410,puVar2);
    local_c94[2] = (char *)local_410;
    local_c80[2] = (uchar *)param_8;
    iVar7 = 3;
  }
  if (param_9 == 0) {
LAB_0048732c:
    DVar4 = GetModuleFileNameA(DAT_006471fc,local_618,0x104);
    if (DVar4 != 0) {
      _SfGetPathNameFromFilePath_12(local_618,local_b2c,0x104);
      puVar2 = (uchar *)_SfGetString_8(DAT_00647204,0x6e87);
      _mbscat(local_b2c,puVar2);
      p_Var6 = &local_c6c;
      for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
        p_Var6->dwFileAttributes = 0;
        p_Var6 = (_WIN32_FIND_DATAA *)&p_Var6->ftCreationTime;
      }
      pvVar5 = FindFirstFileA((LPCSTR)local_b2c,&local_c6c);
      if (pvVar5 != (HANDLE)0xffffffff) {
        _mbscpy(local_208,"\\");
        _mbscat(local_208,(uchar *)local_c6c.cFileName);
        local_c94[iVar7] = (char *)local_208;
        _SfGetPathNameFromFilePath_12(local_618,local_b2c,0x104);
        _mbscat(local_b2c,(uchar *)local_c6c.cFileName);
        local_c80[iVar7] = local_b2c;
        iVar7 = iVar7 + 1;
        FindClose(pvVar5);
      }
      _SfGetPathNameFromFilePath_12(local_618,local_71c,0x104);
      _mbscat(local_71c,(uchar *)"sf_logo.jpg");
      pvVar5 = FindFirstFileA((LPCSTR)local_71c,&local_c6c);
      if (pvVar5 != (HANDLE)0xffffffff) {
        _mbscpy(local_30c,"\\");
        _mbscat(local_30c,(uchar *)local_c6c.cFileName);
        local_c94[iVar7] = (char *)local_30c;
        local_c80[iVar7] = local_71c;
        iVar7 = iVar7 + 1;
        FindClose(pvVar5);
      }
    }
  }
  else {
    _mbscpy(local_820,param_4);
    iVar3 = FUN_004875e0(param_1,param_3,param_5,param_6,local_a28,local_820,0x104);
    if (iVar3 < 0) {
      param_9 = 0;
      goto LAB_0048732c;
    }
    _mbscpy(local_924,"\\");
    puVar2 = (uchar *)_SfGetFileNamePtrA_4(local_820);
    _mbscat(local_924,puVar2);
    _SfStringReplaceChars_12(local_924,0x20,0x5f);
    local_c94[iVar7] = (char *)local_924;
    local_c80[iVar7] = local_820;
    iVar7 = iVar7 + 1;
  }
  _File = fopen((char *)local_514,"w+");
  if (_File == (FILE *)0x0) {
    return uVar1;
  }
  puVar2 = (uchar *)_SfGetFileNamePtrA_4(param_4);
  _mbscpy((uchar *)&local_c6c,puVar2);
  p_Var8 = (_WIN32_FIND_DATAA *)0x0;
  p_Var6 = &local_c6c;
  if ((char)local_c6c.dwFileAttributes != '\0') {
    do {
      if ((char)local_c6c.dwFileAttributes == '.') {
        p_Var8 = p_Var6;
      }
      p_Var6 = (_WIN32_FIND_DATAA *)CharNextA((LPCSTR)p_Var6);
      local_c6c.dwFileAttributes._0_1_ = (char)p_Var6->dwFileAttributes;
    } while ((char)local_c6c.dwFileAttributes != '\0');
    if (p_Var8 != (_WIN32_FIND_DATAA *)0x0) goto LAB_00487506;
  }
  p_Var8 = p_Var6;
LAB_00487506:
  *(CHAR *)&p_Var8->dwFileAttributes = '\0';
  fprintf(_File,"[autorun]\r\n");
  fprintf(_File,"label=%s\r\n",&local_c6c);
  if (param_9 == 0) {
    puVar2 = local_a28;
  }
  else {
    puVar2 = local_924;
  }
  fprintf(_File,"shellexecute=%s\r\n",puVar2);
  fclose(_File);
  uVar1 = FUN_00486f70(param_1,param_2,&local_c6c,local_c80,local_c94,iVar7,param_10,param_11,
                       param_12);
  remove((char *)local_514);
  if (param_9 != 0) {
    remove((char *)local_820);
  }
  return uVar1;
}


