/* Module: vegas30k.dll
   Function: _SfKernel_CheckVersion@20
   Address: 01001ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfKernel_CheckVersion_20(undefined4 param_1,uchar *param_2,uint param_3,int param_4)

{
  char *_Source;
  _OSVERSIONINFOA local_314;
  uchar local_280 [128];
  uchar local_200 [512];
  
                    /* 0x1ab0  1038  _SfKernel_CheckVersion@20 */
  _mbscpy(local_280,param_2);
  local_314.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_314);
  if (local_314.dwMajorVersion < 4) {
    _Source = "This product requires Windows 95 or Windows NT 4.0 or later.";
  }
  else {
    if (param_4 != 2) {
      wsprintfA((LPSTR)local_200,
                "The version of the Sonic Foundry Kernel is incompatible with the following client:\n\n%s."
                ,local_280);
      goto LAB_01001b48;
    }
    if (param_3 < 0x300004d) {
      return 0;
    }
    _Source = "The version of the Sonic Foundry Kernel is too old.";
  }
  _mbscpy(local_200,(uchar *)_Source);
LAB_01001b48:
  _SfMessageBox_16(param_1,local_200,"Sonic Foundry Kernel",0x40);
  return 0x80004005;
}


