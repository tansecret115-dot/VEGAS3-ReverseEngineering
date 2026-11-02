/* Module: vegas30.exe
   Function: FUN_004eb440
   Address: 004eb440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004eb440(int *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  bVar2 = false;
  iVar4 = Transport_IsAnyPlaying();
  bVar6 = iVar4 == 0;
  if (param_1 != (int *)0x0) {
    iVar4 = *param_1;
    bVar3 = bVar6;
    if (0 < iVar4) {
      do {
        iVar1 = *(int *)(param_1[2] + iVar5 * 4);
        if (*(int *)(iVar1 + 0x208) == 7) {
          bVar2 = !bVar6;
          bVar6 = bVar3;
          if (bVar2) {
            FUN_005fb200(1);
            bVar6 = true;
          }
          FUN_004eb380(param_2,iVar1);
          _SfList_DeleteList_16(param_1,iVar5,1,0);
          iVar4 = iVar4 + -1;
          iVar5 = iVar5 + -1;
          bVar2 = true;
          bVar3 = bVar6;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
      if (bVar2) {
        FUN_005088e0();
      }
    }
    return 0;
  }
  return 0;
}


