/* Module: sfcdi.dll
   Function: FUN_5bf37470
   Address: 5bf37470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf37470(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar2 = &DAT_5bf5af9c;
    puVar3 = &DAT_5bf65858;
    for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  }
  puVar2 = &DAT_5bf76724;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_5bf76788);
  if (DAT_5bf76788 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5bf76788);
    DAT_5bf76788 = (HGDIOBJ)0x0;
  }
  puVar2 = &DAT_5bf7678c;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_5bf767cc);
  puVar2 = &DAT_5bf767cc;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_5bf768b8);
  puVar2 = &DAT_5bf768bc;
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
  } while (puVar2 < &DAT_5bf769e8);
  puVar2 = &DAT_5bf769e8;
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
  } while (puVar2 < &DAT_5bf76cac);
  return 1;
}


