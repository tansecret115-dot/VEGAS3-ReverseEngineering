/* Module: vegas30k.dll
   Function: FUN_01015e80
   Address: 01015e80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015e80(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_3;
  iVar1 = param_1;
  iVar4 = riff_GetNumListEntries(param_1,&param_1,&param_3);
  piVar2 = param_2;
  if (iVar4 == 0) {
    if (param_1 != 0) {
      iVar4 = _SfList_CreateExZ_32(param_2,4,0xffffffff,0xffffffff,2,0,0,0);
      uVar3 = param_4;
      if (iVar4 != 0) {
        return iVar4;
      }
      if (0 < iVar5) {
        iVar4 = 0;
        param_3 = iVar5;
        do {
          iVar5 = _SfList_AllocAndInsertItem_20(*piVar2,0,0x28,0xffffffff,0);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = FUN_01015cf0(iVar1,*(undefined4 *)(*(int *)(*piVar2 + 8) + iVar4),&param_3,uVar3);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar4 = iVar4 + 4;
        } while (0 < param_3);
      }
    }
    iVar4 = 0;
  }
  return iVar4;
}


