/* Module: aviplug.dll
   Function: FUN_5f960c50
   Address: 5f960c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f960c50(int param_1)

{
  SIZE_T *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  pSVar1 = *(SIZE_T **)(param_1 + 600);
  if (pSVar1[0x33] == 0) {
    if (pSVar1[0x2d] == 0) {
      pSVar1[0x30] = 1;
      if (*(int *)(*(int *)(param_1 + 600) + 200) == 0) {
        iVar2 = FUN_5f9409d0((undefined4 *)(*(int *)(param_1 + 600) + 200));
        return iVar2;
      }
    }
  }
  else {
    iVar2 = FUN_5f940d10(*pSVar1,(undefined4 *)pSVar1[0x32]);
    if (-1 < iVar2) {
      FUN_5f940fe0(*(undefined4 **)(*(int *)(param_1 + 600) + 200));
      *(undefined4 *)(*(int *)(param_1 + 600) + 0xcc) = 0;
    }
  }
  return iVar2;
}


