/* Module: vegas30k.dll
   Function: FUN_010704e0
   Address: 010704e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_010704e0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char local_248 [64];
  char local_208 [260];
  undefined1 local_104 [260];
  
  _splitpath(param_2,(char *)0x0,(char *)0x0,local_208,local_248);
  _SfGetPathNameFromFilePath_12(param_1 + 0x678,local_104,0x104);
  SfPrintF(param_4,"%s%s%d%s",local_104,local_208,param_3,local_248);
  return;
}


