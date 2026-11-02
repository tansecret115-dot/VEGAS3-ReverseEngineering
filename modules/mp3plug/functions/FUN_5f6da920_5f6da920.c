/* Module: mp3plug.dll
   Function: FUN_5f6da920
   Address: 5f6da920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6da920(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int *in_stack_00000014;
  undefined1 *in_stack_00000018;
  
  pcVar2 = &DAT_5f73fd50;
  FUN_5f6e6740((int *)(param_1 + 0xbc));
  for (iVar3 = *(int *)(param_1 + 0xcc); 8 < iVar3; iVar3 = iVar3 + -8) {
    FUN_5f6e62d0(*(int **)(param_1 + 0x114),(int)*pcVar2,8);
    if (*pcVar2 == '\0') {
      pcVar2 = &DAT_5f73fd50;
    }
    else {
      pcVar2 = pcVar2 + 1;
    }
  }
  FUN_5f6e62d0(*(int **)(param_1 + 0x114),0,iVar3);
  iVar3 = FUN_5f6e6dd0(param_1 + 0x11c,*(int *)(param_1 + 0x118));
  iVar3 = (int)(iVar3 + ((uint)(iVar3 >> 2) >> 0x1d)) >> 3;
  if (0 < iVar3) {
    puVar4 = in_stack_00000018 + iVar3;
    do {
      uVar1 = FUN_5f6e5f50(*(int **)(param_1 + 0x118),8);
      *in_stack_00000018 = (char)uVar1;
      in_stack_00000018 = in_stack_00000018 + 1;
    } while ((int)in_stack_00000018 < (int)puVar4);
  }
  *in_stack_00000014 = iVar3;
  return 1;
}


