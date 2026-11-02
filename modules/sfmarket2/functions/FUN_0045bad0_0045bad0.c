/* Module: sfmarket2.dll
   Function: FUN_0045bad0
   Address: 0045bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045bad0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1[1];
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 == 1) {
    for (iVar2 = *(int *)(iVar1 + 0x40); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x23)) {
      if (*(char *)(iVar2 + 0x22) != '\0') {
        *(undefined1 *)(iVar2 + 0x22) = 0;
        (**(code **)(iVar2 + 0x2f))(param_1,iVar2 + 0x27);
      }
    }
    iVar2 = *(int *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x40) = 0;
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x23)) {
      if (*(char *)(iVar2 + 0x22) != '\0') {
        *(undefined1 *)(iVar2 + 0x22) = 0;
        (**(code **)(iVar2 + 0x2f))(param_1,iVar2 + 0x27);
      }
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x38 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x38 + param_2 * 4) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    iVar2 = puVar3[2];
    iVar4 = puVar3[1];
    puVar5 = (undefined4 *)*puVar3;
    FUN_00485110(param_1,puVar3);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - (iVar2 + 0xc + iVar4);
    puVar3 = puVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x30 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x30 + param_2 * 4) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    iVar2 = puVar3[2];
    iVar4 = puVar3[1];
    puVar5 = (undefined4 *)*puVar3;
    FUN_004850e0(param_1,puVar3);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - (iVar2 + 0xc + iVar4);
    puVar3 = puVar5;
  }
  return;
}


