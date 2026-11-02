/* Module: vegas30.exe
   Function: SfAddMRUNames
   Address: 0055dac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfAddMRUNames(char const *,char const *) */

int SfAddMRUNames(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20c;
  CHAR local_208 [258];
  undefined1 local_106;
  char local_104 [260];
  
                    /* 0x15dac0  17  ?SfAddMRUNames@@YGHPBD0@Z */
  iVar1 = _SfMetric_Open_16(&local_20c,"Vegas",0x300004c,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  iVar2 = _SfGetMetricEx_20(local_20c,100,0,300,0xf);
  lstrcpynA(local_208,param_2,0x103);
  local_106 = 0;
  iVar1 = 1000;
  if (0 < iVar2) {
    do {
      local_106 = 0;
      iVar3 = _SfGetMetricStringEx_24(local_20c,iVar1,local_104,0x104,0,1);
      if (((iVar3 == 0) || (local_104[0] == '\0')) ||
         (iVar3 = lstrcmpiA(local_104,param_2), iVar3 == 0)) {
        _SfSetMetricString_12(local_20c,iVar1,local_208);
        break;
      }
      _SfSetMetricString_12(local_20c,iVar1,local_208);
      lstrcpynA(local_208,local_104,0x103);
      local_106 = 0;
      iVar3 = iVar1 + -999;
      iVar1 = iVar1 + 1;
    } while (iVar3 < iVar2);
  }
  _SfMetric_Close_4(local_20c);
  return 1;
}


