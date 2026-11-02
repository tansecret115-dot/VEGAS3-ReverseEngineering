/* Module: rmbe3260.dll
   Function: FUN_6605f880
   Address: 6605f880
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6605f880(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  *param_2 = 0;
  param_2 = (undefined4 *)0x0;
  iVar2 = FUN_6605f770((int *)&param_2);
  if ((-1 < iVar2) && (param_2 != (undefined4 *)0x0)) {
    if (param_1 != 0) {
      param_2[4] = param_1;
      puVar3 = operator_new(0xc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        if (param_2 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = param_2 + 2;
        }
        puVar3[1] = 0;
        puVar3[2] = puVar4;
        *puVar3 = &PTR_FUN_66063e58;
      }
      param_2[5] = puVar3;
      (**(code **)(*(int *)param_2[5] + 4))((int *)param_2[5]);
      *puVar1 = param_2[5];
      return 0;
    }
    (**(code **)*param_2)(param_2,&DAT_66064ee8,param_2 + 5);
    iVar2 = 0;
    *puVar1 = param_2[5];
  }
  return iVar2;
}


