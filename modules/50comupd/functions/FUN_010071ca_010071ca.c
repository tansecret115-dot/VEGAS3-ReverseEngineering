/* Module: 50comupd.exe
   Function: FUN_010071ca
   Address: 010071ca
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010071ca(int param_1,uint *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  if (param_3 < 7) {
    *(int *)(param_1 + 0x2ec8) = *(int *)(param_1 + 0x2ec8) + param_3;
  }
  else {
    puVar1 = (undefined4 *)(param_3 + -6 + (int)param_2);
    uVar4 = *puVar1;
    uVar3 = *(undefined2 *)(puVar1 + 1);
    *puVar1 = 0xe8e8e8e8;
    *(undefined2 *)(puVar1 + 1) = 0xe8e8;
    uVar2 = *(int *)(param_1 + 0x2ec8) + -6 + param_3;
    while( true ) {
      while (puVar8 = (uint *)((int)param_2 + 1), (char)*param_2 != -0x18) {
        *(int *)(param_1 + 0x2ec8) = *(int *)(param_1 + 0x2ec8) + 1;
        param_2 = puVar8;
      }
      uVar5 = *(uint *)(param_1 + 0x2ec8);
      if (uVar2 <= uVar5) break;
      uVar6 = *puVar8;
      uVar7 = *(uint *)(param_1 + 0x2ec4);
      if (uVar6 < uVar7) {
        uVar7 = -uVar5;
LAB_01007248:
        *puVar8 = uVar6 + uVar7;
      }
      else if (-uVar6 < uVar5 || -uVar5 == uVar6) goto LAB_01007248;
      param_2 = (uint *)((int)param_2 + 5);
      *(int *)(param_1 + 0x2ec8) = *(int *)(param_1 + 0x2ec8) + 5;
    }
    *(uint *)(param_1 + 0x2ec8) = uVar2 + 6;
    *puVar1 = uVar4;
    *(undefined2 *)(puVar1 + 1) = uVar3;
  }
  return;
}


