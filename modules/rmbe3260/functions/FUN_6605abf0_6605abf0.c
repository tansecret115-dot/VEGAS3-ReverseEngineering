/* Module: rmbe3260.dll
   Function: FUN_6605abf0
   Address: 6605abf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605abf0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  
  iVar2 = param_2;
  *param_4 = 0;
  *param_3 = 0;
  local_8 = 0x80004005;
  param_1 = *(int *)(param_1 + 0x34);
  if (param_1 != 0) {
    while( true ) {
      iVar1 = param_1;
      puVar3 = (undefined4 *)FUN_6605c5e0(&param_1);
      if (*(int *)*puVar3 == iVar2) break;
      if (param_1 == 0) {
        return 0x80004005;
      }
    }
    local_8 = 0;
    *param_3 = (int *)*puVar3;
    *param_4 = iVar1;
  }
  return local_8;
}


