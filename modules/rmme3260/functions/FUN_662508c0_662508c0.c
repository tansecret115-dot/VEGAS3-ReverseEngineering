/* Module: rmme3260.dll
   Function: FUN_662508c0
   Address: 662508c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662508c0(void *param_1,char *param_2)

{
  char *_Dest;
  
  _Dest = (char *)FUN_662506b0(param_1,0x200);
  vsprintf(_Dest,param_2,&stack0x0000000c);
  FUN_66250730(param_1,-1);
  return;
}


