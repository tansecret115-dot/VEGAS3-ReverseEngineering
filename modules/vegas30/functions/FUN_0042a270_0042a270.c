/* Module: vegas30.exe
   Function: FUN_0042a270
   Address: 0042a270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042a270(HWND__ *param_1,uchar *param_2,uint param_3)

{
  int local_10c [2];
  uchar local_104 [260];
  
  _mbscpy(local_104,(uchar *)"IDS_VCD_MPEG_FILTER");
  _SfStringReplaceChars_12(local_104,9,0);
  local_10c[0] = 1;
  local_10c[1] = 1;
  _mbscpy(param_2,(uchar *)"IDS_VCD_MPEG_EXT");
  SfFileOpenDlgMRU(param_1,"IDS_VCD_MPEG_NAME",(char *)param_2,param_3,(char *)local_104,local_10c,
                   DAT_00647200,0x461,0,1,local_10c + 1,(char *)0x0,0);
  return;
}


