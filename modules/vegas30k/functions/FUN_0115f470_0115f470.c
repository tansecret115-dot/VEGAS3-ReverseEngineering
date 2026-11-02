/* Module: vegas30k.dll
   Function: FUN_0115f470
   Address: 0115f470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115f470(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  FUN_0115eea0(param_1,0xda);
  FUN_0115eec0(param_1,*(int *)(param_1 + 0x111) * 2 + 6);
  FUN_0115ee60(param_1,*(undefined4 *)(param_1 + 0x111));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x111)) {
    piVar3 = (int *)(param_1 + 0x115);
    do {
      puVar1 = (undefined4 *)*piVar3;
      FUN_0115ee60(param_1,*puVar1);
      iVar2 = puVar1[5];
      iVar5 = puVar1[6];
      if ((*(char *)(param_1 + 0x104) != '\0') &&
         ((*(int *)(param_1 + 0x159) != 0 ||
          ((iVar5 = 0, *(int *)(param_1 + 0x161) != 0 && (*(char *)(param_1 + 0xe6) == '\0')))))) {
        iVar2 = 0;
      }
      FUN_0115ee60(param_1,iVar2 * 0x10 + iVar5);
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x111));
  }
  FUN_0115ee60(param_1,*(undefined4 *)(param_1 + 0x159));
  FUN_0115ee60(param_1,*(undefined4 *)(param_1 + 0x15d));
  FUN_0115ee60(param_1,*(int *)(param_1 + 0x161) * 0x10 + *(int *)(param_1 + 0x165));
  return;
}


