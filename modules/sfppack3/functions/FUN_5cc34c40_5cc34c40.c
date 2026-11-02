/* Module: sfppack3.dll
   Function: FUN_5cc34c40
   Address: 5cc34c40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cc34c40(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  int iStack00000004;
  
  *(double *)(param_1 + 0xd0) = *(double *)(param_1 + 0x68) * _DAT_5cc87d38;
  *(double *)(param_1 + 0xd8) = *(double *)(param_1 + 0x68) * _DAT_5cc87d30;
  iStack00000004 = ftol();
  *(double *)(param_1 + 0xa8) = (double)iStack00000004;
  iVar1 = ftol();
  *(double *)(param_1 + 0x98) = (double)iVar1;
  *(double *)(param_1 + 0xa0) = _DAT_5cc87ce8 / (double)iVar1;
  *(double *)(param_1 + 0x68) = (double)extraout_ST0;
  return 0;
}


