/* Module: sfs4rw.dll
   Function: FUN_00428fb0
   Address: 00428fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428fb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar2 = &DAT_0049aac0;
    puVar3 = &DAT_004a64b8;
    for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  }
  puVar2 = &DAT_004a9d54;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_004a9db8);
  if (DAT_004a9db8 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_004a9db8);
    DAT_004a9db8 = (HGDIOBJ)0x0;
  }
  puVar2 = &DAT_004a9dbc;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_004a9dfc);
  puVar2 = &DAT_004a9dfc;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_004a9ee8);
  puVar2 = &DAT_004a9eec;
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
  } while (puVar2 < &DAT_004aa018);
  puVar2 = &DAT_004aa018;
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
  } while (puVar2 < &DAT_004aa2dc);
  return 1;
}


