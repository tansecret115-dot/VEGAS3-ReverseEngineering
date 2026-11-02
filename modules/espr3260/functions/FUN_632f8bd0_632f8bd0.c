/* Module: espr3260.dll
   Function: FUN_632f8bd0
   Address: 632f8bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_632f8bd0(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar1 = param_1;
  switch(param_3) {
  case 0:
    puVar1 = &DAT_632ff420;
    break;
  case 1:
    puVar1 = &DAT_632ff3c8;
    break;
  case 2:
    puVar1 = &DAT_632ff478;
    break;
  case 3:
    puVar1 = &DAT_632ff4d0;
  }
  if (param_3 != 3) {
    iVar2 = (int)param_1 - (int)puVar1;
    param_1 = (uint *)0x14;
    do {
      puVar1 = puVar1 + 1;
      FUN_632f8c90(param_2,(int)puVar1 + iVar2,uVar3,0,*puVar1);
      uVar3 = uVar3 + *puVar1;
      param_1 = (uint *)((int)param_1 + -1);
    } while (param_1 != (uint *)0x0);
    return;
  }
  iVar2 = (int)param_1 - (int)puVar1;
  param_1 = (uint *)0x16;
  do {
    FUN_632f8c90(param_2,iVar2 + (int)puVar1,uVar3,0,*puVar1);
    uVar3 = uVar3 + *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = (uint *)((int)param_1 + -1);
  } while (param_1 != (uint *)0x0);
  return;
}


