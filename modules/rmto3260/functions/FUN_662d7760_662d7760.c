/* Module: rmto3260.dll
   Function: FUN_662d7760
   Address: 662d7760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662d7760(uint param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = 0;
  uVar1 = 0;
  local_8 = 0;
  uVar2 = param_1 % 86400000;
  uVar3 = 0;
  if (uVar2 != 0) {
    local_8 = uVar2 / 3600000;
    uVar3 = uVar2 % 3600000;
  }
  if (uVar3 != 0) {
    uVar4 = uVar3 / 60000;
    uVar3 = uVar3 % 60000;
    if (uVar3 != 0) {
      uVar1 = uVar3 / 1000;
      if (uVar3 % 1000 != 0) {
        uVar3 = (uVar3 % 1000) / 100;
        goto LAB_662d780a;
      }
    }
  }
  uVar3 = 0;
LAB_662d780a:
  sprintf(param_2,s__ld__ld__ld__ld__ld_6630add4,param_1 / 86400000,local_8,uVar4,uVar1,uVar3);
  return;
}


