/* Module: sfcdi.dll
   Function: FUN_5bf1a8d0
   Address: 5bf1a8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1a8d0(uchar *param_1,int param_2,tPARAMETERS_DEVDES *param_3,uchar *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uchar local_400 [79];
  undefined1 local_3b1;
  _INQUIRYDATA local_3b0 [8];
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_350 [20];
  undefined4 local_300 [20];
  undefined4 local_2b0 [20];
  CHAR local_260 [80];
  CHAR local_210 [80];
  CHAR local_1c0 [80];
  CHAR local_170 [80];
  CHAR local_120 [80];
  CHAR local_d0 [80];
  CHAR local_80 [128];
  
  lstrcpynA((LPSTR)local_400,(LPCSTR)(param_2 + 0x208),0x50);
  local_3b1 = 0;
  FUN_5bf1a870(local_120,(LPSTR)local_400);
  devdes_GetScsiInfo(param_3,local_3b0);
  puVar2 = local_300;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_300[1] = local_3a4;
  local_300[0] = local_3a8;
  puVar2 = local_350;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_350[0] = local_3a0;
  local_350[2] = local_398;
  local_350[3] = local_394;
  puVar2 = local_2b0;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_350[1] = local_39c;
  local_2b0[0] = local_390;
  lstrcpynA((LPSTR)local_400,(LPCSTR)local_300,0x50);
  local_3b1 = 0;
  FUN_5bf1a870(local_1c0,(LPSTR)local_400);
  lstrcpynA((LPSTR)local_400,(LPCSTR)local_350,0x50);
  local_3b1 = 0;
  FUN_5bf1a870(local_210,(LPSTR)local_400);
  lstrcpynA((LPSTR)local_400,(LPCSTR)local_2b0,0x50);
  local_3b1 = 0;
  FUN_5bf1a870(local_170,(LPSTR)local_400);
  if ((*(uint *)(param_3 + 0x1a0) & 0x2000) == 0) {
    _mbscpy(local_400,(uchar *)(param_3 + 0xc));
  }
  else {
    _mbscpy(local_400,(uchar *)"Unknown");
    if ((*(uint *)(param_3 + 0x1a0) & 0x100) != 0) {
      _mbscat(local_400,(uchar *)" (SCSI)");
    }
  }
  FUN_5bf1a870(local_d0,(LPSTR)local_400);
  _mbscpy(local_400,(uchar *)(param_2 + 0x104));
  FUN_5bf1a870(local_80,(LPSTR)local_400);
  _mbscpy(local_400,param_4);
  FUN_5bf1a870(local_260,(LPSTR)local_400);
  FUN_5bf25750(param_1,(BYTE *)s_http____s_Manufacturer__s_Produc_5bf64e64);
  return 0;
}


