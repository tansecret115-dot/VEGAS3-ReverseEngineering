/* Module: vegas30k.dll
   Function: SfMsgBoxId
   Address: 01059020
   Source: Ghidra pseudocode (Stage 10 batch) */


void SfMsgBoxId(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  LPCSTR lpsz;
  char local_800 [2048];
  
                    /* 0x59020  1139  SfMsgBoxId */
  pcVar2 = (char *)_SfGetString_8(param_1,param_4);
  if (*pcVar2 == '\0') {
    pcVar2 = (char *)_SfGetString2_8(param_1,param_4);
  }
  cVar1 = *pcVar2;
  lpsz = pcVar2;
  do {
    if (cVar1 == '\0') {
LAB_0105908b:
      _SfMessageBox_16(param_2,pcVar2,0,param_3);
      return;
    }
    if ((cVar1 == '%') || (cVar1 == '$')) {
      _SfVPrintF_12(local_800,pcVar2,&stack0x00000014);
      pcVar2 = local_800;
      goto LAB_0105908b;
    }
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  } while( true );
}


