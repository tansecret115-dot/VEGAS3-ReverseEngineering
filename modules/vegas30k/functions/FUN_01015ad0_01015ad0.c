/* Module: vegas30k.dll
   Function: FUN_01015ad0
   Address: 01015ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015ad0(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_8;
  undefined1 local_4 [4];
  
  uVar4 = param_3;
  iVar2 = param_1;
  iVar5 = riff_GetNumListEntries(param_1,&local_8,&param_3);
  piVar3 = param_2;
  if (iVar5 == 0) {
    uVar7 = uVar4 + local_8 * -4;
    if (local_8 != 0) {
      iVar5 = _SfList_CreateExZ_32(param_2,4,0xffffffff,0xffffffff,2,0,0,0);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = 0;
      for (param_3 = uVar4; 7 < param_3; param_3 = param_3 + (-8 - param_1)) {
        iVar6 = riff_ReadChunkHeader(iVar2,local_4,&param_1);
        if (iVar6 < 0) {
          return iVar6;
        }
        if (uVar7 < param_1 + 4U) {
          uVar7 = uVar7 + (-4 - param_1);
        }
        iVar6 = _SfList_AllocAndInsertItem_20(*piVar3,0,param_1 + 4U,0xffffffff,0);
        if (iVar6 < 0) {
          return iVar6;
        }
        piVar1 = *(int **)(*(int *)(*piVar3 + 8) + iVar5);
        *piVar1 = param_1;
        iVar6 = riff_ReadData(iVar2,piVar1 + 1,param_1);
        if (iVar6 < 0) {
          return iVar6;
        }
        iVar5 = iVar5 + 4;
      }
    }
    iVar5 = 0;
  }
  return iVar5;
}


