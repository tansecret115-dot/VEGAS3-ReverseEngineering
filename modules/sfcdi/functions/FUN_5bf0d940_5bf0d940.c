/* Module: sfcdi.dll
   Function: FUN_5bf0d940
   Address: 5bf0d940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0d940(HANDLE param_1,int param_2)

{
  _cdinqstrings local_74 [36];
  uchar local_50 [80];
  
  cdr_FormatInquiryStrings((_INQUIRYDATA *)(param_2 + 0x14c),local_74);
  FUN_5bf25750(local_50,(BYTE *)"\'%s\' \'%s\' \'%s\'");
  FUN_5bf0d7a0(param_1,(LPCSTR)local_50);
  return 0;
}


