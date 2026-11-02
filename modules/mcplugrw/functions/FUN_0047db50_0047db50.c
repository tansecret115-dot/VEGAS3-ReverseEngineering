/* Module: mcplugrw.dll
   Function: FUN_0047db50
   Address: 0047db50
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0047db50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  uint uVar3;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,*(char *)(param_1 + 0x7f));
  if (((((*(char *)(param_1 + 0x7f) != '\0') ||
        (uVar3 = CONCAT31(uVar4,*(char *)(param_1 + 0x138)), *(char *)(param_1 + 0x138) != '\0')) ||
       (uVar3 = 0, *(int *)(param_1 + 0x61) != 3)) ||
      (((*(int *)(param_1 + 0x5d) != 3 || (*(int *)(param_1 + 0x65) != 2)) ||
       ((*(int *)(param_1 + 0x96) != 3 ||
        ((iVar1 = *(int *)(param_1 + 0xf6), *(int *)(iVar1 + 8) != 2 ||
         (uVar3 = 1, *(int *)(iVar1 + 0x59) != 1)))))))) ||
     ((*(int *)(iVar1 + 0xaa) != 1 ||
      (((((2 < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x5d) != 1)) ||
         (*(int *)(iVar1 + 0xae) != 1)) ||
        ((iVar2 = *(int *)(param_1 + 0x141), *(int *)(iVar1 + 0x24) != iVar2 ||
         (*(int *)(iVar1 + 0x75) != iVar2)))) || (*(int *)(iVar1 + 0xc6) != iVar2)))))) {
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}


