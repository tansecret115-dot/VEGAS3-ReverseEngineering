/* Module: mcplug.dll
   Function: FUN_00402fd0
   Address: 00402fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402fd0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x240) != 0) && (iVar5 = 0, 0 < *(int *)(param_1 + 0x18))) {
    iVar6 = 0;
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0x240) + iVar6);
      piVar1 = (int *)piVar4[2];
      if (piVar1 != (int *)0x0) {
        iVar2 = *piVar4;
        if (iVar2 == 1) {
          (**(code **)(*piVar1 + 0x28))(piVar1);
        }
        else if (iVar2 == 2) {
          (**(code **)(*piVar1 + 0x28))(piVar1);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_00404b00();
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x27c);
    mpegInCloseMPEG(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x27c) = uVar3;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 0;
}


