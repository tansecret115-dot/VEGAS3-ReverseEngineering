/* Module: stl2plg.dll
   Function: FUN_0045ec60
   Address: 0045ec60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045ec60(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x1d1);
  *(undefined4 *)((int)param_1 + 0xa6) = *(undefined4 *)(iVar1 + 0x10);
  iVar3 = *(int *)((int)param_1 + 0x82);
  *(undefined4 *)((int)param_1 + 0xa2) = *(undefined4 *)(iVar1 + 0x14);
  if (iVar3 == 0) {
    if (*(int *)((int)param_1 + 0x96) == 3) {
      *(undefined1 **)(iVar1 + 4) = &LAB_0045ef00;
      return;
    }
    *(undefined1 **)(iVar1 + 4) = &LAB_0045ee30;
  }
  else if (iVar3 == 1) {
    if (*(int *)((int)param_1 + 0x96) == 3) {
      *(undefined1 **)(iVar1 + 4) = &LAB_0045f0f0;
    }
    else {
      *(undefined1 **)(iVar1 + 4) = &LAB_0045efc0;
    }
    *(undefined4 *)(iVar1 + 0x2d) = 0;
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      FUN_0045eaa0((int)param_1);
    }
    if (*(int *)(iVar1 + 0x31) == 0) {
      FUN_0045ed60((int)param_1);
      return;
    }
  }
  else {
    if (iVar3 != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)(param_1);
      return;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x41);
    *(undefined1 **)(iVar1 + 4) = &LAB_0045f220;
    *(undefined1 *)(iVar1 + 0x51) = 0;
    if (*(int *)(iVar1 + 0x41) == 0) {
      FUN_0045ec10((int)param_1);
    }
    iVar1 = *(int *)((int)param_1 + 0x8e);
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0x96)) {
      do {
        FUN_00455be0((undefined4 *)*puVar2,iVar1 * 2 + 4);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < *(int *)((int)param_1 + 0x96));
      return;
    }
  }
  return;
}


