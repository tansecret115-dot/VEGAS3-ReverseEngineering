/* Module: rmto3260.dll
   Function: FUN_662d6460
   Address: 662d6460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662d6460(uint param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar1 = 0;
  uVar4 = 0;
  local_8 = 0;
  uVar2 = param_1 % 86400000;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    local_8 = uVar2 / 3600000;
    uVar2 = uVar2 % 3600000;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar4 = uVar2 / 60000;
    uVar2 = uVar2 % 60000;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar2 / 1000;
      uVar3 = uVar2 % 1000;
    }
  }
  sprintf(param_2,s__ld__ld__ld__ld__ld_6630ac90,param_1 / 86400000,local_8,uVar4,uVar1,uVar3);
  return;
}


