/* Module: vidcap30.exe
   Function: FUN_00416880
   Address: 00416880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416880(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
  if (param_1 == 0) {
    iVar2 = _SfQueueRemove_8(&DAT_005bc224,0);
    while (iVar2 != 0) {
      if (*(code **)(iVar2 + 0x1c) != (code *)0x0) {
        *(undefined4 *)(iVar2 + 0x14) = 0x8004e00c;
        (**(code **)(iVar2 + 0x1c))(iVar2,1);
      }
      iVar1 = DAT_005bb808;
      if ((*(byte *)(iVar2 + 0x18) & 2) != 0) {
        iVar3 = *(int *)(DAT_005bb808 + 0x58) + -1;
        *(int *)(DAT_005bb808 + 0x58) = iVar3;
        if (iVar3 == 0) {
          FUN_00406820(DAT_005ba4c0);
        }
        uVar4 = *(uint *)(iVar1 + 0x58);
        *(uint *)(iVar1 + 0x58) = uVar4 & ((int)uVar4 < 1) - 1;
      }
      iVar1 = DAT_005bb808;
      if ((*(byte *)(iVar2 + 0x18) & 0x10) != 0) {
        uVar4 = *(int *)(DAT_005bb808 + 0x54) - 1;
        *(uint *)(DAT_005bb808 + 0x54) = uVar4;
        *(uint *)(iVar1 + 0x54) = uVar4 & ((int)uVar4 < 1) - 1;
      }
      FUN_00416600(iVar2);
      iVar2 = _SfQueueRemove_8(&DAT_005bc224,0);
    }
  }
  else {
    DAT_005bc248 = DAT_005bc268;
    DAT_005bc24c = DAT_005bc268;
    iVar2 = _SfQueueRemove_8(&DAT_005bc224,0);
    while (iVar2 != 0) {
      DAT_005bc248 = DAT_005bc248 + 1;
      _SfQueueInsert_8(&DAT_005bc200,iVar2);
      iVar2 = _SfQueueRemove_8(&DAT_005bc224,0);
    }
  }
  DAT_005bc264 = 0;
  DAT_005bc268 = 0;
  DAT_005bc260 = 0;
  _DAT_005bc25c = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
  return;
}


