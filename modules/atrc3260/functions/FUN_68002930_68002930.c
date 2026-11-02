/* Module: atrc3260.dll
   Function: FUN_68002930
   Address: 68002930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_68002930(char *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int local_2c [3];
  int local_20 [3];
  int local_14 [3];
  void *local_8;
  
  FUN_68003140(local_14);
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    FUN_68003420(local_14,param_1);
  }
  do {
    if (*(int *)(local_14[0] + -8) == 0) break;
    uVar1 = FUN_68003630(local_14,'=');
    if (uVar1 != 0xffffffff) {
      puVar2 = FUN_68003660(local_14,local_2c,(*(int *)(local_14[0] + -8) - uVar1) - 1);
      pcVar4 = (char *)*puVar2;
      puVar2 = FUN_680036c0(local_14,local_20,uVar1);
      iVar3 = FUN_680029e0(local_8,(byte *)*puVar2,pcVar4);
      FUN_68003260(local_20);
      FUN_68003260(local_2c);
    }
    param_1 = param_1 + *(int *)(local_14[0] + -8) + 1;
    FUN_68003420(local_14,param_1);
  } while (iVar3 == 0);
  FUN_68003260(local_14);
  return iVar3;
}


