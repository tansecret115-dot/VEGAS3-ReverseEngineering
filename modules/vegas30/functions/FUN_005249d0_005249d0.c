/* Module: vegas30.exe
   Function: FUN_005249d0
   Address: 005249d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005249d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 4), iVar2 != 0)) {
    switch(*(undefined4 *)(param_1 + 0x104)) {
    case 0:
    case 1:
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 8) + 8) + iVar3 * 4);
          iVar1 = iVar2 + 0x10;
          iVar2 = FUN_00508b40(iVar1,iVar2,0x104);
          if (iVar2 == 0) {
            _SfLoadString_16(DAT_00647204,0x4f9c,iVar1,0x104);
          }
          iVar1 = *(int *)(param_1 + 0x84);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + 4));
        FUN_00524880(param_1);
        return;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 8) + 8) + iVar3 * 4);
          iVar1 = iVar2 + 0x10;
          iVar2 = FUN_00508960(iVar1,iVar2,0x104);
          if (iVar2 == 0) {
            _SfLoadString_16(DAT_00647204,0x4f9c,iVar1,0x104);
          }
          iVar1 = *(int *)(param_1 + 0x84);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + 4));
      }
    }
    FUN_00524880(param_1);
  }
  return;
}


