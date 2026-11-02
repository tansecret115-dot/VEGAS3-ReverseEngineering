/* Module: erv33260.dll
   Function: FUN_6708bd30
   Address: 6708bd30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6708bd30(void *this,int param_1,uint param_2,char *param_3,undefined4 *param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_8;
  
  switch(param_5) {
  case 2:
  case 5:
  case 6:
    break;
  case 3:
  case 4:
    param_5 = 0;
    do {
      iVar3 = 0;
      iVar2 = 0;
      if ((*param_3 != '\0') && (iVar2 = (int)*param_3 % 3, iVar2 < 0)) {
        iVar2 = iVar2 + 3;
      }
      if ((param_3[1] != '\0') && (iVar3 = (int)param_3[1] % 3, iVar3 < 0)) {
        iVar3 = iVar3 + 3;
      }
      (**(code **)(*(int *)((int)this + 0x268) + (iVar2 + iVar3 * 4) * 4))(param_2);
      param_3 = param_3 + 2;
      param_5 = param_5 + 1;
    } while (param_5 < 4);
  default:
    return;
  }
  iVar3 = 0;
  local_8 = 0;
  param_5 = 0;
  cVar1 = *param_3;
  if (cVar1 != '\0') {
    local_8 = (int)cVar1 / 3;
    iVar3 = (int)cVar1 % 3;
    if (iVar3 < 0) {
      local_8 = local_8 + -1;
      iVar3 = iVar3 + 3;
    }
  }
  cVar1 = param_3[1];
  if (cVar1 != '\0') {
    iVar2 = (int)cVar1 / 3;
    param_5 = (int)cVar1 % 3;
    if ((int)param_5 < 0) {
      iVar2 = iVar2 + -1;
      param_5 = param_5 + 3;
    }
    local_8 = local_8 + iVar2 * param_2;
  }
  puVar5 = (undefined4 *)(param_1 + local_8);
  if ((iVar3 == 0) && (param_5 == 0)) {
    iVar3 = 8;
    do {
      *param_4 = *puVar5;
      param_4[1] = puVar5[1];
      param_4 = param_4 + 4;
      puVar5 = (undefined4 *)((int)puVar5 + (param_2 & 0xfffffffc));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return;
  }
  uVar4 = 0;
  do {
    (**(code **)((iVar3 + param_5 * 4) * 4 + *(int *)((int)this + 0x268)))(param_2);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}


