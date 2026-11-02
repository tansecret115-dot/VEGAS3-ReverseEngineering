/* Module: erv33260.dll
   Function: FUN_67081d80
   Address: 67081d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67081d80(void)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    bVar1 = (&DAT_67090eb0)[iVar4];
    uVar3 = (undefined1)iVar4;
    (&DAT_6718d8b8)[(byte)(&DAT_67090ef0)[iVar4]] = uVar3;
    bVar2 = (&DAT_67090f30)[iVar4];
    (&DAT_6718d878)[bVar1] = uVar3;
    (&DAT_6718d8f8)[bVar2] = uVar3;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  return;
}


