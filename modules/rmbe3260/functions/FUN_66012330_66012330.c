/* Module: rmbe3260.dll
   Function: FUN_66012330
   Address: 66012330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66012330(int param_1,int param_2,short param_3,short param_4,int param_5,short param_6,
                short param_7,int *param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  *param_8 = 0;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x94) < 1) {
    return 0x40012;
  }
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0x90) + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      local_8 = 0;
      local_10 = 0;
      local_c = 0;
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      iVar2 = (**(code **)(*piVar1 + 0x10))
                        (piVar1,&local_8,&local_c,&local_18,&local_10,&local_14,&local_1c);
      if (iVar2 < 0) {
        return iVar2;
      }
      if ((((param_2 == local_8) && (param_3 == (short)local_c)) && (param_5 == local_10)) &&
         (((param_6 == (short)local_14 && (param_4 == (short)local_18)) &&
          (param_7 == (short)local_1c)))) {
        *param_8 = (int)piVar1;
        (**(code **)(*piVar1 + 4))(piVar1);
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
    if (*(int *)(param_1 + 0x94) <= iVar3) {
      return 0x40012;
    }
  } while( true );
}


