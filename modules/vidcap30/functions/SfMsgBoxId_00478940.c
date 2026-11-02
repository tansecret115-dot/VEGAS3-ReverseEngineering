/* Module: vidcap30.exe
   Function: SfMsgBoxId
   Address: 00478940
   Source: Ghidra pseudocode (Stage 10 batch) */


void SfMsgBoxId(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  LPCSTR lpsz;
  char local_800 [2048];
  
                    /* 0x78940  566  SfMsgBoxId */
  pcVar2 = (char *)_SfGetString_8(param_1,param_4);
  if (*pcVar2 == '\0') {
    pcVar2 = (char *)_SfGetString2_8(param_1,param_4);
  }
  cVar1 = *pcVar2;
  lpsz = pcVar2;
  do {
    if (cVar1 == '\0') {
LAB_004789ab:
      _SfMessageBox_16(param_2,pcVar2,0,param_3);
      return;
    }
    if ((cVar1 == '%') || (cVar1 == '$')) {
      _SfVPrintF_12(local_800,pcVar2,&stack0x00000014);
      pcVar2 = local_800;
      goto LAB_004789ab;
    }
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  } while( true );
}


