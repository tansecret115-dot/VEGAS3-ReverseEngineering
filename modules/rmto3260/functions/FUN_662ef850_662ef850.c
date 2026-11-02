/* Module: rmto3260.dll
   Function: FUN_662ef850
   Address: 662ef850
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662ef850(void *param_1,char *param_2)

{
  char *_Dest;
  
  _Dest = (char *)FUN_662ef590(param_1,0x200);
  vsprintf(_Dest,param_2,&stack0x0000000c);
  FUN_662ef610(param_1,-1);
  return;
}


