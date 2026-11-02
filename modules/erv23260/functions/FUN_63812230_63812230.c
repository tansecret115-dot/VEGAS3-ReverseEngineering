/* Module: erv23260.dll
   Function: FUN_63812230
   Address: 63812230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63812230(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)((int)param_1 + 0x18) * *(int *)((int)param_1 + 0x14) != 0) {
    do {
      iVar1 = *(int *)((int)param_1 + 0x118);
      iVar4 = FUN_638128a0((int)param_1);
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x110) + uVar6 * 4);
      iVar3 = *(int *)((int)param_1 + 0x120);
      uVar5 = FUN_63812500(param_1,uVar6);
      *(char *)(iVar4 * iVar1 + iVar2 + iVar3 + 2 + iVar1 * 8) = (char)uVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)((int)param_1 + 0x18) * *(int *)((int)param_1 + 0x14)));
  }
  return;
}


