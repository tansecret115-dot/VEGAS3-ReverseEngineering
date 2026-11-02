/* Module: rmto3260.dll
   Function: FUN_662c2e40
   Address: 662c2e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c2e40(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint local_10 [3];
  
  piVar3 = param_1;
  bVar2 = false;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  iVar4 = (**(code **)(*param_1 + 0x34))(param_1);
  if ((-1 < iVar4) && (iVar4 = (**(code **)(*param_1 + 0x84))(param_1), -1 < iVar4)) {
    iVar1 = param_1[7];
    param_1 = (int *)0x0;
    if (iVar1 != 2) {
      do {
        if ((iVar4 != 0) || (bVar2)) break;
        iVar4 = (**(code **)(*piVar3 + 0x30))(piVar3,local_10);
        if (-1 < iVar4) {
          if (local_10[0] < 0x44415442) {
            if (local_10[0] == 0x44415441) {
LAB_662c2ef6:
              bVar2 = true;
            }
            else if (local_10[0] == 0x434f4e54) {
              iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,local_10);
            }
            else {
LAB_662c2ed2:
              iVar4 = (**(code **)(*piVar3 + 0x44))(piVar3,local_10);
            }
          }
          else {
            if (local_10[0] == 0x494e4458) goto LAB_662c2ef6;
            if (local_10[0] == 0x4d445052) {
              iVar4 = (**(code **)(*piVar3 + 0x3c))(piVar3,local_10);
            }
            else {
              if (local_10[0] != 0x50524f50) goto LAB_662c2ed2;
              iVar4 = (**(code **)(*piVar3 + 0x38))(piVar3,local_10);
            }
          }
        }
        param_1 = (int *)((int)param_1 + 1);
      } while (param_1 < (int *)(iVar1 - 2U));
    }
  }
  if (-1 < iVar4) {
    (**(code **)(*piVar3 + 0x48))(piVar3);
  }
  return;
}


