/* Module: Setup.exe
   Function: SfMsgBox
   Address: 00407ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl SfMsgBox(HWND param_1,UINT param_2,uchar *param_3)

{
  uchar uVar1;
  uchar *lpsz;
  uchar local_800 [2048];
  
                    /* 0x7ac0  294  SfMsgBox */
  uVar1 = *param_3;
  lpsz = param_3;
  do {
    if (uVar1 == '\0') {
LAB_00407af1:
      _SfMessageBox_16(param_1,(LPCSTR)param_3,(LPCSTR)0x0,param_2);
      return;
    }
    if ((uVar1 == '%') || (uVar1 == '$')) {
      _SfVPrintF_12(local_800,param_3,(uint *)&stack0x00000010);
      param_3 = local_800;
      goto LAB_00407af1;
    }
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    uVar1 = *lpsz;
  } while( true );
}


