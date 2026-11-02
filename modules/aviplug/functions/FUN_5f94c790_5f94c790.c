/* Module: aviplug.dll
   Function: FUN_5f94c790
   Address: 5f94c790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94c790(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(&DAT_5f9d8898 + (param_2 & 1) * 4);
  iVar1 = 0;
  piVar3 = (int *)(param_1 + iVar2 * 4);
  do {
    if (*(char *)(*piVar3 + 3) == 'P') {
      *param_3 = *(undefined4 *)(*(int *)(param_1 + iVar2 * 4) + 4);
      return 0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  *param_3 = 0xc0c01fc0;
  return 0x8004e00a;
}


