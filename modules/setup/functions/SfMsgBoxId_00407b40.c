/* Module: Setup.exe
   Function: SfMsgBoxId
   Address: 00407b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl SfMsgBoxId(undefined4 *param_1,HWND param_2,UINT param_3,uint param_4)

{
  BYTE BVar1;
  uchar *puVar2;
  BYTE *lpsz;
  uchar local_800 [2048];
  
                    /* 0x7b40  295  SfMsgBoxId */
  puVar2 = (uchar *)_SfGetString_8(param_1,param_4);
  if (*puVar2 == '\0') {
    puVar2 = _SfGetString2_8(param_1,param_4);
  }
  BVar1 = *puVar2;
  lpsz = puVar2;
  do {
    if (BVar1 == '\0') {
LAB_00407bab:
      _SfMessageBox_16(param_2,(LPCSTR)puVar2,(LPCSTR)0x0,param_3);
      return;
    }
    if ((BVar1 == '%') || (BVar1 == '$')) {
      _SfVPrintF_12(local_800,puVar2,(uint *)&stack0x00000014);
      puVar2 = local_800;
      goto LAB_00407bab;
    }
    lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
    BVar1 = *lpsz;
  } while( true );
}


