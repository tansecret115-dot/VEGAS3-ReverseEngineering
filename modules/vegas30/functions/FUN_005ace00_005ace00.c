/* Module: vegas30.exe
   Function: FUN_005ace00
   Address: 005ace00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_005ace00(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_ESI;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  uint local_10 [4];
  
  puVar5 = local_10;
  piVar4 = param_2 + 0x10c;
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  iVar1 = (**(code **)(*param_1 + 0x3c))
                    (param_1,param_4,param_5,param_2 + 0x10b,piVar4,puVar5,local_10 + 1,local_10 + 2
                     ,param_6,param_7);
  if (iVar1 == 0) {
    if (piVar4[4] == 3) {
      iVar1 = 0xc;
    }
    else {
      iVar1 = piVar4[8] << 2;
    }
    if ((uint)(iVar1 + *piVar4) < 0x429) {
      if (piVar4[4] == 3) {
        iVar1 = 0xc;
      }
      else {
        iVar1 = piVar4[8] << 2;
      }
      uVar2 = iVar1 + *piVar4;
    }
    else {
      uVar2 = 0x428;
    }
    piVar6 = (int *)*param_2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)piVar6 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar6 = (int *)((int)piVar6 + 1);
    }
    if (unaff_ESI != (uint *)0x0) {
      uVar2 = *unaff_ESI;
      if (*puVar5 <= *unaff_ESI) {
        uVar2 = *puVar5;
      }
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_ESI = *puVar5;
        puVar5 = puVar5 + 1;
        unaff_ESI = unaff_ESI + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)unaff_ESI = (char)*puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        unaff_ESI = (uint *)((int)unaff_ESI + 1);
      }
    }
  }
  return;
}


