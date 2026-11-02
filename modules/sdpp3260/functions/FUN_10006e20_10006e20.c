/* Module: sdpp3260.dll
   Function: FUN_10006e20
   Address: 10006e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006e20(void *param_1,char *param_2)

{
  char *_Dest;
  
  _Dest = (char *)FUN_10006bc0(param_1,0x200);
  vsprintf(_Dest,param_2,&stack0x0000000c);
  FUN_10006c40(param_1,-1);
  return;
}


