/* Module: vidpcore.dll
   Function: FUN_5de6ae40
   Address: 5de6ae40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de6ae40(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  ceil((double)CONCAT44(param_4,param_3));
  iVar3 = ftol();
  ceil((double)CONCAT44(param_6,param_5));
  iVar4 = ftol();
  iVar5 = (*param_2 - 1U | 0x3fff) + 1;
  iVar1 = param_2[2];
  iVar6 = (param_2[1] - 1U | 0x3fff) + 1;
  iVar2 = param_2[3];
  iVar7 = iVar3 * 4 + 3;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe) + 3 +
          (iVar3 * 2 - ((int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe));
  param_1[2] = iVar7;
  if (iVar1 <= iVar7) {
    iVar7 = iVar1;
  }
  param_1[2] = iVar7;
  iVar7 = iVar4 * 4 + 3;
  param_1[3] = iVar7;
  iVar1 = (iVar4 * 2 - ((int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe)) + 3 +
          ((int)(iVar2 + (iVar2 >> 0x1f & 0x3fffU)) >> 0xe);
  if (iVar7 < iVar1) {
    param_1[3] = iVar7;
    return;
  }
  param_1[3] = iVar1;
  return;
}


