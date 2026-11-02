/* Module: vegas30.exe
   Function: FUN_00533d60
   Address: 00533d60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00533d60(int param_1,int param_2,int param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *pMem;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_4;
  
  pvVar1 = GlobalAlloc(0x40,0x2c);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pMem = (int *)FUN_004b11e0();
    if (pMem != (int *)0x0) {
      local_4 = 0;
      if (*(int *)(param_3 + 0x908) != 0) {
        local_4 = FUN_005b8970(param_1);
      }
      uVar3 = FUN_005b8980(param_1);
      uVar4 = FUN_005b8990(param_1);
      iVar5 = FUN_004b1980(local_4,uVar3,uVar4,param_1 + 0x1bc,*(undefined4 *)(param_3 + 0x8e0),
                           *(undefined4 *)(param_3 + 0x8e4),*(undefined4 *)(param_3 + 0x8f0),
                           *(undefined4 *)(param_3 + 0x8f4),*(undefined4 *)(param_3 + 0x888),
                           *(undefined4 *)(param_3 + 0x88c));
      if (-1 < iVar5) {
        *(int **)(param_2 + 300) = pMem;
        (**(code **)(*pMem + 4))(pMem);
        return iVar5;
      }
      FUN_004b1210();
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      return iVar5;
    }
  }
  return -0x7ff8fff2;
}


