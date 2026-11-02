/* Module: oggplug.dll
   Function: FUN_00438b00
   Address: 00438b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00438b00(int param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  if ((int)*param_2 < 2) {
    FUN_00441e10(param_3,0,1);
  }
  else {
    FUN_00441e10(param_3,1,1);
    FUN_00441e10(param_3,*param_2 - 1,4);
  }
  if ((int)param_2[0x133] < 1) {
    FUN_00441e10(param_3,0,1);
  }
  else {
    FUN_00441e10(param_3,1,1);
    FUN_00441e10(param_3,param_2[0x133] - 1,8);
    iVar3 = 0;
    if (0 < (int)param_2[0x133]) {
      puVar2 = param_2 + 0x234;
      do {
        iVar1 = FUN_00438c50(*(uint *)(param_1 + 4));
        FUN_00441e10(param_3,puVar2[-0x100],iVar1);
        iVar1 = FUN_00438c50(*(uint *)(param_1 + 4));
        FUN_00441e10(param_3,*puVar2,iVar1);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < (int)param_2[0x133]);
    }
  }
  FUN_00441e10(param_3,0,2);
  if ((1 < (int)*param_2) && (iVar3 = 0, puVar2 = param_2, 0 < *(int *)(param_1 + 4))) {
    do {
      FUN_00441e10(param_3,puVar2[1],4);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  iVar3 = 0;
  if (0 < (int)*param_2) {
    puVar2 = param_2 + 0x111;
    do {
      FUN_00441e10(param_3,puVar2[-0x10],8);
      FUN_00441e10(param_3,*puVar2,8);
      FUN_00441e10(param_3,puVar2[0x10],8);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)*param_2);
  }
  return;
}


