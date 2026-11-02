/* Module: vegas30k.dll
   Function: FUN_010c5900
   Address: 010c5900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010c5900(void)

{
  uint in_stack_00000010;
  uchar *in_stack_00000014;
  uchar local_110 [12];
  uchar local_104 [260];
  
  GetLocaleInfoA(in_stack_00000010 & 0xffff,3,(LPSTR)local_110,10);
  if (*in_stack_00000014 != '\0') {
    wsprintfA((LPSTR)local_104,"%s,%s");
    _mbscpy(in_stack_00000014,local_104);
    return 1;
  }
  _mbscpy(in_stack_00000014,local_110);
  return 1;
}


