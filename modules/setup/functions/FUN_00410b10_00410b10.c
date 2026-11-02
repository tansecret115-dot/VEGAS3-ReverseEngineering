/* Module: Setup.exe
   Function: FUN_00410b10
   Address: 00410b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00410b10(void *this,char *param_1,undefined4 param_2,uchar *param_3)

{
  char local_248 [64];
  char local_208 [260];
  uchar local_104 [260];
  
  _splitpath(param_1,(char *)0x0,(char *)0x0,local_208,local_248);
  _SfGetPathNameFromFilePath_12((uchar *)((int)this + 0x678),local_104,0x104);
  SfPrintF(param_3,(BYTE *)"%s%s%d%s");
  return;
}


