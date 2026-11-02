/* Module: sfcdi.dll
   Function: FUN_5bf12830
   Address: 5bf12830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf12830(uchar *param_1,int param_2,_sfcdtext *param_3)

{
  int iVar1;
  DWORD cchLength;
  ulong local_7c;
  char local_78 [40];
  uchar local_50 [80];
  
  *param_1 = '\0';
  cdtext_GetGenre(param_3,&local_7c,local_78,0x28);
  iVar1 = cddb_GenreStringFromNumber(local_7c,local_78,0x28);
  if (iVar1 == 0) {
    cdtext_GetGenre(param_3,&local_7c,local_78,0x28);
    cchLength = lstrlenA(local_78);
    CharLowerBuffA(local_78,cchLength);
  }
  FUN_5bf25750(local_50,(BYTE *)"Category: %s\r\n");
  _mbscat(param_1,local_50);
  FUN_5bf25750(local_50,(BYTE *)"Discid: %08x\r\n");
  _mbscat(param_1,local_50);
  FUN_5bf25750(local_50,(BYTE *)"User-Email: %s@$s\r\n");
  _mbscat(param_1,local_50);
  FUN_5bf25750(local_50,(BYTE *)"Submit-Mode: submit\r\n");
  _mbscat(param_1,local_50);
  FUN_5bf25750(local_50,(BYTE *)"Content-Length: %d\r\n");
  _mbscat(param_1,local_50);
  return;
}


