/* Module: mp3rw.dll
   Function: FUN_00488810
   Address: 00488810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00488810(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x55);
  iVar2 = *(int *)(param_1 + 0x5d);
  if (-1 < param_5 + -1) {
    iVar6 = param_4 * 4;
    param_1 = param_5;
    do {
      puVar5 = (undefined1 *)*param_2;
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 4;
      iVar3 = *(int *)(*param_3 + -4 + iVar6);
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          *(undefined1 *)(uVar4 + iVar3) = *puVar5;
          puVar5 = puVar5 + iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


