/* Module: vegas30k.dll
   Function: FUN_01153540
   Address: 01153540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01153540(uint param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar4 = param_2;
  uVar3 = param_1;
  iVar6 = 0;
  iVar1 = **(int **)(param_2 + 0x44);
  uVar5 = 0;
  if (0 < iVar1) {
    while (((piVar2 = *(int **)(*(int *)(*(int *)(uVar4 + 0x44) + 8) + iVar6 * 4), *piVar2 != 0xffff
            && (piVar2[2] != 0xffff)) &&
           ((FUN_01153480(piVar2,&param_2,local_4,&param_1,local_8), uVar3 < param_2 ||
            (param_1 < uVar3))))) {
      iVar6 = iVar6 + 1;
      if (iVar1 <= iVar6) {
        return 0;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


