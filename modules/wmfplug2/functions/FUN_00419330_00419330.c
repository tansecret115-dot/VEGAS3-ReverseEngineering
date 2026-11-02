/* Module: wmfplug2.dll
   Function: FUN_00419330
   Address: 00419330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00419330(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *_Str;
  uint local_14;
  float local_10;
  uint local_c [2];
  int local_4;
  
  local_4 = 1;
  _Str = param_1;
  if (*param_1 == '-') {
    _Str = param_1 + 1;
    local_4 = -1;
  }
  pcVar1 = strchr(_Str,0x2e);
  if (pcVar1 == (char *)0x0) {
    iVar2 = sscanf(_Str,"%u:%u:%u",&local_14,&param_1,local_c);
    if (iVar2 < 3) {
      local_14 = 0;
      iVar2 = sscanf(_Str,"%u:%u",&param_1,local_c);
      if (iVar2 < 2) {
        param_1 = (char *)0x0;
        iVar2 = sscanf(_Str,"%u",local_c);
        if (iVar2 < 1) goto LAB_004194dc;
      }
    }
    if ((param_1 < (char *)0x3c) && (local_c[0] < 0x3c)) {
      return (float10)local_4 *
             ((float10)local_c[0] +
             (float10)param_1 * (float10)_DAT_0047cd38 + (float10)local_14 * (float10)_DAT_0047cd30)
      ;
    }
  }
  else {
    iVar2 = sscanf(_Str,"%u:%u:%f",&local_14,&param_1,&local_10);
    if (iVar2 < 3) {
      local_14 = 0;
      iVar2 = sscanf(_Str,"%u:%f",&param_1,&local_10);
      if (iVar2 < 2) {
        param_1 = (char *)0x0;
        iVar2 = sscanf(_Str,"%f",&local_10);
        if (iVar2 < 1) goto LAB_004194dc;
      }
    }
    if ((param_1 < (char *)0x3c) && (local_10 < (float)_DAT_0047cd38)) {
      return (float10)local_4 *
             ((float10)param_1 * (float10)_DAT_0047cd38 + (float10)local_14 * (float10)_DAT_0047cd30
             + (float10)local_10);
    }
  }
LAB_004194dc:
  return (float10)_DAT_0047cc28;
}


