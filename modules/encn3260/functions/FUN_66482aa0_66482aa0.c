/* Module: encn3260.dll
   Function: FUN_66482aa0
   Address: 66482aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66482aa0(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1;
  if (param_2 == (int *)0x800400ce) {
    piVar1 = (int *)((int)param_1 + 0x5e);
    if (*(int *)((int)param_1 + 0x5e) == 0) {
      piVar2 = param_1 + 10;
      param_1 = (int *)0x0;
      param_2 = (int *)0x0;
      iVar4 = (**(code **)(*(int *)*piVar2 + 0xc))((int *)*piVar2,&DAT_664dd300,&param_1);
      if (-1 < iVar4) {
        (**(code **)*param_1)(param_1,&DAT_664dd380,&param_2);
        (**(code **)(*param_2 + 0xc))(param_2,piVar3[3]);
        if (param_2 != (int *)0x0) {
          (**(code **)(*param_2 + 8))(param_2);
          param_2 = (int *)0x0;
        }
        (**(code **)*param_1)(param_1,&DAT_664dd300,piVar1);
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
    }
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar2 + 0x10))(piVar2);
      if ((iVar4 == 0) && (piVar2 = (int *)piVar3[5], piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x14))(piVar2,param_3);
        if (piVar3 != (int *)0x14) {
          (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,piVar3 + 1,piVar3[5]);
          return 0;
        }
        (**(code **)(*piRam00000072 + 0xc))(piRam00000072,0,uRam00000028);
        return 0;
      }
    }
    FUN_66483190(piVar3 + -5,0x800400ce,s_Unable_to_WWW_authenticate_664e21c4);
  }
  return 0;
}


