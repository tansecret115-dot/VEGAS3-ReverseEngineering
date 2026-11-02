/* Module: vegas30.exe
   Function: FUN_0043b1a0
   Address: 0043b1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_0043b1a0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_104 [260];
  
  if (param_1 == 0) {
    return (undefined1 *)0x0;
  }
  if (param_1 == 0xa778) {
    if (DAT_00647c18 == 0) {
      iVar2 = 0x4feb;
    }
    else if (DAT_00647c18 == 1) {
      iVar2 = 0x4fec;
    }
    else {
      if (DAT_00647c18 != 2) {
        return &DAT_0060f98c;
      }
      iVar2 = 0x4fed;
    }
  }
  else {
    iVar2 = 0;
    piVar3 = &DAT_00611a58;
    while (param_1 != *piVar3) {
      piVar3 = piVar3 + 2;
      iVar2 = iVar2 + 1;
      if (0x611cff < (int)piVar3) {
        return &DAT_0060f98c;
      }
    }
    iVar2 = *(int *)(&UNK_00611a5c + iVar2 * 8);
    if (iVar2 == 0) {
      return &DAT_0060f98c;
    }
  }
  puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,iVar2);
  if (param_1 == 0x9cc1) {
    puVar1 = local_104;
  }
  return puVar1;
}


