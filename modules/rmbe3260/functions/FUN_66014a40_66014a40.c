/* Module: rmbe3260.dll
   Function: FUN_66014a40
   Address: 66014a40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66014a40(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 uVar6;
  byte *local_10 [3];
  
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  FUN_6605b650(local_10);
  iVar3 = *param_2;
  uVar6 = 0xff;
  iVar2 = FUN_6605bc10(local_10,0xff);
  iVar3 = (**(code **)(iVar3 + 0xc))(param_2,iVar2,uVar6);
  FUN_6605bc90(local_10,-1);
  if (-1 < iVar3) {
    pbVar4 = *(byte **)(param_1 + 0xc);
    do {
      bVar1 = *local_10[0];
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_66014aba:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_66014abf;
      }
      if (bVar1 == 0) break;
      bVar1 = local_10[0][1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_66014aba;
      local_10[0] = local_10[0] + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_66014abf:
    if (iVar2 == 0) {
      *(int **)(param_1 + 0x20) = param_2;
      (**(code **)(*param_2 + 4))(param_2);
    }
    else {
      iVar3 = -0x7ff8ffa9;
    }
  }
  FUN_6605b770((int *)local_10);
  return iVar3;
}


