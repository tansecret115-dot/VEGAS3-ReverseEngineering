/* Module: vegas30.exe
   Function: FUN_004bab10
   Address: 004bab10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004bab10(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_3;
  uVar1 = *param_2;
  if ((uVar1 == uVar3) && (param_2[1] == param_3[1])) {
    return (param_3[8] & 1) - (param_2[8] & 1);
  }
  uVar2 = uVar1 - uVar3;
  uVar3 = (param_2[1] - param_3[1]) - (uint)(uVar1 < uVar3);
  if ((0x7fffffff < uVar3) && (((int)uVar3 < -1 || (uVar2 != 0xffffffff)))) {
    return 0xffffffff;
  }
  if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || (1 < uVar2)))) {
    return 1;
  }
  return uVar2;
}


