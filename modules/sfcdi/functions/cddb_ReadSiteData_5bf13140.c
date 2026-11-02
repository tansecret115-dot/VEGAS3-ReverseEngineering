/* Module: sfcdi.dll
   Function: cddb_ReadSiteData
   Address: 5bf13140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cddb_ReadSiteData(struct HWND__ *,struct inetsession_tag *,struct _cddbaccessinfo
   *,struct tSFLIST * *) */

long cddb_ReadSiteData(HWND__ *param_1,inetsession_tag *param_2,_cddbaccessinfo *param_3,
                      tSFLIST **param_4)

{
  long lVar1;
  tSFLIST *local_40c;
  uint local_408;
  uint local_404;
  uchar local_400 [1024];
  
                    /* 0x13140  152
                       ?cddb_ReadSiteData@@YGJPAUHWND__@@PAUinetsession_tag@@PAU_cddbaccessinfo@@PAPAUtSFLIST@@@Z
                        */
  local_40c = (tSFLIST *)0x0;
  FUN_5bf117c0((int)param_3,local_400);
  local_408 = 32000;
  lVar1 = FUN_5bf12e80((uint)param_2,local_400,&DAT_5bf6e344,&local_408,&local_404);
  if (-1 < lVar1) {
    if (local_404 == 0xd2) {
      FUN_5bf2b110((int *)&local_40c,4,-1,-1,0x40000002);
      lVar1 = FUN_5bf12f50((char *)&DAT_5bf6e344,local_408,(int *)local_40c);
    }
    else {
      lVar1 = FUN_5bf113f0(local_404);
    }
    if ((lVar1 < 0) && (local_40c != (tSFLIST *)0x0)) {
      FUN_5bf2b040((int *)local_40c);
      local_40c = (tSFLIST *)0x0;
    }
    *param_4 = local_40c;
  }
  return lVar1;
}


