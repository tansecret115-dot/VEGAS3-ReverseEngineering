/* Module: sfcdi.dll
   Function: FUN_5bf0f690
   Address: 5bf0f690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0f690(uchar *param_1,LPCSTR param_2)

{
  int iVar1;
  CHAR local_208 [260];
  uchar local_104 [260];
  
  if (param_2 != (LPCSTR)0x0) {
    iVar1 = lstrlenA(param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_5bf33b00(param_2,"FileDescription",local_208,0x104);
      if (-1 < iVar1) {
        FUN_5bf25750(local_104,(BYTE *)"           Description: %s\r\n");
        _mbscat(param_1,local_104);
      }
      iVar1 = FUN_5bf33b00(param_2,"CompanyName",local_208,0x104);
      if (-1 < iVar1) {
        FUN_5bf25750(local_104,(BYTE *)"           Company: %s\r\n");
        _mbscat(param_1,local_104);
      }
      iVar1 = FUN_5bf33b00(param_2,"FileVersion",local_208,0x104);
      if (-1 < iVar1) {
        FUN_5bf25750(local_104,(BYTE *)"           Version: %s\r\n");
        _mbscat(param_1,local_104);
      }
    }
  }
  return;
}


