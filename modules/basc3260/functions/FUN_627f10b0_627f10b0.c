/* Module: basc3260.dll
   Function: FUN_627f10b0
   Address: 627f10b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_627f10b0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  *param_2 = 0;
  param_2 = (undefined4 *)0x0;
  iVar2 = FUN_627f1030((int *)&param_2);
  if ((-1 < iVar2) && (param_2 != (undefined4 *)0x0)) {
    if (param_1 != 0) {
      param_2[2] = param_1;
      puVar3 = operator_new(0xc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        puVar3[2] = param_2;
        *puVar3 = &PTR_FUN_627f57f8;
      }
      param_2[3] = puVar3;
      (**(code **)(*(int *)param_2[3] + 4))((int *)param_2[3]);
      *puVar1 = param_2[3];
      return 0;
    }
    (**(code **)*param_2)(param_2,&DAT_627f5060,param_2 + 3);
    iVar2 = 0;
    *puVar1 = param_2[3];
  }
  return iVar2;
}


