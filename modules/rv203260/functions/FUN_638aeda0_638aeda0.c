/* Module: rv203260.dll
   Function: FUN_638aeda0
   Address: 638aeda0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_638aeda0(char *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int local_2c [3];
  int local_20 [3];
  int local_14 [3];
  void *local_8;
  
  FUN_638af6a0(local_14);
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    FUN_638af980(local_14,param_1);
  }
  do {
    if (*(int *)(local_14[0] + -8) == 0) break;
    uVar1 = FUN_638afb90(local_14,'=');
    if (uVar1 != 0xffffffff) {
      puVar2 = FUN_638afbc0(local_14,local_2c,(*(int *)(local_14[0] + -8) - uVar1) - 1);
      pcVar4 = (char *)*puVar2;
      puVar2 = FUN_638afc20(local_14,local_20,uVar1);
      iVar3 = FUN_638aee80(local_8,(byte *)*puVar2,pcVar4);
      FUN_638af7c0(local_20);
      FUN_638af7c0(local_2c);
    }
    param_1 = param_1 + *(int *)(local_14[0] + -8) + 1;
    FUN_638af980(local_14,param_1);
  } while (iVar3 == 0);
  FUN_638af7c0(local_14);
  return iVar3;
}


