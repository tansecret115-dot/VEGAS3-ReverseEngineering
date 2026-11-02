/* Module: vegas30k.dll
   Function: FUN_01016140
   Address: 01016140
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01016140(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_3;
  piVar1 = param_2;
  *param_2 = 0;
  iVar3 = riff_GetNumListEntries(param_1,&param_2,&param_3);
  if (iVar3 == 0) {
    if (param_2 != (int *)0x0) {
      iVar3 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,2,0,0,0);
      uVar2 = param_4;
      if (iVar3 != 0) {
        return iVar3;
      }
      if (0 < iVar4) {
        iVar3 = 0;
        param_3 = iVar4;
        do {
          iVar4 = _SfList_AllocAndInsertItem_20(*piVar1,0,0x14,0xffffffff,0);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_01015f20(param_1,*(undefined4 *)(*(int *)(*piVar1 + 8) + iVar3),&param_3,uVar2
                              );
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar3 = iVar3 + 4;
        } while (0 < param_3);
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}


