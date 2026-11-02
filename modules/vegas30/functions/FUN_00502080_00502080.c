/* Module: vegas30.exe
   Function: FUN_00502080
   Address: 00502080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00502080(uchar *param_1)

{
  uchar local_104 [260];
  
  _SfGetModulePath_12(DAT_006471fc,local_104,0x104);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)"cmdtemp.xml");
  _mbscpy(param_1,local_104);
  return;
}


