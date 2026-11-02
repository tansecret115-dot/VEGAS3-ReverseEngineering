/* Module: sfppack3.dll
   Function: FUN_5cc7a020
   Address: 5cc7a020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc7a020(void *this,byte *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    param_3 = 7;
  }
  iVar1 = FUN_5cc7a160(this,param_1);
  if (iVar1 < 0) {
    *param_2 = 1;
    *(int *)param_1 = param_3;
    uVar2 = FUN_5cc7a140(this);
    return uVar2;
  }
  if (*(int *)param_1 == -1) {
    *param_2 = 0;
    return 0;
  }
  if (*(int *)param_1 == 0) {
    *param_2 = 1;
    uVar2 = FUN_5cc7a140(this);
    return uVar2;
  }
  *param_2 = 0;
  return 0;
}


