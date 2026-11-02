/* Module: vidcap30.exe
   Function: FUN_00541850
   Address: 00541850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00541850(uint param_1,int param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  puVar4 = param_3;
  iVar3 = param_1;
  puVar1 = (uint *)(param_1 + 0x160);
  if ((*puVar1 & 0x20000) != 0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    return 0;
  }
  param_1 = *(uint *)(param_1 + 0x60);
  uVar2 = param_3[3];
  if ((param_1 != 0) && ((*puVar1 & 0x400) == 0)) {
    param_1 = param_1 - 1;
  }
  uVar5 = *(uint *)(iVar3 + 100);
  *param_3 = uVar5;
  uVar7 = param_4;
  if (param_4 <= uVar5) {
    uVar7 = uVar5;
  }
  uVar5 = FUN_005416c0(iVar3,uVar7,param_2 + 1,&param_2);
  puVar4[3] = uVar5;
  if ((param_2 < 0) && (uVar5 != 0)) {
    puVar4[3] = uVar5 - 1;
  }
  if (((((*(byte *)(iVar3 + 0x168) & 0x20) != 0) && (uVar5 = puVar4[3], uVar2 < uVar5)) &&
      (uVar7 != 0)) && (*(int *)(iVar3 + 0x60) - uVar7 <= uVar5)) {
    uVar7 = uVar7 + (uVar2 - uVar5);
  }
  uVar2 = puVar4[3];
  if (uVar2 < param_1) {
    puVar4[1] = param_1 - uVar2;
  }
  else {
    uVar7 = *puVar4;
    puVar4[1] = uVar7;
  }
  if ((param_1 == 1) && (uVar2 == 0)) {
    puVar4[3] = 1;
  }
  uVar6 = FUN_00541930(iVar3,puVar4[2],uVar7);
  puVar4[2] = uVar7;
  return uVar6;
}


