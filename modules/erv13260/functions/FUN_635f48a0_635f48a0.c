/* Module: erv13260.dll
   Function: FUN_635f48a0
   Address: 635f48a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635f48a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(param_1) {
  case 1:
    puVar2 = param_3 + 5;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    *(undefined2 *)param_2 = *(undefined2 *)puVar2;
    return 1;
  case 2:
    puVar2 = (undefined4 *)((int)param_3 + 0x1d83);
    for (iVar1 = 0x192; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  case 3:
    *(undefined1 *)param_2 = *(undefined1 *)(param_3 + 0x754);
    *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)((int)param_3 + 0x1d51);
    *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)((int)param_3 + 0x1d52);
    *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)((int)param_3 + 0x1d53);
    return 1;
  case 4:
    puVar2 = (undefined4 *)((int)param_3 + 0x1d67);
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  case 5:
    *param_2 = *(undefined4 *)((int)param_3 + 0x1d5f);
    return 1;
  case 6:
    puVar2 = (undefined4 *)((int)param_3 + 0x1c8b);
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  case 7:
    puVar2 = param_3 + 0x738;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  case 8:
    *param_2 = param_3[8];
    return 1;
  case 9:
    for (iVar1 = 0x8f6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *param_3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
    }
    *(undefined2 *)param_2 = *(undefined2 *)param_3;
    *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)((int)param_3 + 2);
  }
  return 1;
}


