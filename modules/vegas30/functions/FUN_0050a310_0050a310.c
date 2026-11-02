/* Module: vegas30.exe
   Function: FUN_0050a310
   Address: 0050a310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050a310(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  undefined4 local_25c;
  int local_258 [4];
  int local_248 [4];
  undefined1 local_238 [276];
  byte local_124;
  undefined1 local_11c [276];
  byte local_8;
  
  local_25c = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  FUN_00508ba0(param_2,local_238);
  FUN_00508ba0(param_3,local_11c);
  if (((local_124 & 8) != 0) && ((local_8 & 4) == 0)) {
    FUN_0050a250(param_1,param_2,local_258);
    FUN_0050a250(param_1,param_3,local_248);
    iVar1 = 4;
    bVar4 = true;
    piVar2 = local_258;
    piVar3 = local_248;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if ((bVar4) && (iVar1 = FUN_0050a790(param_1,param_3), iVar1 != param_2)) {
      do {
        if (param_3 == param_2) {
          return 0;
        }
        param_2 = FUN_0050a790(param_1,param_2);
      } while (param_2 != 0);
      local_25c = 1;
    }
  }
  return local_25c;
}


