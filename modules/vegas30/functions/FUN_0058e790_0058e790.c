/* Module: vegas30.exe
   Function: FUN_0058e790
   Address: 0058e790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0058e790(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 local_4;
  
  local_4 = 0;
  iVar2 = _SfQueueRemove_8(param_1 + 0x60,0);
  if (iVar2 == 0) {
    do {
      _DAT_0064b4c4 = 1;
      DVar3 = WaitForMultipleObjects
                        (*(DWORD *)(param_1 + 0x8c),(HANDLE *)(param_1 + 0x790),0,
                         ((DAT_0064b158 < 1) - 1 & 0xffffd8ef) + 10000);
      if (*(uint *)(param_1 + 0x8c) <= DVar3) {
        local_4 = 0x8004e02c;
        break;
      }
      iVar2 = *(int *)(param_1 + 0x9c + DVar3 * 0x1c);
      if (iVar2 == 0) {
        ResetEvent(*(HANDLE *)(param_1 + 0x790 + DVar3 * 4));
      }
      else {
        FUN_0058e180(iVar2);
      }
      iVar2 = _SfQueueRemove_8(param_1 + 0x60,0);
    } while (iVar2 == 0);
  }
  _DAT_0064b4c4 = 0;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 0x88));
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(int *)(iVar2 + 0xc) = param_2;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x10) = param_3;
    ResetEvent(*(HANDLE *)(iVar2 + 8));
    uVar1 = *(undefined4 *)(iVar2 + 8);
    *(int *)(param_2 + 0xbc) = iVar2;
    *(undefined4 *)(param_2 + 0xe8) = uVar1;
  }
  return local_4;
}


