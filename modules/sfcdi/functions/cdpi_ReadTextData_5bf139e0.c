/* Module: sfcdi.dll
   Function: cdpi_ReadTextData
   Address: 5bf139e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdpi_ReadTextData(struct _sfcdtext *) */

long cdpi_ReadTextData(_sfcdtext *param_1)

{
  DWORD DVar1;
  UINT UVar2;
  uint uVar3;
  ushort local_168 [10];
  uchar local_154 [20];
  CHAR local_140 [160];
  CHAR local_a0 [160];
  
  local_168[1] = 0;
  local_168[2] = 0;
                    /* 0x139e0  157  ?cdpi_ReadTextData@@YGJPAU_sfcdtext@@@Z */
  local_168[3] = 0;
  local_168[4] = 0;
  local_168[5] = 0;
  local_168[6] = 0;
  local_168[7] = 0;
  local_168[8] = 0;
  local_168[9] = 0;
  local_140[0] = '\0';
  local_a0[0] = '\0';
  local_168[0] = DAT_5bf55fac & 0xff00;
  if (param_1 == (_sfcdtext *)0x0) {
    return -0x7fffbffd;
  }
  FUN_5bf25750(local_154,"%x");
  DVar1 = GetPrivateProfileStringA((LPCSTR)local_154,"artist","",local_a0,0xa0,"cdplayer.ini");
  if (DVar1 == 0) {
    return -0x7fffbffb;
  }
  GetPrivateProfileStringA((LPCSTR)local_154,"title","",local_140,0xa0,"cdplayer.ini");
  cdtext_SetItemText(param_1,0,0,local_140);
  cdtext_SetItemText(param_1,0,1,local_a0);
  UVar2 = GetPrivateProfileIntA((LPCSTR)local_154,"numtracks",0,"cdplayer.ini");
  if (UVar2 == 0) {
    return -0x7fffbffb;
  }
  uVar3 = 0;
  if (UVar2 != 0) {
    do {
      FUN_5bf25750((uchar *)local_168,"%d");
      GetPrivateProfileStringA((LPCSTR)local_154,(LPCSTR)local_168,"",local_140,0xa0,"cdplayer.ini")
      ;
      uVar3 = uVar3 + 1;
      cdtext_SetItemText(param_1,uVar3,0,local_140);
    } while (uVar3 < UVar2);
  }
  *(undefined4 *)(param_1 + 0x18) = 5;
  return 0;
}


