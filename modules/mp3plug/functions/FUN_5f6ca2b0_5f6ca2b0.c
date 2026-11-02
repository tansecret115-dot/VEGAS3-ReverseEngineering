/* Module: mp3plug.dll
   Function: FUN_5f6ca2b0
   Address: 5f6ca2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ca2b0(int *param_1)

{
  int iVar1;
  
  FUN_5f6ca320((int)param_1,(int)param_1 + 0x8a,*(int *)((int)param_1 + 0xb12));
  FUN_5f6ca320((int)param_1,(int)param_1 + 0x97e,*(int *)((int)param_1 + 0xb1e));
  FUN_5f6c9cf0(param_1,(int *)((int)param_1 + 0xb26));
  iVar1 = 0x12;
  do {
    if ((short)param_1[(byte)(&DAT_5f73660c)[iVar1] + 0x29d] != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)((int)param_1 + 0x169b) = *(int *)((int)param_1 + 0x169b) + iVar1 * 3 + 0x11;
  return;
}


