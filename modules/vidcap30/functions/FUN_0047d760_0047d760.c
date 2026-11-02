/* Module: vidcap30.exe
   Function: FUN_0047d760
   Address: 0047d760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047d760(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    ppuVar2 = &PTR_DAT_00593c34;
    puVar3 = &DAT_005b6720;
    for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  }
  puVar3 = &DAT_005bc60c;
  do {
    if ((HGDIOBJ)*puVar3 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 < &DAT_005bc670);
  if (DAT_005bc670 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_005bc670);
    DAT_005bc670 = (HGDIOBJ)0x0;
  }
  puVar3 = &DAT_005bc674;
  do {
    if ((HGDIOBJ)*puVar3 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 < &DAT_005bc6b4);
  puVar3 = &DAT_005bc6b4;
  do {
    if ((HGDIOBJ)*puVar3 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 < &DAT_005bc7a0);
  puVar3 = &DAT_005bc7a4;
  do {
    if ((HGDIOBJ)puVar3[-1] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)puVar3[-1]);
      puVar3[-1] = 0;
    }
    if ((HGDIOBJ)*puVar3 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 3;
  } while (puVar3 < &DAT_005bc8d0);
  puVar3 = &DAT_005bc8d0;
  do {
    if ((HGDIOBJ)puVar3[-1] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)puVar3[-1]);
      puVar3[-1] = 0;
    }
    if ((HGDIOBJ)*puVar3 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 3;
  } while (puVar3 < &DAT_005bcb94);
  return 1;
}


