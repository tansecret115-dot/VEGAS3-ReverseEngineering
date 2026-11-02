/* Module: vegas30.exe
   Function: FUN_00426710
   Address: 00426710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426710(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (((DAT_0064762c != 0) && (iVar3 = *(int *)(DAT_0064762c + 0x80), iVar3 != 0)) &&
     (iVar1 = *(int *)(iVar3 + 0x934) + -1, *(int *)(iVar3 + 0x934) = iVar1, iVar1 < 1)) {
    puVar2 = (undefined4 *)(iVar3 + 0x94);
    iVar3 = 2;
    do {
      (**(code **)(*(int *)*puVar2 + 0x28))();
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


