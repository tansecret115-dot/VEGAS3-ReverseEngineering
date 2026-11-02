/* Module: vegas30.exe
   Function: FUN_005385d0
   Address: 005385d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005385d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)(param_1 + 0xcd4);
  if (*(int *)(param_1 + 0xcd4) != 0) {
    FUN_00538540(param_1);
    _SfList_Destroy_4(*puVar1);
    *puVar1 = 0;
  }
  if (*(int *)(param_1 + 0xe8c) == 400) {
    uVar4 = 0x28;
  }
  else {
    if (*(int *)(param_1 + 0xe8c) != 0x191) {
      return 1;
    }
    uVar4 = 0;
    iVar2 = 0;
    do {
      if (iVar2 == 0) {
        uVar3 = 0x7c;
      }
      else if ((iVar2 < 1) || (2 < iVar2)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x84;
      }
      if (uVar4 <= uVar3) {
        if (iVar2 == 0) {
          uVar4 = 0x7c;
        }
        else if ((iVar2 < 1) || (2 < iVar2)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0x84;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  iVar2 = _SfList_CreateExZ_32(puVar1,uVar4,0xffffffff,0xffffffff,0x40000004,0,0,0);
  if (-1 < iVar2) {
    return 1;
  }
  return 0;
}


