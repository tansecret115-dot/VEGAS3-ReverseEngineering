/* Module: vegas30.exe
   Function: FUN_005cf560
   Address: 005cf560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005cf560(uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            ,int param_8)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 <= param_6) && ((param_2 < param_6 || (param_1 <= param_5)))) {
    iVar2 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
    iVar1 = param_6 + param_8 + (uint)CARRY4(param_5,param_7);
    if ((iVar1 <= iVar2) && ((iVar1 < iVar2 || (param_5 + param_7 <= param_1 + param_3)))) {
      return 0;
    }
  }
  if ((param_6 <= param_2) && ((param_6 < param_2 || (param_5 <= param_1)))) {
    iVar2 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
    iVar1 = param_6 + param_8 + (uint)CARRY4(param_5,param_7);
    if ((iVar2 <= iVar1) && ((iVar2 < iVar1 || (param_1 + param_3 <= param_5 + param_7)))) {
      return 1;
    }
  }
  iVar1 = param_6 + param_8 + (uint)CARRY4(param_5,param_7);
  if ((iVar1 <= param_2) && ((iVar1 < param_2 || (param_5 + param_7 < param_1)))) {
    return 2;
  }
  iVar1 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
  if ((iVar1 <= param_6) && ((iVar1 < param_6 || (param_1 + param_3 < param_5)))) {
    return 3;
  }
  if ((param_6 <= param_2) && ((param_6 < param_2 || (param_5 < param_1)))) {
    return 4;
  }
  return 5;
}


