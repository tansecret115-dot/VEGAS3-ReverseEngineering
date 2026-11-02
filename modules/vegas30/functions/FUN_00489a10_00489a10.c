/* Module: vegas30.exe
   Function: FUN_00489a10
   Address: 00489a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00489a10(int param_1,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 8) + 8);
  if (DAT_0064ca60 == 0) {
    FUN_004e9f70(puVar2,0x33,0);
  }
  switch(param_2) {
  case 8:
    FUN_004ea750(puVar2,param_1,2,0);
    uVar6 = 2;
    break;
  default:
    goto switchD_00489a42_caseD_9;
  case 10:
    FUN_004ea750(puVar2,param_1,2,0);
    FUN_005c9030(param_1,8,param_3);
    goto switchD_00489a42_caseD_9;
  case 0xe:
    FUN_004ea750(puVar2,param_1,2,0);
    uVar6 = 0x100;
    break;
  case 0xf:
    FUN_004ea750(puVar2,param_1,2,0);
    bVar4 = (*(uint *)(param_1 + 0x10) & 0x200) == 0;
    if (bVar4) {
      fVar5 = (float10)FUN_005c7ff0(param_1);
      dVar1 = (double)fVar5;
    }
    else {
      dVar1 = 1.0;
    }
    FUN_005c7f20(param_1,bVar4,dVar1);
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) goto switchD_00489a42_caseD_9;
    goto LAB_00489adc;
  }
  FUN_005c9030(param_1,uVar6,param_3);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
LAB_00489adc:
    *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x200000;
    *(uint *)*puVar2 = *(uint *)*puVar2 | 0x2000;
  }
switchD_00489a42_caseD_9:
  FUN_004eb2b0(puVar2);
  if (DAT_0064ca60 == 0) {
    FUN_004ea040(puVar2,0);
  }
  return;
}


