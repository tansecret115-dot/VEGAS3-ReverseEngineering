/* Module: vegas30k.dll
   Function: FUN_011884e0
   Address: 011884e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011884e0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = calloc(1,0x68);
  if (puVar3 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar3 = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  puVar3[3] = param_1;
  puVar3[9] = param_2;
  puVar3[0x19] = 0;
  iVar1 = *(int *)(param_1 + 0x638);
  if (iVar1 != 0) {
    for (iVar2 = *(int *)(iVar1 + 100); iVar2 != 0; iVar2 = *(int *)(iVar2 + 100)) {
      iVar1 = iVar2;
    }
    *(undefined4 **)(iVar1 + 100) = puVar3;
    return 0;
  }
  *(undefined4 **)(param_1 + 0x638) = puVar3;
  return 0;
}


