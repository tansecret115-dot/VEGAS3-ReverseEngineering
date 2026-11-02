/* Module: vegas30.exe
   Function: FUN_004e7020
   Address: 004e7020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7020(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
  if (param_1 == 0) {
    iVar2 = _SfQueueRemove_8(&DAT_0064cdac,0);
    while (iVar2 != 0) {
      if (*(code **)(iVar2 + 0x20) != (code *)0x0) {
        *(undefined4 *)(iVar2 + 0x14) = 0x8004e00c;
        *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 1;
        (**(code **)(iVar2 + 0x20))(iVar2,1);
      }
      iVar1 = DAT_0064b108;
      if ((*(byte *)(iVar2 + 0x1c) & 2) != 0) {
        *(int *)(DAT_0064b108 + 0x58) = *(int *)(DAT_0064b108 + 0x58) + -1;
        if (*(code **)(iVar2 + 0x24) != (code *)0x0) {
          (**(code **)(iVar2 + 0x24))(iVar1,iVar2,2);
        }
        if (*(int *)(iVar1 + 0x58) == 0) {
          FUN_0040dea0(DAT_0064762c);
        }
        else if ((0 < *(int *)(iVar1 + 0x58)) && (iVar3 = _SfQueueRemove_8(iVar1,0), iVar3 != 0)) {
          if (*(code **)(iVar3 + 0x24) != (code *)0x0) {
            (**(code **)(iVar3 + 0x24))(iVar1,iVar3,1);
          }
          _SfQueueInsertHead_8(iVar1,iVar3);
        }
        *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & ((int)*(uint *)(iVar1 + 0x58) < 1) - 1;
      }
      iVar1 = DAT_0064b108;
      if ((*(byte *)(iVar2 + 0x1c) & 0x10) != 0) {
        uVar4 = *(int *)(DAT_0064b108 + 0x54) - 1;
        *(uint *)(DAT_0064b108 + 0x54) = uVar4;
        *(uint *)(iVar1 + 0x54) = uVar4 & ((int)uVar4 < 1) - 1;
      }
      FUN_004e6ce0(iVar2);
      iVar2 = _SfQueueRemove_8(&DAT_0064cdac,0);
    }
  }
  else {
    DAT_0064cdd0 = DAT_0064cdf0;
    DAT_0064cdd4 = DAT_0064cdf0;
    iVar2 = _SfQueueRemove_8(&DAT_0064cdac,0);
    while (iVar2 != 0) {
      DAT_0064cdd0 = DAT_0064cdd0 + 1;
      _SfQueueInsert_8(&DAT_0064cd88,iVar2);
      iVar2 = _SfQueueRemove_8(&DAT_0064cdac,0);
    }
  }
  DAT_0064cdec = 0;
  DAT_0064cdf0 = 0;
  DAT_0064cde8 = 0;
  _DAT_0064cde4 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
  return;
}


