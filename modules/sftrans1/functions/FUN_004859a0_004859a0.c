/* Module: sftrans1.dll
   Function: FUN_004859a0
   Address: 004859a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004859a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8,undefined4 param_9,
                 undefined4 *param_10)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  floor((double)CONCAT44(param_4,param_3));
  iVar2 = ftol();
  floor((double)CONCAT44(param_6,param_5));
  iVar3 = ftol();
  if ((((_DAT_00557828 <= (double)iVar2) && (iVar2 < param_7)) && (_DAT_00557828 <= (double)iVar3))
     && (iVar3 < param_8)) {
    uVar1 = ftol();
    *(undefined1 *)((int)param_1 + 2) = uVar1;
    uVar1 = ftol();
    *(undefined1 *)((int)param_1 + 1) = uVar1;
    uVar1 = ftol();
    *(undefined1 *)param_1 = uVar1;
    uVar1 = ftol();
    *(undefined1 *)((int)param_1 + 3) = uVar1;
    return;
  }
  *param_1 = *param_10;
  return;
}


