/* Module: vegas30.exe
   Function: FUN_00573550
   Address: 00573550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00573550(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((*(int *)(DAT_0064762c + 0x74) != 0) &&
       (piVar1 = *(int **)(*(int *)(DAT_0064762c + 0x74) + 0x80), piVar1 != (int *)0x0)) &&
      ((int *)piVar1[0xac] != (int *)0x0)) &&
     ((iVar2 = *(int *)piVar1[0xac], iVar2 != 0 && (iVar4 = 0, 0 < iVar2)))) {
    do {
      iVar3 = *(int *)(*(int *)(piVar1[0xac] + 8) + iVar4 * 4);
      if ((*(int *)(iVar3 + 8) == 2) && (param_1 == *(int *)(iVar3 + 0x224))) {
        FUN_0056a330(iVar4);
        piVar1[0xa5] = *(int *)(iVar3 + 0x268);
        piVar1[0xa6] = *(int *)(iVar3 + 0x26c);
        piVar1[0xa7] = *(int *)(iVar3 + 0x270);
        piVar1[0xa8] = *(int *)(iVar3 + 0x274);
        (**(code **)(*piVar1 + 0x54))(0x84,iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}


