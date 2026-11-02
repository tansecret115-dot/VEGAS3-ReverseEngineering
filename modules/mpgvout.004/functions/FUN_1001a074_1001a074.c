/* Module: mpgvout.004
   Function: FUN_1001a074
   Address: 1001a074
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1001a074(void)

{
  undefined2 uVar1;
  int iVar3;
  int iVar2;
  
  iVar3 = -0x200;
  do {
    if (iVar3 < -0x100) {
      uVar1 = 0xff00;
    }
    else {
      iVar2 = 0xff;
      if (iVar3 < 0x100) {
        iVar2 = iVar3;
      }
      uVar1 = (undefined2)iVar2;
    }
    *(undefined2 *)(&DAT_10040100 + iVar3 * 2) = uVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x200);
  return;
}


