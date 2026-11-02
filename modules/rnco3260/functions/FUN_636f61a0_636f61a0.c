/* Module: rnco3260.dll
   Function: FUN_636f61a0
   Address: 636f61a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_636f61a0(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 4;
  iVar4 = 4;
  do {
    iVar1 = -0x480;
    do {
      if (iVar1 < 0) {
        *(undefined1 *)((iVar3 + -4) * 0xa00 + 0x6378dbe0 + iVar1) = 0;
      }
      else {
        if (iVar1 < 0x100) {
          uVar2 = (undefined1)(iVar1 >> ((byte)iVar4 & 0x1f));
        }
        else {
          uVar2 = (undefined1)(0xff >> ((byte)iVar4 & 0x1f));
        }
        *(undefined1 *)((iVar3 + -4) * 0xa00 + 0x6378dbe0 + iVar1) = uVar2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x580);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return;
}


