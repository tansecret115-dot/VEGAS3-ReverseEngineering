/* Module: sfppack2.dll
   Function: FUN_5cd2ce50
   Address: 5cd2ce50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd2ce50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar2 = &DAT_5cd59080;
    puVar3 = &DAT_5cd63460;
    for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  }
  puVar2 = &DAT_5cd682f4;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x5cd68358);
  if (DAT_5cd68358 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5cd68358);
    DAT_5cd68358 = (HGDIOBJ)0x0;
  }
  puVar2 = &DAT_5cd6835c;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x5cd6839c);
  puVar2 = &DAT_5cd6839c;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x5cd68488);
  puVar2 = &DAT_5cd6848c;
  do {
    if ((HGDIOBJ)puVar2[-1] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)puVar2[-1]);
      puVar2[-1] = 0;
    }
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 3;
  } while ((int)puVar2 < 0x5cd685b8);
  puVar2 = &DAT_5cd685b8;
  do {
    if ((HGDIOBJ)puVar2[-1] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)puVar2[-1]);
      puVar2[-1] = 0;
    }
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 3;
  } while ((int)puVar2 < 0x5cd6887c);
  return 1;
}


