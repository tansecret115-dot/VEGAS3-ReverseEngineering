/* Module: vegas30.exe
   Function: FUN_004ed410
   Address: 004ed410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_004ed410(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = &DAT_0060f98c;
  iVar3 = 0;
  piVar2 = &DAT_006140e8;
  do {
    if (param_1 == *piVar2) {
      if (*(int *)(&UNK_006140ec + iVar3 * 8) != 0) {
        puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,*(int *)(&UNK_006140ec + iVar3 * 8));
      }
      return puVar1;
    }
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x614138);
  return puVar1;
}


