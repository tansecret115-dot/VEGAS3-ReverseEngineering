/* Module: aviplug.dll
   Function: FUN_5f9758f0
   Address: 5f9758f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9758f0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = param_1[1];
  uVar6 = uVar1 & 0x1f;
  puVar4 = (uint *)(*param_1 + ((int)uVar1 >> 5) * 4);
  uVar3 = *param_2;
  param_1[1] = param_2[1] + uVar1;
  uVar1 = uVar3 & 0x1f;
  puVar2 = (uint *)(param_2[2] + ((int)uVar3 >> 5) * 4);
  if ((puVar4 != puVar2) || (uVar1 != 0)) {
    uVar5 = *puVar2 << (sbyte)uVar1;
    uVar3 = 0x20 - uVar1;
    if ((int)param_2[1] <= (int)(0x20 - uVar1)) {
      uVar3 = param_2[1];
    }
    if (uVar6 == 0) {
      *puVar4 = 0;
    }
    else {
      *puVar4 = *puVar4 & -0x80000000 >> ((sbyte)uVar6 - 1U & 0x1f);
    }
    iVar7 = uVar6 + uVar3;
    *puVar4 = *puVar4 | uVar5 >> (sbyte)uVar6;
    if ((int)(0x20 - uVar6) < 0x20) {
      uVar5 = uVar5 << ((byte)(0x20 - uVar6) & 0x1f);
    }
    else {
      uVar5 = 0;
    }
    if (0x1f < iVar7) {
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -0x20;
      *puVar4 = uVar5;
    }
    uVar1 = param_2[1] - uVar3;
    param_2[1] = uVar1;
    *param_2 = *param_2 + uVar3;
    while (uVar1 != 0) {
      puVar2 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar4 = *puVar4 | uVar1 >> ((byte)iVar7 & 0x1f);
      if (0x20 - iVar7 < 0x20) {
        uVar1 = uVar1 << ((byte)(0x20 - iVar7) & 0x1f);
      }
      else {
        uVar1 = 0;
      }
      uVar3 = param_2[1];
      puVar4[1] = uVar1;
      if (0x20 < (int)uVar3) {
        uVar3 = 0x20;
      }
      uVar1 = param_2[1] - uVar3;
      param_2[1] = uVar1;
      *param_2 = *param_2 + uVar3;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


