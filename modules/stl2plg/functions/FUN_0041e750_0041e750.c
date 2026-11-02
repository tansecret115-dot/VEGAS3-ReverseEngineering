/* Module: stl2plg.dll
   Function: FUN_0041e750
   Address: 0041e750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e750(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      puVar3 = &DAT_004718f4;
    }
    else if (bVar1 == 2) {
      puVar3 = &DAT_004719f4;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar3 = &DAT_00471af4;
    }
    for (; param_2 < pbVar2; param_2 = param_2 + 1) {
      *param_2 = puVar3[*param_2];
    }
  }
  return;
}


