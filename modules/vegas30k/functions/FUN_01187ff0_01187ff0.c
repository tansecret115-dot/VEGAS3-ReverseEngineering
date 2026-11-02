/* Module: vegas30k.dll
   Function: FUN_01187ff0
   Address: 01187ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01187ff0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_4;
  
  local_4 = param_1;
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(param_1 + 0x640) != 0) {
      (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))(*(int **)(param_1 + 0x638),0x1a,&local_4);
      (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))
                (*(int **)(param_1 + 0x638),0x1b,(undefined4 *)(param_1 + 0x878));
      uVar3 = __allmul(local_4,0,*(undefined4 *)(param_1 + 0x878),*(undefined4 *)(param_1 + 0x87c));
      *(undefined8 *)(param_1 + 0x870) = uVar3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_1 + 0x840);
    *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(param_1 + 0x844);
    *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_1 + 0x870);
    *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_1 + 0x844);
  }
  iVar2 = *(int *)(param_1 + 0x640);
  *(undefined4 *)(param_1 + 0x850) = 0;
  *(undefined4 *)(param_1 + 0x854) = 0;
  if (*(int *)(param_1 + 0x614) != 0) {
    while (iVar1 = FUN_01186c40(), iVar1 == 0) {
      if (*(int *)(param_1 + 0x24) == 0) {
        if ((iVar2 == 0) && (*(int *)(param_1 + 0x640) != 0)) {
          (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))
                    (*(int **)(param_1 + 0x638),0x1a,&local_4);
          (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))
                    (*(int **)(param_1 + 0x638),0x1b,(undefined4 *)(param_1 + 0x878));
          uVar3 = __allmul(local_4,0,*(undefined4 *)(param_1 + 0x878),
                           *(undefined4 *)(param_1 + 0x87c));
          *(undefined8 *)(param_1 + 0x870) = uVar3;
        }
        iVar2 = *(int *)(param_1 + 0x640);
      }
      iVar1 = FUN_01186cc0();
      if (iVar1 != 0) {
        return 0;
      }
      if (((*(int *)(param_1 + 0x24) == 0) && (iVar2 == 0)) && (*(int *)(param_1 + 0x640) != 0)) {
        (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))(*(int **)(param_1 + 0x638),0x1a,&local_4);
        (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))
                  (*(int **)(param_1 + 0x638),0x1b,(undefined4 *)(param_1 + 0x878));
        uVar3 = __allmul(local_4,0,*(undefined4 *)(param_1 + 0x878),*(undefined4 *)(param_1 + 0x87c)
                        );
        *(undefined8 *)(param_1 + 0x870) = uVar3;
      }
      iVar1 = FUN_01186e60();
      if (iVar1 != 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x614) == 0) {
        return 0;
      }
    }
  }
  return 0;
}


