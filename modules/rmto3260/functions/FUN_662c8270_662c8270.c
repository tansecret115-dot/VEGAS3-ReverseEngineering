/* Module: rmto3260.dll
   Function: FUN_662c8270
   Address: 662c8270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c8270(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar1 + 0x10);
    }
    param_1 = *(int *)(iVar1 + 4);
    if ((short)uVar3 != 0) {
      uVar3 = uVar3 & 0xffff;
      do {
        puVar4 = (undefined4 *)FUN_662ed930(&param_1);
        puVar4 = (undefined4 *)*puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          FUN_662da6e0(puVar4);
          operator_delete(puVar4);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    (**(code **)(**(int **)(iVar2 + 0x4c) + 8))();
    if (*(undefined4 **)(iVar2 + 0x4c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar2 + 0x4c))(1);
    }
    *(undefined4 *)(iVar2 + 0x4c) = 0;
  }
  return 0;
}


