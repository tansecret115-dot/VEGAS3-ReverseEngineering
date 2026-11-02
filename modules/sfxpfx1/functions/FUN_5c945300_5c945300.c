/* Module: sfxpfx1.dll
   Function: FUN_5c945300
   Address: 5c945300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5c945300(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  int iStack00000004;
  
  *(double *)(param_1 + 0xd8) = *(double *)(param_1 + 0x70) * _DAT_5c98b9a8;
  *(double *)(param_1 + 0xe0) = *(double *)(param_1 + 0x70) * _DAT_5c98b9a0;
  iStack00000004 = ftol();
  *(double *)(param_1 + 0xb0) = (double)iStack00000004;
  iVar1 = ftol();
  *(double *)(param_1 + 0xa0) = (double)iVar1;
  *(double *)(param_1 + 0xa8) = _DAT_5c98b950 / (double)iVar1;
  *(double *)(param_1 + 0x70) = (double)extraout_ST0;
  return 0;
}


