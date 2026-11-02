/* Module: vidcap30.exe
   Function: FUN_00540950
   Address: 00540950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00540950(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_3[1];
  if (((uVar1 != 0xffff) || (*param_3 != 0xffff)) &&
     ((uVar3 = param_3[3], uVar3 != 0xffff || (param_3[2] != 0xffff)))) {
    uVar5 = *param_3;
    uVar2 = param_3[2];
    uVar4 = uVar5;
    if (uVar2 <= uVar5) {
      uVar4 = uVar2;
    }
    if (uVar2 < uVar5) {
      uVar2 = uVar5;
    }
    uVar5 = uVar1;
    if (uVar3 <= uVar1) {
      uVar5 = uVar3;
    }
    if (uVar3 < uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 == 0xffff) {
      if ((uVar4 <= param_1) && (param_1 <= uVar2)) {
        return 1;
      }
    }
    else if (uVar2 == 0xffff) {
      if ((uVar5 <= param_2) && (param_2 <= uVar3)) {
        return 1;
      }
    }
    else if ((((uVar4 <= param_1) && (param_1 <= uVar2)) && (uVar5 <= param_2)) &&
            (param_2 <= uVar3)) {
      return 1;
    }
    return 0;
  }
  return 1;
}


