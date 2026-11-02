/* Module: vegas30.exe
   Function: FUN_005c71f0
   Address: 005c71f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005c71f0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined8 *param_5,
            int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_c;
  undefined4 local_4;
  
  uVar2 = 0xffffffff;
  local_c = 0;
  local_4 = 0xffffffff;
  FUN_005b83b0(param_1,0);
  iVar1 = *(int *)(param_2 + 0x50);
  uVar3 = 0xffffffffffffffff;
  if ((iVar1 != 0) &&
     ((((*(int *)(param_2 + 4) != 3 || (iVar1 == 0)) || (*(int *)(iVar1 + 0x18) == 0)) ||
      ((iVar1 = FUN_005f13f0(3), iVar1 == 0 ||
       (uVar3 = 0xffffffffffffffff, _DAT_00610fd8 != *(double *)(iVar1 + 0x48))))))) {
    if ((param_3 == 0) && (param_3 = *(int *)(param_2 + 0x50), param_3 == 0)) {
      local_c = 0x80004005;
      uVar3 = 0xffffffffffffffff;
    }
    else if (param_6 == 0) {
      local_4 = *(undefined4 *)(param_3 + 0xc);
      uVar2 = *(undefined4 *)(param_3 + 8);
      uVar3 = *(undefined8 *)(param_3 + 0x10);
    }
    else {
      uVar3 = 0xffffffffffffffff;
      if ((*(int *)(param_3 + 0x18) != 0) &&
         (iVar1 = FUN_005f13f0(*(undefined4 *)(param_2 + 4)), uVar3 = 0xffffffffffffffff, iVar1 != 0
         )) {
        uVar2 = 0;
        local_4 = 0;
        uVar3 = ftol();
      }
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
    param_4[1] = local_4;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar3;
  }
  FUN_005b84d0(param_1,0);
  return local_c;
}


