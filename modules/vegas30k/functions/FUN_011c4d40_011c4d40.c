/* Module: vegas30k.dll
   Function: FUN_011c4d40
   Address: 011c4d40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c4d40(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x228) & 1) == 0) {
    return -0x7fff0001;
  }
  if ((*(uint *)(param_1 + 0x228) & 2) == 0) {
    return -0x7fff0001;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  iVar1 = (**(code **)(param_1 + 0x22c))(param_1,4,*(undefined4 *)(param_1 + 0x230),0,0);
  if (-1 < iVar1) {
    iVar1 = 0;
    if ((*(uint *)(param_1 + 0x228) & 0x20) != 0) {
      ResetEvent(*(HANDLE *)(param_1 + 0x138));
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xfffffffb;
      *(undefined4 *)(param_1 + 0x1bc) = 0xffffffff;
      if ((*(HANDLE *)(param_1 + 0x138) != (HANDLE)0x0) && (*(int *)(param_1 + 0x1c0) != 0)) {
        SetEvent(*(HANDLE *)(param_1 + 0x138));
        WaitForSingleObject(*(HANDLE *)(param_1 + 0x1c0),0xffffffff);
        CloseHandle(*(HANDLE *)(param_1 + 0x1c0));
        *(undefined4 *)(param_1 + 0x1c0) = 0;
      }
      if (*(int *)(param_1 + 0x128) != 0) {
        _SfList_DeleteList_16(*(int *)(param_1 + 0x128),0,0xffffffff,1);
      }
      iVar1 = (**(code **)(param_1 + 0x22c))(param_1,5,*(undefined4 *)(param_1 + 0x230),0,0);
      return iVar1;
    }
    *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xfffffffb;
  }
  return iVar1;
}


