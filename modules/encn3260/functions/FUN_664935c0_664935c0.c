/* Module: encn3260.dll
   Function: FUN_664935c0
   Address: 664935c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664935c0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *param_2;
  if ((((iVar1 == DAT_664dc5d0) && (param_2[1] == DAT_664dc5d4)) && (param_2[2] == DAT_664dc5d8)) &&
     (param_2[3] == DAT_664dc5dc)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_664dd9f0) && (param_2[1] == DAT_664dd9f4)) &&
     ((param_2[2] == DAT_664dd9f8 && (param_2[3] == DAT_664dd9fc)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0x1a);
      return 0;
    }
    *param_3 = 0;
    return 0;
  }
  if (((iVar1 == DAT_664dc830) && (param_2[1] == DAT_664dc834)) &&
     ((param_2[2] == DAT_664dc838 &&
      ((param_2[3] == DAT_664dc83c &&
       (puVar2 = (undefined4 *)param_1[0x1c], puVar2 != (undefined4 *)0x0)))))) {
    uVar3 = (**(code **)*puVar2)(puVar2,param_2,param_3);
    return uVar3;
  }
  *param_3 = 0;
  return 0x80004002;
}


