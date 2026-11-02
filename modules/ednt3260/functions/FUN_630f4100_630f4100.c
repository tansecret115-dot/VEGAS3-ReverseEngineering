/* Module: ednt3260.dll
   Function: FUN_630f4100
   Address: 630f4100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f4100(int param_1)

{
  if (*(short *)(param_1 + 0x20) != 0) {
    FUN_630f4810(*(double **)(param_1 + 0x868),1,*(double **)(param_1 + 0x868),1,
                 (double *)(param_1 + 0x9fc),(double *)&DAT_63100d38,4,0x100);
  }
  return;
}


