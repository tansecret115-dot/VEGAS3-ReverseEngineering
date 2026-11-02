/* Module: vegas30k.dll
   Function: FUN_011b5ab0
   Address: 011b5ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011b5ab0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x134);
  do {
    iVar1 = iVar3;
    if (iVar1 == 0) break;
    iVar3 = *(int *)(iVar1 + 0xc);
  } while (*(int *)(iVar1 + 0xc) != 0);
  puVar2 = calloc(1,0x10);
  if (puVar2 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar2 = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = iVar3 + 1;
  }
  puVar2[1] = iVar3;
  puVar2[2] = param_2;
  puVar2[3] = 0;
  *param_3 = iVar3;
  if (iVar1 != 0) {
    *(undefined4 **)(iVar1 + 0xc) = puVar2;
    return 0;
  }
  *(undefined4 **)(param_1 + 0x134) = puVar2;
  return 0;
}


