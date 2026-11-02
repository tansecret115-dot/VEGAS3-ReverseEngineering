/* Module: mpgvout.003
   Function: FUN_10019b90
   Address: 10019b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10019b90(void)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = -0x200;
  do {
    if (iVar2 < -0x100) {
      *(undefined2 *)(&DAT_10040100 + iVar2 * 2) = 0xff00;
    }
    else {
      uVar1 = (undefined2)iVar2;
      if (0xff < iVar2) {
        uVar1 = 0xff;
      }
      *(undefined2 *)(&DAT_10040100 + iVar2 * 2) = uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x200);
  return;
}


