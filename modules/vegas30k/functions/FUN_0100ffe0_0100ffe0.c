/* Module: vegas30k.dll
   Function: FUN_0100ffe0
   Address: 0100ffe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0100ffe0(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01010030(&param_2,param_2);
  if (-1 < iVar1) {
    *param_1 = (undefined1)param_2;
    iVar1 = 0;
  }
  return iVar1;
}


