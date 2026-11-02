/* Module: dnet3260.dll
   Function: FUN_630527b0
   Address: 630527b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_630527b0(char *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int local_2c [3];
  int local_20 [3];
  int local_14 [3];
  void *local_8;
  
  FUN_63052fc0(local_14);
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    FUN_630532a0(local_14,param_1);
  }
  do {
    if (*(int *)(local_14[0] + -8) == 0) break;
    uVar1 = FUN_630534b0(local_14,'=');
    if (uVar1 != 0xffffffff) {
      puVar2 = FUN_630534e0(local_14,local_2c,(*(int *)(local_14[0] + -8) - uVar1) - 1);
      pcVar4 = (char *)*puVar2;
      puVar2 = FUN_63053540(local_14,local_20,uVar1);
      iVar3 = FUN_63052860(local_8,(byte *)*puVar2,pcVar4);
      FUN_630530e0(local_20);
      FUN_630530e0(local_2c);
    }
    param_1 = param_1 + *(int *)(local_14[0] + -8) + 1;
    FUN_630532a0(local_14,param_1);
  } while (iVar3 == 0);
  FUN_630530e0(local_14);
  return iVar3;
}


