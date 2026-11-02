/* Module: rmbe3260.dll
   Function: FUN_660151d0
   Address: 660151d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660151d0(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  undefined4 uVar7;
  byte *local_18 [3];
  int *local_c;
  int *local_8;
  
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  local_c = (int *)0x0;
  iVar3 = (**(code **)(*param_2 + 0xc))(param_2,&local_c);
  if ((iVar3 < 0) || (iVar3 == 0x40012)) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    local_8 = (int *)0x0;
    iVar3 = (**(code **)*local_c)(local_c,&DAT_66065b08,&local_8);
    if (-1 < iVar3) {
      FUN_6605b650(local_18);
      uVar7 = 0xff;
      iVar3 = *local_8;
      iVar4 = FUN_6605bc10(local_18,0xff);
      iVar3 = (**(code **)(iVar3 + 0xc))(local_8,iVar4,uVar7);
      if (-1 < iVar3) {
        pbVar5 = *(byte **)(param_1 + -0x3c);
        do {
          bVar1 = *local_18[0];
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_66015286:
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_6601528b;
          }
          if (bVar1 == 0) break;
          bVar1 = local_18[0][1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_66015286;
          local_18[0] = local_18[0] + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_6601528b:
        if (iVar4 == 0) {
          piVar2 = *(int **)(param_1 + 8);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *(undefined4 *)(param_1 + 8) = 0;
          }
          *(int **)(param_1 + 8) = param_2;
          (**(code **)(*param_2 + 4))(param_2);
        }
        else {
          iVar3 = -0x7ff8ffa9;
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      FUN_6605b770((int *)local_18);
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
    }
  }
  if (-1 < iVar3) {
    if (iVar3 == 0x40012) {
      iVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return iVar3;
}


