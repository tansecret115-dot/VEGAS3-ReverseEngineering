/* Module: rmme3260.dll
   Function: FUN_66224bc0
   Address: 66224bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66224bc0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_66229da0(param_1);
  iVar1 = param_1[1];
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(*param_1 + iVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_6624fda0(param_1,0,0xffffffff);
  iVar1 = param_1[0x2d];
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(param_1[0x2c] + iVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_66219dc0(puVar2);
        operator_delete(puVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_6624fda0(param_1 + 0x2c,0,0xffffffff);
  FUN_6624fda0(param_1 + 0x24,0,0xffffffff);
  FUN_6624fda0((void *)((int)param_1 + 0x16),0,0xffffffff);
  FUN_6624fda0(param_1 + 0xf,0,0xffffffff);
  if (*(undefined4 **)((int)param_1 + 0x142) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x142))(1);
    *(undefined4 *)((int)param_1 + 0x142) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x146) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x146))(1);
    *(undefined4 *)((int)param_1 + 0x146) = 0;
  }
  FUN_6624fda0((void *)((int)param_1 + 0x26),0,0xffffffff);
  if ((void *)param_1[0x5c] != (void *)0x0) {
    operator_delete((void *)param_1[0x5c]);
    param_1[0x5c] = 0;
  }
  return;
}


