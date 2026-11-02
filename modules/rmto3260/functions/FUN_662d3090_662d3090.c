/* Module: rmto3260.dll
   Function: FUN_662d3090
   Address: 662d3090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662d3090(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  undefined4 local_1c [5];
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(iVar1 + 0x10);
    }
    local_8 = *(int *)(iVar1 + 4);
    if ((short)uVar4 != 0) {
      uVar4 = uVar4 & 0xffff;
      do {
        puVar5 = (undefined4 *)FUN_662ed930(&local_8);
        piVar2 = (int *)*puVar5;
        if (piVar2 != (int *)0x0) {
          if (*piVar2 != 0) {
            FUN_662f30d0(local_1c);
            bVar3 = FUN_662f5740(*piVar2);
            if (CONCAT31(extraout_var,bVar3) != 0) {
              FUN_662f38d0(local_1c,(char *)*piVar2);
            }
            FUN_662d08d0(piVar2);
            FUN_662f30f0(local_1c);
          }
          operator_delete(piVar2);
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    (**(code **)(**(int **)(param_1 + 0x34) + 8))();
    if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x34))(1);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


