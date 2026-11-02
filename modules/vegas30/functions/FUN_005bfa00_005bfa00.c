/* Module: vegas30.exe
   Function: FUN_005bfa00
   Address: 005bfa00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005bfa00(uint param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_4;
  
  local_4 = 0;
  if (0 < param_4) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    do {
      if (((int)uVar2 <= param_2) && (((int)uVar2 < param_2 || (uVar1 <= param_1)))) {
        iVar3 = param_3[3] + uVar2 + (uint)CARRY4(param_3[2],uVar1);
        if ((param_2 < iVar3) || ((param_2 <= iVar3 && (param_1 < param_3[2] + uVar1)))) {
          return 1;
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < param_4);
  }
  return 0;
}


