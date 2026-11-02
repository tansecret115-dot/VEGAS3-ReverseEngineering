/* Module: vidcap30.exe
   Function: FUN_0055dac0
   Address: 0055dac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055dac0(int param_1)

{
  int iVar1;
  
  FUN_0055db30(param_1,param_1 + 0x8a,*(undefined4 *)(param_1 + 0xb12));
  FUN_0055db30(param_1,param_1 + 0x97e,*(undefined4 *)(param_1 + 0xb1e));
  FUN_0055d500(param_1,param_1 + 0xb26);
  iVar1 = 0x12;
  do {
    if (*(short *)(param_1 + 0xa74 + (uint)(byte)(&DAT_005a0028)[iVar1] * 4) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)(param_1 + 0x169b) = *(int *)(param_1 + 0x169b) + iVar1 * 3 + 0x11;
  return;
}


