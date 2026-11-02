/* Module: qt4plug.dll
   Function: FUN_5f5490e0
   Address: 5f5490e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f5490e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar2 = &DAT_5f59c900;
    puVar3 = &DAT_5f5a3ab0;
    for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return 1;
  }
  puVar2 = &DAT_5f5a8ec4;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x5f5a8f28);
  if (DAT_5f5a8f28 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5f5a8f28);
    DAT_5f5a8f28 = (HGDIOBJ)0x0;
  }
  puVar2 = &DAT_5f5a8f2c;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x5f5a8f6c);
  puVar2 = &DAT_5f5a8f6c;
  do {
    if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x5f5a9058);
  puVar2 = &DAT_5f5a905c;
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
  } while ((int)puVar2 < 0x5f5a9188);
  puVar2 = &DAT_5f5a9188;
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
  } while ((int)puVar2 < 0x5f5a944c);
  return 1;
}


