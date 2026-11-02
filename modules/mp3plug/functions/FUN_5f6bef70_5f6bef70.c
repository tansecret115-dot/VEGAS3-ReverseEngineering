/* Module: mp3plug.dll
   Function: FUN_5f6bef70
   Address: 5f6bef70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6bef70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar2 = &DAT_5f735e30;
    puVar3 = &DAT_5f73e358;
    for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  }
  puVar2 = &DAT_5f7521ec;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_5f752250);
  if (DAT_5f752250 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5f752250);
    DAT_5f752250 = (HGDIOBJ)0x0;
  }
  puVar2 = &DAT_5f752254;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_5f752294);
  puVar2 = &DAT_5f752294;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_5f752380);
  puVar2 = &DAT_5f752384;
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
  } while (puVar2 < &DAT_5f7524b0);
  puVar2 = &DAT_5f7524b0;
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
  } while (puVar2 < &DAT_5f752774);
  return 1;
}


