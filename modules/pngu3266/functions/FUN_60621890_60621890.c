/* Module: pngu3266.dll
   Function: FUN_60621890
   Address: 60621890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60621890(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_c;
  int local_8;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
  piVar1 = param_2;
  if (piVar2 < param_2) {
    puVar3 = operator_new(0x28);
    if (puVar3 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_60620290(puVar3);
    }
    (**(code **)(*piVar4 + 4))(piVar4);
    (**(code **)(*piVar4 + 0x14))(piVar4,(int)piVar1 - (int)piVar2);
    puVar3 = operator_new(0xc);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    FUN_60621a00(puVar3,piVar4);
    FUN_60621bf0(param_1 + 5,(int)puVar3,(void *)0x0);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      return 0;
    }
  }
  else if (param_2 < piVar2) {
    local_8 = 0;
    local_c = 0;
    (**(code **)(param_1[-1] + 0x28))(param_1 + -1,param_2,&param_2,&local_c,&local_8);
    if (param_2 != (int *)0x0) {
      piVar2 = (int *)*param_2;
      piVar4 = (int *)param_2[2];
      (**(code **)(*piVar2 + 4))(piVar2);
      uVar5 = (int)piVar1 - local_8;
      if (uVar5 == 0) {
        FUN_60621b50(param_1 + 5,param_2);
      }
      else {
        FUN_60621a30(param_2,piVar2,0,uVar5);
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      if (piVar4 != (int *)0x0) {
        do {
          piVar1 = (int *)piVar4[2];
          FUN_60621b50(param_1 + 5,piVar4);
          piVar4 = piVar1;
        } while (piVar1 != (int *)0x0);
      }
    }
  }
  return 0;
}


