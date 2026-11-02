/* Module: vegas30k.dll
   Function: FUN_011367a0
   Address: 011367a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011367a0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_304;
  undefined1 local_300 [256];
  undefined1 local_200 [512];
  
  uVar3 = 0;
  iVar4 = 0;
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,local_200,0x100);
    while (iVar2 == 0) {
      iVar4 = iVar4 + 1;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
                        (*(int **)(param_1 + 0x2c),iVar4,local_200,0x100);
    }
    if (param_2 < iVar4) {
      *(int *)(param_1 + 0x34) = param_2;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(*(int **)(param_1 + 0x2c),param_2);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x34) = param_2;
        return 1;
      }
    }
  }
  local_304 = 0x100;
  iVar4 = _SfDSFilter_GetPresetName_20
                    (*(undefined4 *)(param_1 + 0x30),param_2 - iVar4,local_300,&local_304,0);
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x34) = param_2;
    iVar4 = _SfDSFilter_LoadPreset_12(*(undefined4 *)(param_1 + 0x30),local_300,0);
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x34) = param_2;
      uVar3 = 1;
    }
  }
  return uVar3;
}


