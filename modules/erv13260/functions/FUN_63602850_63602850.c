/* Module: erv13260.dll
   Function: FUN_63602850
   Address: 63602850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_63602850(char *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int local_2c [3];
  int local_20 [3];
  int local_14 [3];
  void *local_8;
  
  FUN_636030d0(local_14);
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    FUN_636033b0(local_14,param_1);
  }
  do {
    if (*(int *)(local_14[0] + -8) == 0) break;
    uVar1 = FUN_636035c0(local_14,'=');
    if (uVar1 != 0xffffffff) {
      puVar2 = FUN_636035f0(local_14,local_2c,(*(int *)(local_14[0] + -8) - uVar1) - 1);
      pcVar4 = (char *)*puVar2;
      puVar2 = FUN_63603650(local_14,local_20,uVar1);
      iVar3 = FUN_63602900(local_8,(byte *)*puVar2,pcVar4);
      FUN_636031f0(local_20);
      FUN_636031f0(local_2c);
    }
    param_1 = param_1 + *(int *)(local_14[0] + -8) + 1;
    FUN_636033b0(local_14,param_1);
  } while (iVar3 == 0);
  FUN_636031f0(local_14);
  return iVar3;
}


