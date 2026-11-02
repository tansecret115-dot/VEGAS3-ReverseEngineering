/* Module: vidcap30.exe
   Function: FUN_00457a70
   Address: 00457a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457a70(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (((param_3 == 3) || (param_3 == 4)) || (bVar4 = false, param_3 == 5)) {
    bVar4 = true;
  }
  if (((param_3 == 6) || (param_3 == 7)) || (bVar5 = false, param_3 == 8)) {
    bVar5 = true;
  }
  if (((param_3 == 1) || (param_3 == 4)) || (bVar6 = false, param_3 == 7)) {
    bVar6 = true;
  }
  if (((param_3 == 2) || (param_3 == 5)) || (bVar7 = false, param_3 == 8)) {
    bVar7 = true;
  }
  iVar1 = *(int *)(param_2 + 0x194);
  bVar2 = param_4[3] - param_4[1] < iVar1;
  bVar3 = param_4[2] - *param_4 < *(int *)(param_2 + 400);
  if ((bVar4) && (bVar2)) {
    param_4[1] = param_4[3] - iVar1;
  }
  if ((bVar5) && (bVar2)) {
    param_4[3] = *(int *)(param_2 + 0x194) + param_4[1];
  }
  if ((bVar6) && (bVar3)) {
    *param_4 = param_4[2] - *(int *)(param_2 + 400);
  }
  if ((bVar7) && (bVar3)) {
    param_4[2] = *(int *)(param_2 + 400) + *param_4;
  }
  return;
}


