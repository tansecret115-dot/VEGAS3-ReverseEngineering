/* Module: vegas30.exe
   Function: FUN_005df010
   Address: 005df010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005df010(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_4;
  
  iVar3 = 0;
  local_4 = (int *)0x0;
  piVar2 = (int *)FUN_005b87b0(param_1);
  iVar1 = *piVar2;
  if (0 < iVar1) {
    _SfList_CreateExZ_32(&local_4,4,0x10,0x10,0,0,0,0);
    if (0 < iVar1) {
      do {
        FUN_005defc0(*(undefined4 *)(piVar2[2] + iVar3 * 4),local_4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_005defc0(*(int *)(param_1 + 0x1d8),local_4);
    }
    if (*local_4 != 0) {
      FUN_004ea4d0(param_1,0x224,local_4);
      FUN_005c93d0(param_1,local_4);
    }
  }
  if (local_4 != (int *)0x0) {
    _SfList_Destroy_4(local_4);
  }
  return 0;
}


