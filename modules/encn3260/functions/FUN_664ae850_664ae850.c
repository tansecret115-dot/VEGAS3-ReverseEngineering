/* Module: encn3260.dll
   Function: FUN_664ae850
   Address: 664ae850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_664ae850(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (((param_4 != (int *)0x0) && (piVar1 = (int *)*param_4, piVar1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_8), iVar2 == 0)) {
    uVar3 = 0;
    if ((param_5 != 0) ||
       ((piVar1 = (int *)param_4[1], piVar1 != (int *)0x0 &&
        (param_3 = (undefined4 *)(**(code **)(*piVar1 + 0x1c))(piVar1), param_3 != (undefined4 *)0x0
        )))) {
      uVar3 = *param_3;
    }
    local_18 = param_2;
    local_20 = param_1;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_1c = uVar3;
    (**(code **)(*local_8 + 0x14))(local_8,&local_20);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    return 1;
  }
  return 0;
}


