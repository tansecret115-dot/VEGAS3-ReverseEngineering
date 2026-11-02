/* Module: mcplug.dll
   Function: FUN_0040bf80
   Address: 0040bf80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040bf80(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  if (uVar2 < uVar1) {
    if (param_2 <= uVar1 - uVar2) {
      param_1[7] = uVar2;
      return param_1[2] * uVar2 + *param_1;
    }
  }
  else {
    uVar3 = param_1[3];
    uVar5 = param_1[6] - uVar2;
    if (uVar3 < uVar1) {
      iVar4 = uVar1 - uVar3;
    }
    else {
      iVar4 = 0;
    }
    if (param_2 <= uVar5) {
      param_1[7] = uVar2;
      return param_1[2] * uVar2 + *param_1;
    }
    if ((param_2 <= iVar4 + uVar5) && (uVar5 < uVar3)) {
      param_1[7] = uVar3 - uVar5;
      return param_1[2] * (uVar3 - uVar5) + *param_1;
    }
  }
  param_1[7] = 0;
  return 0;
}


