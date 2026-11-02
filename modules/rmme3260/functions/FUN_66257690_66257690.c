/* Module: rmme3260.dll
   Function: FUN_66257690
   Address: 66257690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66257690(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_6626ce78;
  if ((param_1[2] == 0x8000) || (param_1[2] == 0x8002)) {
    for (puVar1 = (undefined4 *)param_1[7]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      operator_delete((void *)puVar1[3]);
    }
  }
  if ((param_1[2] == 0x8001) || (param_1[2] == 0x8002)) {
    for (puVar1 = (undefined4 *)param_1[0xd]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      operator_delete((void *)puVar1[3]);
    }
  }
  if ((param_1[0x11] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete((void *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  *param_1 = &PTR_LAB_6626ced0;
  iVar2 = param_1[0xd];
  while (iVar2 != 0) {
    iVar2 = *(int *)param_1[0xd];
    operator_delete((int *)param_1[0xd]);
    param_1[0xd] = iVar2;
  }
  iVar2 = param_1[7];
  while (iVar2 != 0) {
    iVar2 = *(int *)param_1[7];
    operator_delete((int *)param_1[7]);
    param_1[7] = iVar2;
  }
  return;
}


