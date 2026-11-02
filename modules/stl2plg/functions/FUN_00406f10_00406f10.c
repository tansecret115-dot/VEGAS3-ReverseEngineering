/* Module: stl2plg.dll
   Function: FUN_00406f10
   Address: 00406f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00406f10(HMODULE param_1)

{
  bool bVar1;
  int3 extraout_var;
  int iVar2;
  
  _DAT_00473534 = 0;
  _DAT_00473538 = 0;
  DAT_00473530 = param_1;
  DAT_0047353c = 0;
  bVar1 = FUN_0040f480(param_1);
  iVar2 = CONCAT31(extraout_var,bVar1);
  if (-1 < extraout_var) {
    iVar2 = FUN_0040dce0(&DAT_0047353c,param_1,0,0);
    if (-1 < iVar2) {
      iVar2 = FUN_00406ea0();
    }
  }
  return -1 < iVar2;
}


