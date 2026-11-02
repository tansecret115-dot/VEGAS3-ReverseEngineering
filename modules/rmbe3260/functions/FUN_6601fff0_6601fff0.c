/* Module: rmbe3260.dll
   Function: FUN_6601fff0
   Address: 6601fff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_6601fff0(int param_1,undefined4 param_2,int *param_3,char *param_4,byte *param_5,int param_6,
            undefined4 param_7,undefined4 param_8,int *param_9,int *param_10)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (((param_4 != (char *)0x0) && (param_5 != (byte *)0x0)) && (param_6 != 0)) {
    puVar1 = operator_new(0x5c);
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_66008d80(puVar1);
    }
    *(int **)(param_1 + 0x180) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      iVar3 = FUN_66009120(*(void **)(param_1 + 0x180),param_2,param_3,param_4,param_5,param_6,
                           param_7,param_8,0,param_9,param_10);
      if (iVar3 != 0) {
        iVar3 = FUN_66009480(*(int *)(param_1 + 0x180));
        if (iVar3 == 0) {
          FUN_660093b0(*(int *)(param_1 + 0x180));
        }
      }
      FUN_66009500(*(int *)(param_1 + 0x180));
    }
    return 0;
  }
  return 0x80004003;
}


