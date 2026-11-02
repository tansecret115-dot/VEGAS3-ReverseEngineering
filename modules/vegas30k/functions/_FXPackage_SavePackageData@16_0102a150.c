/* Module: vegas30k.dll
   Function: _FXPackage_SavePackageData@16
   Address: 0102a150
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _FXPackage_SavePackageData_16(BYTE *param_1,uint param_2,ulong *param_3,uchar *param_4)

{
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  LSTATUS LVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  uchar *puVar7;
  bool bVar8;
  HKEY local_224;
  DWORD local_220;
  GUID local_21c;
  DWORD local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
                    /* 0x2a150  647  _FXPackage_SavePackageData@16 */
  if ((param_1 == (BYTE *)0x0) || (param_3 == (ulong *)0x0)) {
    return 0x80004003;
  }
  iVar4 = 4;
  bVar8 = true;
  puVar5 = &DAT_011dab90;
  puVar6 = param_3;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar8 = *puVar5 == *puVar6;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (bVar8);
  local_224 = (HKEY)0x0;
  if (bVar8) {
    uVar1 = CoCreateGuid(&local_21c);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    *param_3 = local_21c.Data1;
    param_3[1] = local_21c._4_4_;
    param_3[2] = local_21c.Data4._0_4_;
    param_3[3] = local_21c.Data4._4_4_;
  }
  uVar1 = _FXPackage_OpenPackageRegKey_24(*param_3,param_3[1],param_3[2],param_3[3],&local_224,1);
  if (uVar1 != 0) {
    return uVar1;
  }
  if (param_2 < 0x101) {
    RegSetValueExA(local_224,"Name",0,1,(BYTE *)(param_3 + 4),0x104);
    RegSetValueExA(local_224,"Type",0,4,(BYTE *)(param_3 + 0x45),4);
    RegSetValueExA(local_224,"Flags",0,4,(BYTE *)(param_3 + 0x46),4);
    LVar3 = RegSetValueExA(local_224,"Stream",0,3,param_1,param_2);
    RegCloseKey(local_224);
    return (uint)(LVar3 != 0);
  }
  puVar7 = local_208;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar7[0] = '\0';
    puVar7[1] = '\0';
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    puVar7 = puVar7 + 4;
  }
  _FXPackage_BuildPath_24(*param_3,param_3[1],param_3[2],param_3[3],local_208,0);
  _SfCreateDirectory_8(local_208,0);
  _mbscpy(local_104,(uchar *)(param_3 + 4));
  _SfValidateFileName_8(local_104,1);
  _mbscat(local_208,"\\");
  _mbscat(local_208,local_104);
  _mbscat(local_208,param_4);
  local_220 = lstrlenA((LPCSTR)local_208);
  hFile = CreateFileA((LPCSTR)local_208,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    RegCloseKey(local_224);
    return 0x8004e006;
  }
  BVar2 = WriteFile(hFile,param_1,param_2,&local_20c,(LPOVERLAPPED)0x0);
  uVar1 = 0;
  if (BVar2 != 0) {
    RegSetValueExA(local_224,"Name",0,1,(BYTE *)(param_3 + 4),0x104);
    RegSetValueExA(local_224,"Type",0,4,(BYTE *)(param_3 + 0x45),4);
    RegSetValueExA(local_224,"Flags",0,4,(BYTE *)(param_3 + 0x46),4);
    LVar3 = RegSetValueExA(local_224,"Stream",0,1,local_208,local_220);
    uVar1 = (uint)(LVar3 != 0);
    SetEndOfFile(hFile);
  }
  CloseHandle(hFile);
  RegCloseKey(local_224);
  return uVar1;
}


