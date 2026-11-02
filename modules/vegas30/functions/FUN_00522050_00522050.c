/* Module: vegas30.exe
   Function: FUN_00522050
   Address: 00522050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00522050(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[0x24] != 0)) {
    if (param_2 != 0) {
      FUN_005b83b0(DAT_0064b138,1);
    }
    if ((param_1[1] & 0x1000) == 0) {
      iVar1 = *(int *)(param_1[0x24] + 4);
    }
    else {
      iVar1 = *(int *)(param_1[0x24] + 4);
    }
    if (iVar1 == 3) {
      if ((int *)param_1[0x29] != (int *)0x0) {
        iVar1 = *(int *)param_1[0x29];
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            _SfList_Destroy_4(*(undefined4 *)
                               (*(int *)(param_1[0x29] + 4) * iVar2 + *(int *)(param_1[0x29] + 8)));
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        _SfList_Destroy_4(param_1[0x29]);
        param_1[0x29] = 0;
      }
      if (param_1[0x25] != 0) {
        _SfList_Destroy_4(param_1[0x25]);
        param_1[0x25] = 0;
      }
      if (param_1[0x26] != 0) {
        _SfList_Destroy_4(param_1[0x26]);
        param_1[0x26] = 0;
      }
    }
    for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    if (param_2 != 0) {
      FUN_005b84d0(DAT_0064b138,1);
    }
  }
  return 0;
}


