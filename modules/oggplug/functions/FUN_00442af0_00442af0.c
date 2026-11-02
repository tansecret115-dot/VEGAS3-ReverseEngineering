/* Module: oggplug.dll
   Function: FUN_00442af0
   Address: 00442af0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_00442af0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int aiStack_10 [4];
  
  iVar4 = param_1[0x17];
  iVar1 = param_1[2];
  (*(code *)param_1[0xb1])(*param_1,0,0,2);
  iVar2 = (*(code *)param_1[0xb3])(*param_1);
  param_1[4] = iVar2;
  param_1[5] = iVar2 >> 0x1f;
  param_1[2] = param_1[4];
  param_1[3] = param_1[5];
  uVar3 = FUN_00442be0(param_1,aiStack_10);
  if ((int)uVar3 < 0) {
    FUN_004425f0(param_1);
    return uVar3;
  }
  iVar2 = FUN_00440f10(aiStack_10);
  if (iVar2 == iVar4) {
    iVar4 = FUN_00442d00(param_1,0,uVar3,uVar3 + 1,iVar4,0);
    if (iVar4 != 0) {
      FUN_004425f0(param_1);
      return 0xffffff80;
    }
  }
  else {
    iVar4 = FUN_00442d00(param_1,0,0,uVar3 + 1,iVar4,0);
    if (iVar4 < 0) {
      FUN_004425f0(param_1);
      return 0xffffff80;
    }
  }
  FUN_00442e50(param_1,iVar1);
  uVar3 = FUN_004434a0(param_1,0);
  return uVar3;
}


