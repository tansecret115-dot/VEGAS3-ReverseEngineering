/* Module: vegas30.exe
   Function: FUN_0054c3c0
   Address: 0054c3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054c3c0(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x54c) + param_2 * 0x10);
  iVar2 = 0;
  psVar1 = &DAT_00644c88;
  do {
    if (*(short *)(puVar3 + 2) == *psVar1) {
      (&DAT_00644c80)[iVar2 * 4] = *puVar3;
      (&DAT_00644c84)[iVar2 * 4] = puVar3[1];
      *(undefined4 *)(&DAT_00644c88 + iVar2 * 8) = puVar3[2];
      *(undefined4 *)(iVar2 * 0x10 + 0x644c8c) = puVar3[3];
      return;
    }
    psVar1 = psVar1 + 8;
    iVar2 = iVar2 + 1;
  } while (psVar1 < &DAT_00644e28);
  return;
}


