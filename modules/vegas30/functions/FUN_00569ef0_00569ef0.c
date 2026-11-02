/* Module: vegas30.exe
   Function: FUN_00569ef0
   Address: 00569ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_00569ef0(int param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  bVar1 = false;
  lVar2 = Mixer_NumBusTypePorts(4);
  if ((lVar2 == 0) && (lVar2 = Mixer_GetNumMainBuses((ISFMixer *)0x0), lVar2 == 1)) {
    return false;
  }
  iVar3 = FUN_00569960();
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x1c) & 1) == 0)) {
    if (*(int *)(iVar3 + 8) == 1) {
      return false;
    }
    iVar5 = FUN_00568df0(iVar3);
    return iVar5 == 0;
  }
  iVar3 = **(int **)(param_1 + 0x2b0);
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar5 * 4);
      if ((*(byte *)(iVar4 + 0x1c) & 1) != 0) {
        if (*(int *)(iVar4 + 8) == 1) {
          return false;
        }
        iVar4 = FUN_00568df0(iVar4);
        if (iVar4 != 0) {
          return false;
        }
        bVar1 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return bVar1;
}


