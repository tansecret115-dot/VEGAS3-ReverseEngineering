/* Module: sfs4rw.dll
   Function: FUN_0043c2e0
   Address: 0043c2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0043c2e0(void *this,char *param_1,undefined4 param_2,uchar *param_3)

{
  char local_248 [64];
  char local_208 [260];
  uchar local_104 [260];
  
  _splitpath(param_1,(char *)0x0,(char *)0x0,local_208,local_248);
  FUN_0041ca70((uchar *)((int)this + 0x678),local_104,0x104);
  FUN_00420f60(param_3,(BYTE *)"%s%s%d%s");
  return;
}


