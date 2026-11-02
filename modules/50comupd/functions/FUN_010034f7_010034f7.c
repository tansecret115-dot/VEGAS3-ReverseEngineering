/* Module: 50comupd.exe
   Function: FUN_010034f7
   Address: 010034f7
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010034f7(void)

{
  undefined4 *puVar1;
  WPARAM WVar2;
  int iVar3;
  
  puVar1 = &DAT_0100b840;
  do {
    *puVar1 = 1;
    puVar1 = puVar1 + 6;
  } while (puVar1 < &DAT_0100bc00);
  if ((((byte)DAT_0100aab8 & 1) == 0) && ((DAT_0100b6d4 & 1) == 0)) {
    WVar2 = FUN_01005962(DAT_0100b6dc,(LPCSTR)(0x7d5 - (uint)(DAT_0100a2f8 != 0)),(HWND)0x0,
                         FUN_01002f7f,0,0);
  }
  else {
    WVar2 = FUN_010046fa();
  }
  if (WVar2 == 0) {
    DAT_0100b704 = 0x8007042b;
  }
  else {
    iVar3 = FUN_01005754(FUN_01005867);
    if (iVar3 != 0) {
      DAT_0100b704 = 0;
      return 1;
    }
  }
  return 0;
}


