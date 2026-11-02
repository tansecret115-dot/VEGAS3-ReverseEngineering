/* Module: vegas30.exe
   Function: FUN_005d7730
   Address: 005d7730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d7730(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int local_54;
  int local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_28 [10];
  
  piVar1 = local_50;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  piVar1 = local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  local_54 = -1;
  local_50[0] = 1;
  local_50[1] = *(undefined4 *)(param_1 + 0xd7c);
  local_50[2] = *(undefined4 *)(param_1 + 0xd74);
  local_50[3] = *(undefined4 *)(param_1 + 0xd78);
  local_40 = *(undefined4 *)(param_1 + 0xd80);
  local_38 = *(undefined4 *)(param_1 + 0xda0);
  local_34 = *(undefined4 *)(param_1 + 0xda4);
  local_3c = *(undefined4 *)(param_1 + 0xd84);
  iVar3 = 0;
  piVar1 = &DAT_00646980;
  do {
    local_30 = piVar1[8];
    iVar4 = 10;
    bVar7 = true;
    piVar5 = local_50;
    piVar6 = piVar1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *piVar5 == *piVar6;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar7);
    iVar4 = iVar3;
    if (bVar7) break;
    piVar1 = piVar1 + 10;
    iVar3 = iVar3 + 1;
    iVar4 = local_54;
  } while ((int)piVar1 < 0x646b60);
  local_54 = iVar4;
  if ((param_2 == 0) || (local_54 != -1)) {
    return local_54;
  }
  local_30 = 0;
  iVar3 = FUN_005d74f0();
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = FUN_005d6910(iVar4,local_28);
      if (iVar2 != 0) {
        iVar2 = 10;
        bVar7 = true;
        piVar1 = local_50;
        piVar5 = local_28;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar7 = *piVar1 == *piVar5;
          piVar1 = piVar1 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar7);
        if (bVar7) {
          return iVar4 + 0xc;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return -1;
}


