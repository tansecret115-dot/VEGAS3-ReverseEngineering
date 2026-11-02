/* Module: vegas30.exe
   Function: FUN_00531d80
   Address: 00531d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00531d80(uchar *param_1,uchar *param_2,int param_3,uchar *param_4,size_t param_5)

{
  char *pcVar1;
  uchar local_104 [260];
  
  if (param_3 == 0) {
    _mbscpy(param_4,param_1);
    _mbscat(param_4,param_2);
    return;
  }
  _mbscpy(local_104,param_1);
  _mbscat(local_104,param_2);
  pcVar1 = (char *)_SfGetFileNameExtensionPtrA_4(local_104);
  if (*pcVar1 == '\0') {
    _snprintf((char *)param_4,param_5,"%s - %d",local_104,param_3);
    return;
  }
  *pcVar1 = '\0';
  _snprintf((char *)param_4,param_5,"%s - %d.%s",local_104,param_3,pcVar1 + 1);
  return;
}


