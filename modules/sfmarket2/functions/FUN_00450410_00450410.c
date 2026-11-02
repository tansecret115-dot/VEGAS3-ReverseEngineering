/* Module: sfmarket2.dll
   Function: FUN_00450410
   Address: 00450410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00450410(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      puVar3 = &DAT_004a8354;
    }
    else if (bVar1 == 2) {
      puVar3 = &DAT_004a8454;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar3 = &DAT_004a8554;
    }
    for (; param_2 < pbVar2; param_2 = param_2 + 1) {
      *param_2 = puVar3[*param_2];
    }
  }
  return;
}


