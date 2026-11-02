/* Module: rv103260.dll
   Function: FUN_636a5490
   Address: 636a5490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_636a5490(char *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int local_2c [3];
  int local_20 [3];
  int local_14 [3];
  void *local_8;
  
  FUN_636a5fa0(local_14);
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    FUN_636a6280(local_14,param_1);
  }
  do {
    if (*(int *)(local_14[0] + -8) == 0) break;
    uVar1 = FUN_636a6490(local_14,'=');
    if (uVar1 != 0xffffffff) {
      puVar2 = FUN_636a64c0(local_14,local_2c,(*(int *)(local_14[0] + -8) - uVar1) - 1);
      pcVar4 = (char *)*puVar2;
      puVar2 = FUN_636a6520(local_14,local_20,uVar1);
      iVar3 = FUN_636a5570(local_8,(byte *)*puVar2,pcVar4);
      FUN_636a60c0(local_20);
      FUN_636a60c0(local_2c);
    }
    param_1 = param_1 + *(int *)(local_14[0] + -8) + 1;
    FUN_636a6280(local_14,param_1);
  } while (iVar3 == 0);
  FUN_636a60c0(local_14);
  return iVar3;
}


