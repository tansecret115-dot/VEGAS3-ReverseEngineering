/* Module: vidcap30.exe
   Function: SfMsgBox
   Address: 004788c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void SfMsgBox(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  LPCSTR lpsz;
  char local_800 [2048];
  
                    /* 0x788c0  565  SfMsgBox */
  cVar1 = *param_3;
  lpsz = param_3;
  do {
    if (cVar1 == '\0') {
LAB_004788f1:
      _SfMessageBox_16(param_1,param_3,0,param_2);
      return;
    }
    if ((cVar1 == '%') || (cVar1 == '$')) {
      _SfVPrintF_12(local_800,param_3,&stack0x00000010);
      param_3 = local_800;
      goto LAB_004788f1;
    }
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  } while( true );
}


