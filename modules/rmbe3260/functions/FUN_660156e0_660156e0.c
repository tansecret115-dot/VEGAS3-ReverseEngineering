/* Module: rmbe3260.dll
   Function: FUN_660156e0
   Address: 660156e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660156e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14 [3];
  int local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x88))
                    (*(int **)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0x58))
                      (*(int **)(param_1 + 0x34),*(int *)(param_1 + 0x30));
    if (iVar2 == 0) {
      local_8 = -0x7fffbffb;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  if ((-1 < local_8) && (iVar2 = 1, 0 < iVar1)) {
    while( true ) {
      FUN_6605b650(local_14);
      FUN_6605bfd0(local_14,s__s__d_6606cd1c);
      iVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x54))
                        (*(int **)(param_1 + 0x34),local_14[0]);
      if (iVar3 == 0) break;
      FUN_6605b770(local_14);
      iVar2 = iVar2 + 1;
      if (iVar1 < iVar2) {
        return local_8;
      }
    }
    local_8 = -0x7fffbffb;
    FUN_6605b770(local_14);
  }
  return local_8;
}


