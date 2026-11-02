/* Module: vegas30.exe
   Function: FUN_004dc020
   Address: 004dc020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_004dc020(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = (int)param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar5 = 0;
  iVar6 = 0;
  iVar4 = 0;
  if (0 < *(int *)((int)param_1 + 0xd94)) {
    param_1 = (int *)((int)param_1 + 0xd88);
    do {
      if ((*param_1 != 0) && (*(int *)(iVar2 + 0xd50) != 0)) {
        iVar3 = FUN_005f13f0(*(undefined4 *)(*param_1 + 4));
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 0x24);
          if ((iVar6 <= iVar1) && ((iVar6 < iVar1 || (uVar5 < *(uint *)(iVar3 + 0x20))))) {
            uVar5 = *(uint *)(iVar3 + 0x20);
            iVar6 = iVar1;
          }
        }
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0xd94));
  }
  return CONCAT44(iVar6,uVar5);
}


