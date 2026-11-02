/* Module: sfcdi.dll
   Function: FUN_5bf12a00
   Address: 5bf12a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf12a00(int param_1,_toc *param_2,_sfcdtext *param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  CHAR local_3fc [20];
  CHAR local_3e8 [79];
  undefined1 local_399;
  CHAR local_398 [79];
  undefined1 local_349;
  CHAR local_348 [339];
  undefined1 local_1f5;
  uchar local_1f4 [160];
  uchar local_154 [340];
  
  DAT_5bf66644 = 0;
  lstrcatA(&DAT_5bf66644,"# xmcd\r\n");
  lstrcatA(&DAT_5bf66644,"#\r\n");
  FUN_5bf12790(&DAT_5bf66644,(int)param_2);
  lstrcatA(&DAT_5bf66644,"#\r\n");
  lstrcpynA(local_398,(LPCSTR)(param_1 + 0x514),0x50);
  local_349 = 0;
  FUN_5bf116c0(local_398);
  lstrcpynA(local_348,local_398,0x154);
  local_1f5 = 0;
  lstrcatA(&DAT_5bf66644,"# Submitted via: ");
  lstrcatA(&DAT_5bf66644,local_348);
  lstrcatA(&DAT_5bf66644," ");
  lstrcpynA(local_3e8,(LPCSTR)(param_1 + 0x618),0x50);
  local_399 = 0;
  FUN_5bf116c0(local_3e8);
  lstrcpynA(local_348,local_3e8,0x154);
  local_1f5 = 0;
  lstrcatA(&DAT_5bf66644,local_348);
  lstrcatA(&DAT_5bf66644,"\r\n");
  lstrcatA(&DAT_5bf66644,"#\r\n");
  uVar1 = cddb_DiscID(param_2);
  wsprintfA(local_348,"DISCID=%x\r\n",uVar1);
  lstrcatA(&DAT_5bf66644,local_348);
  cdtext_GetItemText(param_3,0,1,(char *)local_154,0xa0);
  _mbscat(local_154," / ");
  cdtext_GetItemText(param_3,0,0,(char *)local_1f4,0xa0);
  _mbscat(local_154,local_1f4);
  lstrcpynA(local_348,(LPCSTR)local_154,0x154);
  local_1f5 = 0;
  wsprintfA(local_3fc,"%s=",s_DTITLE_5bf64658);
  FUN_5bf12950(&DAT_5bf66644,local_3fc,local_348);
  uVar2 = cdtext_GetTrackCount(param_3);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      wsprintfA(local_3fc,"%s%d=",s_TTITLE_5bf64660,uVar4);
      iVar3 = FUN_5bf2bbb0((int)param_2,uVar4);
      if ((*(uint *)(iVar3 + 8) & 4) == 0) {
        cdtext_GetItemText(param_3,uVar4 + 1,0,(char *)local_1f4,0xa0);
        lstrcpynA(local_348,(LPCSTR)local_1f4,0x154);
        pcVar5 = local_348;
        local_1f5 = 0;
      }
      else {
        pcVar5 = s_Data_Track_5bf64674;
      }
      FUN_5bf12950(&DAT_5bf66644,local_3fc,pcVar5);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  lstrcatA(&DAT_5bf66644,"EXTD=\r\n");
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      wsprintfA(local_348,"EXTT%d=\r\n",uVar4);
      lstrcatA(&DAT_5bf66644,local_348);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  lstrcatA(&DAT_5bf66644,"PLAYORDER=\r\n");
  return 0;
}


