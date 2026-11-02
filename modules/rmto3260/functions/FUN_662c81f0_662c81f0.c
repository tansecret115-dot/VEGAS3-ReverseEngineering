/* Module: rmto3260.dll
   Function: FUN_662c81f0
   Address: 662c81f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c81f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x48);
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
        piVar4 = (int *)FUN_662ed930(&param_1);
        piVar4 = (int *)*piVar4;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    (**(code **)(**(int **)(iVar2 + 0x48) + 8))();
    if (*(undefined4 **)(iVar2 + 0x48) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar2 + 0x48))(1);
    }
    *(undefined4 *)(iVar2 + 0x48) = 0;
  }
  *(undefined4 *)(iVar2 + 0x40) = 0;
  return 0;
}


