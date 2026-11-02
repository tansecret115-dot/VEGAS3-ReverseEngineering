/* Module: vegas30k.dll
   Function: FUN_0118de60
   Address: 0118de60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_0118de60(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x98) = param_2;
    iVar1 = ftol();
    *(double *)(param_1 + 0xa0) = (double)iVar1 * _DAT_011dbdc0;
  }
  return param_2 == 0;
}


