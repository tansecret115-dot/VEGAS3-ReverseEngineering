/* Module: aviplug.dll
   Function: FUN_5f95c980
   Address: 5f95c980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f95c980(int param_1)

{
  int iVar1;
  short *psVar2;
  
  if (param_1 != 0) {
    psVar2 = *(short **)(param_1 + 0x424);
    if (psVar2 == (short *)0x0) {
      return 1;
    }
    if (*(int *)(psVar2 + 9) == 0) {
      return 1;
    }
    if (*(short **)(psVar2 + 0xb) != (short *)0x0) {
      psVar2 = *(short **)(psVar2 + 0xb);
    }
    iVar1 = *(int *)(psVar2 + 2);
    if ((((*psVar2 == 1) && (((iVar1 == 32000 || (iVar1 == 0xac44)) || (iVar1 == 48000)))) &&
        (psVar2[7] == 0x10)) || ((iVar1 == 32000 && (psVar2[7] == 0xc)))) {
      return 1;
    }
  }
  return 0;
}


