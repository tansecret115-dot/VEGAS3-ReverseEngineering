/* Module: vegas30.exe
   Function: FUN_0044b540
   Address: 0044b540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044b540(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_8;
  int local_4;
  
  piVar1 = param_1;
  iVar4 = 0;
  local_4 = 0;
  if ((int *)*param_2 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)*param_2;
  }
  if (0 < local_8) {
    while( true ) {
      piVar2 = (int *)*param_2;
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar2;
      }
      if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(piVar2[2] + iVar4 * 4);
      }
      if (*piVar1 == 0) {
        local_4 = _SfVideoPlugin_CreateCacheList_4(piVar1);
      }
      if (local_4 < 0) {
        return 0;
      }
      piVar2 = calloc(1,0x80);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      iVar3 = FUN_0044b490(piVar2,uVar5);
      if (iVar3 < 0) break;
      uVar5 = *(undefined4 *)*piVar1;
      iVar3 = _SfVideoFilterCache_CreateNewCookie_4((undefined4 *)*piVar1);
      piVar2[0x1c] = iVar3;
      param_1 = piVar2;
      _SfList_InsertList_16(*piVar1,uVar5,&param_1,1);
      iVar4 = iVar4 + 1;
      if (local_8 <= iVar4) {
        return 0;
      }
    }
    free(piVar2);
  }
  return 0;
}


