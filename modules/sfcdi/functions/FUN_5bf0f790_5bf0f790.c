/* Module: sfcdi.dll
   Function: FUN_5bf0f790
   Address: 5bf0f790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0f790(uchar *param_1,int param_2)

{
  uchar *_Source;
  BYTE local_504 [260];
  uchar local_400 [1024];
  
  *param_1 = '\0';
  FUN_5bf25750(local_400,(BYTE *)"    Drive %c:\'%s\'\r\n");
  _mbscat(param_1,local_400);
  FUN_5bf25750(local_400,(BYTE *)"       Interface: %s (%d)\r\n");
  _mbscat(param_1,local_400);
  FUN_5bf25750(local_400,(BYTE *)"       Adapter: %s (%d)\r\n");
  _mbscat(param_1,local_400);
  GetWindowsDirectoryA((LPSTR)local_504,0x104);
  FUN_5bf232c0(local_504,0x104);
  if (DAT_5bf65e20 == 0) {
    _mbscat(local_504,(uchar *)"system\\iosubsys\\");
    _mbscat(local_504,(uchar *)(param_2 + 0xac));
    _Source = ".mpd";
  }
  else {
    _mbscat(local_504,(uchar *)"system32\\drivers\\");
    _mbscat(local_504,(uchar *)(param_2 + 0xac));
    _Source = ".sys";
  }
  _mbscat(local_504,_Source);
  FUN_5bf0f690(param_1,(LPCSTR)local_504);
  FUN_5bf25750(local_400,(BYTE *)"       Available: %s %s\r\n");
  _mbscat(param_1,local_400);
  if ((*(uint *)(param_2 + 0x1a0) & 0x2000) == 0) {
    FUN_5bf25750(local_400,(BYTE *)"       Digital Record: %s\r\n");
    _mbscat(param_1,local_400);
    if ((*(uint *)(param_2 + 0x1a8) & 0x2000000) != 0) {
      FUN_5bf25750(local_400,(BYTE *)"       Supports Burn Proof\r\n");
      _mbscat(param_1,local_400);
    }
  }
  return;
}


