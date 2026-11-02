/* Module: sfcdi.dll
   Function: cdpi_SaveTextData
   Address: 5bf13b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdpi_SaveTextData(struct _sfcdtext *) */

long cdpi_SaveTextData(_sfcdtext *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 local_168;
  undefined4 local_166;
  undefined4 local_162;
  undefined4 local_15e;
  undefined4 local_15a;
  undefined2 local_156;
  uchar local_154 [20];
  char local_140 [160];
  char local_a0 [160];
  
                    /* 0x13b60  158  ?cdpi_SaveTextData@@YGJPAU_sfcdtext@@@Z */
  local_166 = 0;
  local_162 = 0;
  local_15e = 0;
  local_168 = DAT_5bf55fac;
  local_15a = 0;
  local_156 = 0;
  local_140[0] = '\0';
  local_a0[0] = '\0';
  if (param_1 != (_sfcdtext *)0x0) {
    cdtext_GetTrackCount(param_1);
  }
  FUN_5bf25750(local_154,"%X");
  cdtext_GetItemText(param_1,0,0,local_140,0xa0);
  cdtext_GetItemText(param_1,0,1,local_a0,0xa0);
  WritePrivateProfileStringA((LPCSTR)local_154,"artist",local_a0,"cdplayer.ini");
  WritePrivateProfileStringA((LPCSTR)local_154,"title",local_140,"cdplayer.ini");
  cdtext_GetTrackCount(param_1);
  FUN_5bf25750((uchar *)&local_168,"%d");
  WritePrivateProfileStringA((LPCSTR)local_154,"numtracks",(LPCSTR)&local_168,"cdplayer.ini");
  uVar1 = cdtext_GetTrackCount(param_1);
  uVar2 = 0;
  if (uVar1 == 0) {
    return 0;
  }
  do {
    uVar2 = uVar2 + 1;
    cdtext_GetItemText(param_1,uVar2,0,local_140,0xa0);
    FUN_5bf25750((uchar *)&local_168,"%d");
    WritePrivateProfileStringA((LPCSTR)local_154,(LPCSTR)&local_168,local_140,"cdplayer.ini");
  } while (uVar2 < uVar1);
  return 0;
}


