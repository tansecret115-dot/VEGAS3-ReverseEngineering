/* Module: vegas30.exe
   Function: FUN_0053add0
   Address: 0053add0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053add0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xc) == 400) {
    iVar1 = FUN_004452b0(*(undefined4 *)(DAT_0064762c + 0xa0));
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_004452b0(*(undefined4 *)(DAT_0064762c + 0xa0));
LAB_0053ae0c:
    return *puVar2;
  }
  if (*(int *)(param_1 + 0xc) == 0x191) {
    iVar1 = FUN_0050c130(param_1);
    if (iVar1 != 0) {
      puVar2 = *(undefined4 **)(iVar1 + 0xa4);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      goto LAB_0053ae0c;
    }
  }
  return 0;
}


