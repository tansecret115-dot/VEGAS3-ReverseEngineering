/* Module: mcplugrw.dll
   Function: FUN_00484a50
   Address: 00484a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00484a50(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char unaff_BP;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x3d);
  *(undefined4 **)((int)param_1 + 0x16d) = puVar1;
  *puVar1 = &LAB_00484ae0;
  if (*(char *)((int)param_1 + 0xe5) == '\0') {
    if (unaff_BP != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
      return;
    }
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0x71)) {
      piVar4 = (int *)(*(int *)((int)param_1 + 0x79) + 0x1c);
      puVar1 = (undefined4 *)((int)puVar1 + 0x15);
      do {
        uVar2 = (**(code **)(param_1[1] + 8))(param_1,1,*piVar4 << 3,piVar4[-4] << 3);
        *puVar1 = uVar2;
        iVar3 = iVar3 + 1;
        puVar1 = puVar1 + 1;
        piVar4 = (int *)((int)piVar4 + 0x51);
      } while (iVar3 < *(int *)((int)param_1 + 0x71));
    }
  }
  return;
}


