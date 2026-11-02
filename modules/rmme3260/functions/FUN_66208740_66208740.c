/* Module: rmme3260.dll
   Function: FUN_66208740
   Address: 66208740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66208740(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar3 = 0;
  iVar2 = 0x40012;
  *param_3 = 0;
  param_2 = (int)*(ushort *)(param_2 + 4);
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    while( true ) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x38) + iVar3 * 4);
      iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,param_2,&local_8);
      if ((iVar2 == 0) && (local_8 != 0)) break;
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar3) {
        return iVar2;
      }
    }
    *param_3 = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    iVar2 = 0;
  }
  return iVar2;
}


