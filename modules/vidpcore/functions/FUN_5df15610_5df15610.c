/* Module: vidpcore.dll
   Function: FUN_5df15610
   Address: 5df15610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df15610(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_190 [4];
  undefined1 local_180 [24];
  int local_168 [90];
  
  FUN_5df10b20(param_1,local_190);
  uVar2 = 0;
  puVar3 = local_190;
  iVar4 = 3;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    uVar2 = uVar2 | uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (uVar2 == 0) {
    FUN_5df10b00(param_3);
    FUN_5df10b00(param_3 + 0xc);
    return;
  }
  piVar5 = local_168;
  iVar4 = 0;
  do {
    iVar6 = iVar4;
    if ((local_190[2] & 1) == 0) {
      *piVar5 = 0;
    }
    else {
      iVar4 = 2 - (local_190[2] & 3);
      *piVar5 = iVar4;
      if (iVar4 < 0) {
        iVar4 = 2;
        puVar3 = local_190 + 2;
        do {
          uVar2 = *puVar3;
          *puVar3 = uVar2 + 1;
          if (uVar2 + 1 != 0) break;
          iVar4 = iVar4 + -1;
          puVar3 = puVar3 + -1;
        } while (-1 < iVar4);
      }
    }
    local_190[2] = local_190[2] & 0xfffffffe;
    FUN_5df10ac0(local_190);
    piVar5 = piVar5 + 1;
    uVar2 = 0;
    puVar3 = local_190;
    iVar4 = 3;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 | uVar1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = iVar6 + 1;
    if (uVar2 == 0) {
      FUN_5df155e0(param_2,param_3);
      if (0 < iVar6) {
        piVar5 = local_168 + iVar6;
        local_190[3] = iVar6;
        do {
          FUN_5df15460(param_3,local_180,param_4);
          iVar4 = piVar5[-1];
          piVar5 = piVar5 + -1;
          if (iVar4 == -1) {
            FUN_5df15580(local_180,param_2,param_3,param_4);
          }
          else if (iVar4 == 0) {
            FUN_5df155e0(local_180,param_3);
          }
          else if (iVar4 == 1) {
            FUN_5df152e0(param_2,local_180,param_3,param_4);
          }
          local_190[3] = local_190[3] + -1;
        } while (local_190[3] != 0);
      }
      return;
    }
  } while( true );
}


