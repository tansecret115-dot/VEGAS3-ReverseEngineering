/* Module: vegas30.exe
   Function: FUN_0052d940
   Address: 0052d940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052d940(int param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  undefined1 local_8 [8];
  
  if ((DAT_0064761c & 0x800) == 0) {
    FUN_004582a0(param_1,local_8,&local_10);
    if ((((local_10 != 0 || local_c != 0) && (iVar1 = *(int *)(param_1 + 0xc9c), iVar1 != 0)) &&
        (*(int **)(iVar1 + 0x18) != (int *)0x0)) &&
       (((iVar2 = **(int **)(iVar1 + 0x18), 0 < iVar2 && (-1 < *(int *)(iVar1 + 0x40))) &&
        ((*(int *)(iVar1 + 0x40) < iVar2 && (*(int *)(iVar1 + 0x4c) != 0)))))) {
      return 1;
    }
  }
  return 0;
}


