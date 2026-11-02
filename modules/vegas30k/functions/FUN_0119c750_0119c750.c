/* Module: vegas30k.dll
   Function: FUN_0119c750
   Address: 0119c750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0119c750(int *param_1,uint param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  piVar2 = param_3;
  uVar1 = param_2;
  if ((((param_2 != 0xffffffff) && (param_3 != (int *)0xffffffff)) && (param_1[0x184] == 0)) &&
     (param_1[0x183] == 0)) {
    puVar4 = (undefined4 *)param_1[0x19d];
    if (puVar4 == (undefined4 *)0x0) {
      return 0x80004002;
    }
    while( true ) {
      param_2 = 0;
      (**(code **)(*(int *)*puVar4 + 0x8c))((int *)*puVar4,0xf,&param_2);
      if ((((param_2 & 0x80) != 0) && (param_2 = param_2 & 0xffffff7f, uVar1 == param_2)) &&
         ((**(code **)(*(int *)*puVar4 + 0x8c))((int *)*puVar4,0x32,&param_1), piVar2 == param_1))
      break;
      puVar4 = (undefined4 *)puVar4[6];
      if (puVar4 == (undefined4 *)0x0) {
        return 0x80004002;
      }
    }
    uVar3 = (**(code **)(*(int *)*puVar4 + 0xd0))((int *)*puVar4,param_4,param_5,param_6,param_7);
    return uVar3;
  }
  uVar3 = (**(code **)(*param_1 + 0xd8))(param_1,param_4,param_5,param_6,param_7);
  return uVar3;
}


