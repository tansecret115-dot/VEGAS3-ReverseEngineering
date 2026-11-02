/* Module: rmbe3260.dll
   Function: FUN_660210d0
   Address: 660210d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660210d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10 [3];
  
  uVar3 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18c) + 0x88))
                    (*(int **)(param_1 + 0x18c),*(undefined4 *)(param_1 + 400));
  FUN_6605b650(local_10);
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      FUN_6605bfd0(local_10,s__s__d_6606cd1c);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x18c) + 0x54))
                        (*(int **)(param_1 + 0x18c),local_10[0]);
      if (iVar2 == 0) {
        uVar3 = 0x80004005;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar1);
  }
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x54))
            (*(int **)(param_1 + 0x18c),s_outputname_6606c384);
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x54))
            (*(int **)(param_1 + 0x18c),s_audiocontent_6606c374);
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x54))
            (*(int **)(param_1 + 0x18c),s_videoquality_6606c364);
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x54))(*(int **)(param_1 + 0x18c),s_multirate_6606c358)
  ;
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x54))
            (*(int **)(param_1 + 0x18c),s_playercompatibility_6606dcd4);
  FUN_6605b770(local_10);
  return uVar3;
}


