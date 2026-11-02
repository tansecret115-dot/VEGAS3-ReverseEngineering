/* Module: rmbe3260.dll
   Function: FUN_6605bfd0
   Address: 6605bfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6605bfd0(void *param_1,char *param_2)

{
  char *_Dest;
  
  _Dest = (char *)FUN_6605bc10(param_1,0x200);
  vsprintf(_Dest,param_2,&stack0x0000000c);
  FUN_6605bc90(param_1,-1);
  return;
}


