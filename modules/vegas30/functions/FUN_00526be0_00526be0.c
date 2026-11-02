/* Module: vegas30.exe
   Function: FUN_00526be0
   Address: 00526be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00526be0(int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  int iVar3;
  
  pvVar2 = GlobalAlloc(0x40,0xc);
  pMem = GlobalLock(pvVar2);
  *pMem = **(undefined4 **)(param_1 + 0x84);
  FUN_0052b400(*(undefined4 *)(param_1 + 0x84),pMem);
  if ((*(byte *)(param_1 + 0x18c) & 4) != 0) {
    Transport_Suspend();
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 300) + 0x38))(*(int **)(param_1 + 300),pMem);
  if ((*(byte *)(param_1 + 0x18c) & 4) != 0) {
    Transport_Resume((uint)(iVar3 != 0));
  }
  iVar1 = pMem[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    _SfList_DeleteList_16(pMem[2],iVar1,1,1);
  }
  _SfList_Destroy_4(pMem[2]);
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  if (*(int *)(param_1 + 0x104) == 1) {
    FUN_004227f0(*(undefined4 *)(param_1 + 300));
  }
  if (-1 < iVar3) {
    return iVar3;
  }
  iVar3 = FUN_00526920(param_1);
  return iVar3;
}


