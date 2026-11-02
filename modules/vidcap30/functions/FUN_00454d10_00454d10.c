/* Module: vidcap30.exe
   Function: FUN_00454d10
   Address: 00454d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454d10(int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 *param_5,
                 int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + param_2 * 4);
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_00454d4f:
    bVar5 = false;
  }
  else {
    if (param_6 == 0) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = param_3;
      piVar4 = puVar1 + 5;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) goto LAB_00454d4f;
    }
    bVar5 = true;
  }
  puVar1[5] = *param_3;
  puVar1[6] = param_3[1];
  puVar1[7] = param_3[2];
  puVar1[8] = param_3[3];
  puVar1[9] = *param_4;
  puVar1[10] = param_4[1];
  puVar1[0xb] = param_4[2];
  puVar1[0xc] = param_4[3];
  puVar1[0xd] = *param_5;
  puVar1[0xe] = param_5[1];
  puVar1[0xf] = param_5[2];
  puVar1[0x10] = param_5[3];
  if (bVar5) {
    FUN_00431c30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 8),puVar1 + 5,*puVar1,
                 0xffffffff);
  }
  return;
}


