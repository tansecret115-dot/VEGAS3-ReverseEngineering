/* Module: vegas30.exe
   Function: FUN_0042f4c0
   Address: 0042f4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f4c0(undefined4 param_1,undefined4 param_2)

{
  uchar *_Source;
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  _Source = (uchar *)FUN_0043cf70(2);
  _mbscpy(local_208,_Source);
  SfPrintF(local_104,
           "http://www.sonicfoundry.com/productinfo.asp?Product=%s&Place=%s&Version=%d.%d%s&Build=%d"
           ,local_208,param_2,3,0,&DAT_0060f98c,0x4c);
  _Internet_BrowseWebPage_8(param_1,local_104);
  return;
}


