/* Module: vegas30.exe
   Function: FUN_005f56b0
   Address: 005f56b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_005f56b0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_ESI;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piStack_24;
  int local_20 [2];
  undefined4 *local_18 [5];
  
  puVar4 = (undefined4 *)FUN_005f68f0(local_18);
  if (-1 < (int)puVar4) {
    piVar6 = local_20;
    local_20[0] = 0;
    (**(code **)*local_18[0])(local_18[0],&DAT_00610db0);
    if (unaff_ESI != (int *)0x0) {
      local_20[0] = (**(code **)(*unaff_ESI + 0x30))(unaff_ESI,param_3);
      if (local_20[0] == 0) {
        *(undefined4 *)(*(int *)(param_2 + 0x30) + 4) = *param_3;
        *(undefined4 *)(*(int *)(param_2 + 0x30) + 8) = param_3[1];
        if (DAT_0064762c != 0) {
          if (*(int *)(DAT_0064762c + 0xa4) != 0) {
            FUN_0051f0b0(*(int *)(DAT_0064762c + 0xa4));
          }
          if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
            FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
          }
        }
        iVar7 = 0;
        piStack_24 = (int *)**(int **)(param_1 + 0x1dc);
        if (0 < (int)piStack_24) {
          do {
            iVar5 = 0;
            iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + iVar7 * 4);
            iVar2 = **(int **)(iVar1 + 0x24);
            if (0 < iVar2) {
              do {
                iVar3 = *(int *)(*(int *)(*(int *)(iVar1 + 0x24) + 8) + iVar5 * 4);
                if (((*(int *)(iVar3 + 0x50) != 0) &&
                    (*(int *)(*(int *)(iVar3 + 0x50) + 0x18) == *(int *)(param_2 + 8))) &&
                   (*(int *)(iVar3 + 4) == 3)) {
                  FUN_00522150(iVar3 + 0x144,param_3,0,0);
                  FUN_005435b0(*(undefined4 *)(*(int *)(iVar3 + 0x218) + 0xdc));
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar2);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)piStack_24);
        }
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      puVar4 = local_18[0];
    }
    (**(code **)(*piStack_24 + 8))(piStack_24);
  }
  return puVar4;
}


