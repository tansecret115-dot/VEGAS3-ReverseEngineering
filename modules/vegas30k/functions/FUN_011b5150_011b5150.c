/* Module: vegas30k.dll
   Function: FUN_011b5150
   Address: 011b5150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b5150(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = &PTR_LAB_011eb638;
  if ((int *)param_1[4] != (int *)0x0) {
    iVar1 = *(int *)param_1[4];
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1[4] + 8);
        iVar4 = *(int *)(param_1[4] + 4) * iVar5;
        piVar3 = *(int **)(iVar4 + 0x18 + iVar2);
        (**(code **)(*piVar3 + 8))(piVar3);
        iVar5 = iVar5 + 1;
        *(undefined4 *)(iVar4 + iVar2 + 0x18) = 0;
      } while (iVar5 < iVar1);
    }
    _SfList_Destroy_4(param_1[4]);
    param_1[4] = 0;
  }
  return;
}


