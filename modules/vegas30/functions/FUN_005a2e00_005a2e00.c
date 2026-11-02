/* Module: vegas30.exe
   Function: FUN_005a2e00
   Address: 005a2e00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005a2e62) */

void FUN_005a2e00(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  if (DAT_00649990 == -1) {
    uVar3 = *param_1;
    *param_1 = uVar3 - param_3;
    uVar3 = (param_1[1] - param_4) - (uint)(uVar3 < param_3);
    param_1[1] = uVar3;
    uVar2 = *param_1;
  }
  else {
    if (DAT_00649990 == 1) {
      uVar3 = *param_2;
      *param_2 = uVar3 + param_3;
      param_2[1] = param_2[1] + param_4 + (uint)CARRY4(uVar3,param_3);
      return;
    }
    uVar4 = __alldiv(param_3,param_4,0xfffffffe,0xffffffff);
    uVar3 = *param_1;
    *param_1 = uVar3 + (uint)uVar4;
    uVar2 = param_1[1] + (int)((ulonglong)uVar4 >> 0x20) + (uint)CARRY4(uVar3,(uint)uVar4);
    param_1[1] = uVar2;
    uVar3 = *param_1;
    *param_2 = uVar3 + param_3;
    param_2[1] = uVar2 + param_4 + (uint)CARRY4(uVar3,param_3);
    uVar3 = param_1[1];
    uVar2 = *param_1;
  }
  if (((int)uVar3 < 1) && ((int)uVar3 < 0)) {
    uVar1 = *param_2;
    *param_2 = uVar1 - uVar2;
    param_2[1] = (param_2[1] - uVar3) - (uint)(uVar1 < uVar2);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


