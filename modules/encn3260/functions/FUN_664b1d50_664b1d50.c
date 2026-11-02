/* Module: encn3260.dll
   Function: FUN_664b1d50
   Address: 664b1d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b1d50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BITMAPINFO *pBVar4;
  uint *puVar5;
  BITMAPINFO local_434 [24];
  uint *local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x49a) == 0) && (*(int *)(param_1 + 0x49e) == 0)) {
    iVar1 = FUN_664aaa70(*(int *)(param_1 + 0x3a));
    FUN_664b3690(iVar1);
    pBVar4 = local_434;
    for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pBVar4->bmiHeader).biSize = 0;
      pBVar4 = (BITMAPINFO *)&(pBVar4->bmiHeader).biWidth;
    }
    local_c = (uint *)(iVar1 + 0x48);
    FUN_664b59c0((uint *)(iVar1 + 0x48),(DWORD *)local_434);
    iVar2 = FUN_664ba320((int)local_434);
    pBVar4 = local_434;
    for (iVar3 = 0x10a; iVar3 != 0; iVar3 = iVar3 + -1) {
      (pBVar4->bmiHeader).biSize = 0;
      pBVar4 = (BITMAPINFO *)&(pBVar4->bmiHeader).biWidth;
    }
    local_8 = iVar2;
    FUN_664ba7d0((uint *)local_434,0x428,iVar2,*(uint *)(*(int *)(param_1 + 0x42) + 4),
                 *(uint *)(*(int *)(param_1 + 0x42) + 8),(undefined1 *)0x0,0);
    puVar5 = (uint *)(param_1 + 0x56);
    for (iVar2 = 0x111; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar1 = FUN_664b5f30(local_c,(uint *)(param_1 + 0x56),local_434,*(uint *)(iVar1 + 0x11a8),0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x49a) = *(undefined4 *)(*(int *)(param_1 + 0x42) + 4);
      *(undefined4 *)(param_1 + 0x49e) = *(undefined4 *)(*(int *)(param_1 + 0x42) + 8);
      *(int *)(param_1 + 0x52) = local_8;
      *(undefined4 *)(param_1 + 0x4a2) = 2;
    }
  }
  return;
}


