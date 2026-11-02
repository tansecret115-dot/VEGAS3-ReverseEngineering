/* Module: rmme3260.dll
   Function: FUN_6622fdc0
   Address: 6622fdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622fdc0(int *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(byte *)((int)param_1 + 0x6f) & 1) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,0,0);
    if (iVar2 != 0) {
      return 0x80040009;
    }
  }
  *(undefined2 *)(param_1 + 7) = 2;
  iVar2 = FUN_66264780(param_2);
  param_1[8] = iVar2;
  uVar1 = FUN_66264740(param_3);
  *(undefined2 *)((int)param_1 + 0x1e) = uVar1;
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_4);
  return uVar3;
}


