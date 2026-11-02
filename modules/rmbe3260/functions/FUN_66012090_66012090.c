/* Module: rmbe3260.dll
   Function: FUN_66012090
   Address: 66012090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66012090(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x24))
                    (*(int **)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x78),
                     *(undefined4 *)(param_1 + 0x2c));
  if ((-1 < iVar4) && (piVar1 = (int *)(param_1 + 0x58), param_1 = 0, 0 < *piVar1)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x54) + param_1 * 4);
      iVar4 = FUN_6603bfc0((int *)*puVar2,puVar2 + 0xd,puVar2 + 0xb);
      iVar4 = FUN_660157a0(iVar4);
      if ((-1 < iVar4) &&
         (iVar4 = (**(code **)(**(int **)(iVar3 + 0x7c) + 0x24))
                            (*(int **)(iVar3 + 0x7c),puVar2[0xe],puVar2[0xd]), -1 < iVar4)) {
        (**(code **)(**(int **)(iVar3 + 0x7c) + 0x24))
                  (*(int **)(iVar3 + 0x7c),puVar2[0xc],puVar2[0xb]);
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar3 + 0x58));
  }
  return;
}


