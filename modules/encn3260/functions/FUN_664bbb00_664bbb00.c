/* Module: encn3260.dll
   Function: FUN_664bbb00
   Address: 664bbb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664bbb00(void *param_1,char *param_2)

{
  char *_Dest;
  
  _Dest = (char *)FUN_664bb8a0(param_1,0x200);
  vsprintf(_Dest,param_2,&stack0x0000000c);
  FUN_664bb920(param_1,-1);
  return;
}


