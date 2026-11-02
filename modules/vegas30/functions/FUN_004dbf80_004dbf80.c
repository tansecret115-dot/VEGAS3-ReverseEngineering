/* Module: vegas30.exe
   Function: FUN_004dbf80
   Address: 004dbf80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_004dbf80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  
  iVar1 = (int)param_1;
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar4 = 0;
    local_8 = 0;
    if (0 < *(int *)((int)param_1 + 0xd94)) {
      param_1 = (int *)((int)param_1 + 0xd88);
      do {
        iVar3 = *param_1;
        if ((((iVar3 != 0) && (iVar2 = FUN_004df1f0(iVar3), iVar2 != 0)) &&
            (*(int *)(iVar1 + 0xd50) != 0)) &&
           (iVar3 = FUN_005f13f0(*(undefined4 *)(iVar3 + 4)), iVar3 != 0)) {
          iVar2 = *(int *)(iVar3 + 0x24);
          if ((iVar4 <= iVar2) && ((iVar4 < iVar2 || (local_8 < *(uint *)(iVar3 + 0x20))))) {
            iVar4 = iVar2;
            local_8 = *(uint *)(iVar3 + 0x20);
          }
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 1;
      } while (iVar5 < *(int *)(iVar1 + 0xd94));
    }
    return CONCAT44(iVar4,local_8);
  }
  return 0;
}


