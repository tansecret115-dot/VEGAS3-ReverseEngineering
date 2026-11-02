/* Module: vegas30k.dll
   Function: FUN_01122600
   Address: 01122600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01122600(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      puVar3 = &DAT_01206c88;
    }
    else if (bVar1 == 2) {
      puVar3 = &DAT_01206d88;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar3 = &DAT_01206e88;
    }
    for (; param_2 < pbVar2; param_2 = param_2 + 1) {
      *param_2 = puVar3[*param_2];
    }
  }
  return;
}


