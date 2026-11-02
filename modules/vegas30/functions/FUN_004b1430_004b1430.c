/* Module: vegas30.exe
   Function: FUN_004b1430
   Address: 004b1430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b1430(uint *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((((param_2 == 0) && (param_3 == 0)) && (param_4 == 0)) && (param_5 == 0)) {
    return 1;
  }
  uVar1 = param_1[1];
  uVar2 = *param_1;
  if ((param_3 <= (int)uVar1) && ((param_3 < (int)uVar1 || (param_2 <= uVar2)))) {
    iVar4 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
    if (((int)uVar1 <= iVar4) && (((int)uVar1 < iVar4 || (uVar2 <= param_2 + param_4)))) {
      if ((param_1[8] & 1) != 0) {
        uVar5 = param_1[2] + uVar2;
        iVar3 = param_1[3] + uVar1 + (uint)CARRY4(param_1[2],uVar2);
        if (iVar3 < param_3) {
          return 0;
        }
        if ((iVar3 <= param_3) && (uVar5 < param_2)) {
          return 0;
        }
        if (iVar4 < iVar3) {
          return 0;
        }
        if ((iVar4 <= iVar3) && (param_2 + param_4 < uVar5)) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


