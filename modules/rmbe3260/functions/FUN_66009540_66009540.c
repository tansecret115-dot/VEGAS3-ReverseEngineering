/* Module: rmbe3260.dll
   Function: FUN_66009540
   Address: 66009540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66009540(int param_1,int *param_2)

{
  HMODULE pHVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  CHAR local_108;
  undefined4 local_107;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  iVar4 = *param_2;
  param_2 = (int *)0x0;
  (**(code **)(iVar4 + 0x24))(piVar2,*(undefined4 *)(param_1 + 0x24));
  (**(code **)(**(int **)(param_1 + 0x30) + 4))("ClientLicenseKey",&param_2);
  if (param_2 != (int *)0x0) {
    iVar4 = *piVar2;
    uVar3 = (**(code **)(*param_2 + 0x1c))(param_2);
    (**(code **)(iVar4 + 0x24))(piVar2,uVar3);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      param_2 = (int *)0x0;
    }
  }
  local_108 = DAT_66075004;
  puVar5 = &local_107;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pHVar1 = *(HMODULE *)(param_1 + 0x34);
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  FUN_66051e50(&local_108,pHVar1);
  (**(code **)(*piVar2 + 0x24))(piVar2,&local_108);
  return 0;
}


