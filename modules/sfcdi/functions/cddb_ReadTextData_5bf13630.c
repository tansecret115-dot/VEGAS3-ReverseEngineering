/* Module: sfcdi.dll
   Function: cddb_ReadTextData
   Address: 5bf13630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cddb_ReadTextData(struct HWND__ *,struct inetsession_tag *,struct _cddbaccessinfo
   *,struct _sfcdtext *,struct _toc *,int) */

long cddb_ReadTextData(HWND__ *param_1,inetsession_tag *param_2,_cddbaccessinfo *param_3,
                      _sfcdtext *param_4,_toc *param_5,int param_6)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 *puVar6;
  LPCSTR lpString2;
  long lVar7;
  uint local_518;
  uint local_514;
  int *local_510;
  int *local_50c;
  int local_508;
  undefined4 local_504;
  CHAR local_500 [127];
  undefined1 local_481;
  char local_480 [128];
  uchar local_400 [1024];
  
                    /* 0x13630  153
                       ?cddb_ReadTextData@@YGJPAUHWND__@@PAUinetsession_tag@@PAU_cddbaccessinfo@@PAU_sfcdtext@@PAU_toc@@H@Z
                        */
  local_510 = (int *)0x0;
  uVar4 = cddb_DiscID(param_5);
  *(ulong *)(param_4 + 4) = uVar4;
  FUN_5bf11880((int)param_3,local_400,(int)param_5);
  local_518 = 32000;
  iVar5 = FUN_5bf12e80((uint)param_2,local_400,&DAT_5bf6e344,&local_518,&local_514);
  if (iVar5 < 0) {
    return iVar5;
  }
  if (local_514 == 200) {
    puVar6 = &DAT_5bf6e348;
    cVar2 = (char)DAT_5bf6e348;
    while ((cVar2 != ' ' && (cVar2 != '\0'))) {
      pcVar1 = (char *)((int)puVar6 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      cVar2 = *pcVar1;
    }
    *(undefined1 *)puVar6 = 0;
    lstrcpynA(local_500,(LPCSTR)&DAT_5bf6e348,0x80);
    local_481 = 0;
  }
  else if ((local_514 == 0xd3) || (local_514 == 0xd2)) {
    FUN_5bf2b110((int *)&local_510,4,-1,-1,0x40000002);
    lVar7 = FUN_5bf11f40((char *)&DAT_5bf6e344,local_518,local_510);
    if (lVar7 < 0) goto LAB_5bf13923;
    if ((local_510 == (int *)0x0) || (*local_510 == 0)) {
      lVar7 = -0x7fffbffb;
      goto LAB_5bf13923;
    }
    if (*local_510 == 1) {
      lpString2 = *(LPCSTR *)local_510[2];
    }
    else {
      if (param_6 != 0) {
        lVar7 = 0x4e004;
        goto LAB_5bf13923;
      }
      local_50c = local_510;
      local_508 = 0;
      local_504 = 0;
      iVar5 = cddb_ChooserDialog(param_1,(chooserparams *)&local_50c);
      if (iVar5 != 1) {
        lVar7 = -0x7ffb1ff4;
        goto LAB_5bf13923;
      }
      if (local_508 < 0) {
        local_508 = 0;
      }
      if (local_510 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *local_510;
      }
      if ((local_508 < 0) || (iVar5 + -1 < local_508)) {
        lpString2 = (LPCSTR)0x0;
      }
      else {
        lpString2 = *(LPCSTR *)(local_510[2] + local_508 * 4);
      }
    }
    uVar3 = *(undefined4 *)(lpString2 + 0x30c);
    lstrcpynA(local_500,lpString2,0x80);
    local_481 = 0;
    *(undefined4 *)(param_4 + 8) = uVar3;
    FUN_5bf11880((int)param_3,local_400,(int)param_5);
    local_518 = 32000;
    lVar7 = FUN_5bf12e80((uint)param_2,local_400,&DAT_5bf6e344,&local_518,&local_514);
    if (lVar7 < 0) goto LAB_5bf13923;
  }
  if ((local_514 == 200) || (local_514 == 0xd2)) {
    uVar4 = cddb_GenreNumberFromString(local_500);
    cdtext_SetGenre(param_4,uVar4,local_500);
    if ((uVar4 != 1) && (iVar5 = cdtext_GenreStringFromNumber(uVar4,local_480,0x80), iVar5 != 0)) {
      cdtext_SetGenre(param_4,uVar4,local_480);
    }
    FUN_5bf116f0((int)param_3,local_400);
    local_518 = 32000;
    lVar7 = FUN_5bf12e80((uint)param_2,local_400,&DAT_5bf6e344,&local_518,&local_514);
    if (-1 < lVar7) {
      if (local_514 == 0xd2) {
        cddb_ParseToCDText((char *)&DAT_5bf6e344,local_518,param_4);
        *(undefined4 *)(param_4 + 0x18) = 4;
      }
      else {
        lVar7 = FUN_5bf113f0(local_514);
      }
    }
  }
  else {
    lVar7 = FUN_5bf113f0(local_514);
  }
LAB_5bf13923:
  if (local_510 != (int *)0x0) {
    FUN_5bf2b040(local_510);
  }
  return lVar7;
}


