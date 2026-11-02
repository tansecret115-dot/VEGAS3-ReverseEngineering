/* Module: sfcdi.dll
   Function: SfCdi_GetAboutInfo
   Address: 5bf0f980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdi_GetAboutInfo(struct tSFLIST *,char *) */

long SfCdi_GetAboutInfo(tSFLIST *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uchar local_904 [260];
  uchar local_800 [2048];
  
                    /* 0xf980  73  ?SfCdi_GetAboutInfo@@YGJPAUtSFLIST@@PAD@Z */
  *param_2 = '\0';
  _mbscat((uchar *)param_2,(uchar *)"SCSI/IDE:\r\n");
  if (DAT_5bf65fdc == 0) {
    FUN_5bf25750(local_800,(BYTE *)"    Not using ASPI\r\n");
  }
  else {
    FUN_5bf25750(local_800,(BYTE *)"    Using ASPI\r\n");
  }
  _mbscat((uchar *)param_2,local_800);
  _mbscpy(local_904,(uchar *)"wnaspi32.dll");
  FUN_5bf0f690((uchar *)param_2,(LPCSTR)local_904);
  _mbscat((uchar *)param_2,"\r\n");
  if (param_1 != (tSFLIST *)0x0) {
    uVar1 = *(uint *)param_1;
    _mbscat((uchar *)param_2,(uchar *)"CD Drives:\r\n");
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        FUN_5bf0f790(local_800,*(int *)(*(int *)(param_1 + 8) + uVar2 * 4));
        _mbscat((uchar *)param_2,local_800);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return 0;
}


