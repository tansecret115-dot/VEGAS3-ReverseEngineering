/* Module: aviplug.dll
   Function: FUN_5f975750
   Address: 5f975750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f975750(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *local_8;
  uint *local_4;
  
  puVar1 = param_2;
  puVar2 = *(uint **)(param_1 + 8);
  uVar7 = puVar2[2];
  do {
    if (uVar7 == 0) {
      return;
    }
    param_2 = (uint *)(*puVar2 & 0x1f);
    local_8 = (uint *)(uVar7 + ((int)*puVar2 >> 5) * 4);
    iVar5 = (int)*puVar1 >> 5;
    uVar3 = *puVar1 & 0x1f;
    local_4 = (uint *)(puVar1[2] + iVar5 * 4 + 4);
    uVar7 = *(int *)(puVar1[2] + iVar5 * 4) << (sbyte)uVar3;
    uVar3 = 0x20 - uVar3;
    if ((int)puVar1[1] <= (int)uVar3) {
      uVar3 = puVar1[1];
    }
    if (puVar2[1] == 0) {
LAB_5f9758be:
      puVar2 = (uint *)(*(int *)(param_1 + 8) + 0x10);
      *(uint **)(param_1 + 8) = puVar2;
    }
    else {
      while( true ) {
        uVar8 = 0x20 - (int)param_2;
        uVar6 = uVar7 >> ((byte)param_2 & 0x1f);
        uVar4 = puVar2[1];
        if ((int)uVar4 < (int)uVar8) {
          uVar6 = uVar6 & 0xffff0000;
          if ((int)uVar3 <= (int)uVar4) {
            uVar4 = uVar3;
          }
        }
        else {
          uVar4 = uVar3;
          if ((int)uVar8 <= (int)uVar3) {
            uVar4 = uVar8;
          }
        }
        *puVar2 = *puVar2 + uVar4;
        uVar8 = uVar3 - uVar4;
        *local_8 = *local_8 | uVar6;
        *puVar1 = *puVar1 + uVar4;
        puVar1[1] = puVar1[1] - uVar4;
        uVar3 = puVar2[1];
        puVar2[1] = uVar3 - uVar4;
        if ((int)uVar4 < 0x20) {
          uVar7 = uVar7 << ((byte)uVar4 & 0x1f);
        }
        else {
          uVar7 = 0;
        }
        if ((uVar3 - uVar4 == 0) || (puVar1[1] == 0)) break;
        iVar5 = (int)param_2 + uVar4;
        if (0x1f < iVar5) {
          local_8 = local_8 + 1;
          iVar5 = iVar5 + -0x20;
        }
        uVar3 = uVar7 >> ((byte)iVar5 & 0x1f);
        uVar4 = uVar8;
        if ((int)puVar2[1] < (int)uVar8) {
          uVar3 = uVar3 & 0xffff0000;
          uVar4 = puVar2[1];
        }
        uVar7 = uVar7 << ((byte)uVar4 & 0x1f);
        *local_8 = *local_8 | uVar3;
        *puVar1 = *puVar1 + uVar4;
        uVar6 = puVar1[1] - uVar4;
        puVar2[1] = puVar2[1] - uVar4;
        uVar3 = *puVar2;
        puVar1[1] = uVar6;
        *puVar2 = uVar3 + uVar4;
        param_2 = (uint *)(iVar5 + uVar4);
        uVar3 = uVar8 - uVar4;
        if (uVar8 - uVar4 == 0) {
          uVar7 = *local_4;
          local_4 = local_4 + 1;
          uVar3 = 0x20;
          if ((int)uVar6 < 0x21) {
            uVar3 = uVar6;
          }
        }
        if ((uVar6 == 0) || (puVar2[1] == 0)) break;
      }
      if (puVar2[1] == 0) goto LAB_5f9758be;
    }
    if (puVar1[1] == 0) {
      return;
    }
    uVar7 = puVar2[2];
  } while( true );
}


