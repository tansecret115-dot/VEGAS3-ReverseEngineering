/* Module: Setup.exe
   Function: FUN_00402500
   Address: 00402500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402500(void)

{
  int iVar1;
  DWORD DVar2;
  undefined4 local_4;
  
  DAT_004476d4 = 1;
  DAT_004476d8 = 1;
  GetPrivateProfileStringA("ProductInfo","FeatureSet","",&DAT_004472c4,0x104,&DAT_004476dc);
  iVar1 = _mbscmp(&DAT_004472c4,"");
  if (iVar1 == 0) {
    GetPrivateProfileStringA("RunTimeProperties","SFAPPGRADE","",&DAT_004472c4,0x104,&DAT_004476dc);
    iVar1 = _mbscmp(&DAT_004472c4,"");
    if (iVar1 != 0) goto LAB_00402587;
    if (DAT_004476d4 != 0) goto LAB_00402608;
  }
  else {
LAB_00402587:
    DAT_004476d4 = 0;
  }
  GetPrivateProfileStringA("ProductInfo","FeatureStyle","",&DAT_004473c8,0x104,&DAT_004476dc);
  iVar1 = _mbscmp(&DAT_004473c8,"");
  if (iVar1 == 0) {
    GetPrivateProfileStringA("RunTimeProperties","SFAPPSTYLE","",&DAT_004473c8,0x104,&DAT_004476dc);
    iVar1 = _mbscmp(&DAT_004473c8,"");
    if (iVar1 != 0) goto LAB_004025fd;
  }
  else {
LAB_004025fd:
    DAT_004476d8 = 0;
  }
  FUN_00402880();
LAB_00402608:
  local_4 = 0x28;
  FUN_004022d0("ProductCode",&DAT_00447094,(int)&local_4);
  local_4 = 0x28;
  FUN_004022d0("UpgradeCode",&DAT_00447bf0,(int)&local_4);
  local_4 = 0x104;
  FUN_004022d0("ProductVersion",&DAT_004471c0,(int)&local_4);
  DVar2 = GetPrivateProfileStringA
                    ("ProductInfo","ProductFullName","",(LPSTR)&DAT_00446d88,0x104,&DAT_004476dc);
  if (DVar2 == 0) {
    local_4 = 0x104;
    FUN_004022d0("ProductName",&DAT_00446d88,(int)&local_4);
  }
  DVar2 = GetPrivateProfileStringA
                    ("ProductInfo","ProductDialogTitle","",&DAT_00446e8c,0x104,&DAT_004476dc);
  if (DVar2 == 0) {
    local_4 = 0x104;
    FUN_004022d0("ProductNameShort",&DAT_00446e8c,(int)&local_4);
  }
  iVar1 = _mbscmp((uchar *)&DAT_00446d88,"");
  if (iVar1 == 0) {
    _SfMessageBox_16((HWND)0x0,"Product Name Full","Sonic Foundry MsiSetup",0x40000);
    return 0x80004005;
  }
  iVar1 = _mbscmp(&DAT_00446e8c,"");
  if (iVar1 == 0) {
    _SfMessageBox_16((HWND)0x0,"Product Dialog Title","Sonic Foundry MsiSetup",0x40000);
    return 0x80004005;
  }
  iVar1 = _mbscmp(&DAT_00446f90,"");
  if (iVar1 == 0) {
    _SfMessageBox_16((HWND)0x0,"Product Install Name","Sonic Foundry MsiSetup",0x40000);
    return 0x80004005;
  }
  iVar1 = _mbscmp(&DAT_00447094,"");
  if (iVar1 == 0) {
    _SfMessageBox_16((HWND)0x0,"Product Install ID","Sonic Foundry MsiSetup",0x40000);
    return 0x80004005;
  }
  return 0;
}


