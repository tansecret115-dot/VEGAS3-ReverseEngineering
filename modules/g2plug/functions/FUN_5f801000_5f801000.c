/* Module: g2plug.dll
   Function: FUN_5f801000
   Address: 5f801000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f801000(HMODULE param_1)

{
  int iVar1;
  
  DAT_5f877464 = 0;
  _DAT_5f877468 = 0;
  DAT_5f877460 = param_1;
  DAT_5f87746c = 0;
  FUN_5f819290(param_1);
  iVar1 = FUN_5f817af0(&DAT_5f87746c,param_1,0,0);
  return -1 < iVar1;
}


