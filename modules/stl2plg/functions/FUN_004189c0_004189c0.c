/* Module: stl2plg.dll
   Function: FUN_004189c0
   Address: 004189c0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004189c0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00418960(param_1,0,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}


