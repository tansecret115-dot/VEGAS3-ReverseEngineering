/* Module: vegas30k.dll
   Function: FUN_011365d0
   Address: 011365d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011365d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_204;
  undefined1 local_200 [512];
  
  iVar5 = 0;
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,local_200,0x100);
    while (iVar2 == 0) {
      iVar5 = iVar5 + 1;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
                        (*(int **)(param_1 + 0x2c),iVar5,local_200,0x100);
    }
  }
  iVar2 = iVar5;
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (iVar3 = _SfDSFilter_GetPresetCount_12(*(int *)(param_1 + 0x30),&local_204,0), iVar3 == 0)) {
    iVar2 = iVar5 + local_204;
  }
  if (iVar2 != 0) {
    iVar5 = iVar2;
  }
  if (iVar5 == 0) {
    iVar2 = iVar5;
    uVar4 = _SfGetString2_8(DAT_0120e5c8,0x10c1);
    iVar2 = _SfDSFilter_SavePreset_12(*(undefined4 *)(param_1 + 0x30),uVar4,iVar2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return iVar5;
}


