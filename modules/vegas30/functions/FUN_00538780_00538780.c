/* Module: vegas30.exe
   Function: FUN_00538780
   Address: 00538780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00538780(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 400) {
    uVar1 = FUN_00445b50(*(undefined4 *)(DAT_0064762c + 0xa0));
    return uVar1;
  }
  if (*(int *)(param_1 + 0xc) == 0x191) {
    uVar1 = FUN_0050c130(param_1);
    uVar1 = FUN_0050af10(uVar1);
    return uVar1;
  }
  return 0;
}


