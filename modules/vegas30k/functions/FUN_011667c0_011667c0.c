/* Module: vegas30k.dll
   Function: FUN_011667c0
   Address: 011667c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011667c0(int param_1)

{
  int iVar1;
  
  FUN_01166830(param_1,param_1 + 0x8a,*(undefined4 *)(param_1 + 0xb12));
  FUN_01166830(param_1,param_1 + 0x97e,*(undefined4 *)(param_1 + 0xb1e));
  FUN_01166200(param_1,param_1 + 0xb26);
  iVar1 = 0x12;
  do {
    if (*(short *)(param_1 + 0xa74 + (uint)(byte)(&DAT_011e92f8)[iVar1] * 4) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)(param_1 + 0x169b) = *(int *)(param_1 + 0x169b) + iVar1 * 3 + 0x11;
  return;
}


