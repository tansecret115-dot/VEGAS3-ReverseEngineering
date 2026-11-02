/* Module: vidcap30.exe
   Function: FUN_0042c2c0
   Address: 0042c2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042c2c0(void)

{
  int iVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  SIZE_T SStack_100;
  SIZE_T *pSStack_fc;
  SIZE_T local_ec;
  char *pcStack_e8;
  undefined4 uStack_2c;
  int iStack_8;
  
  pSStack_fc = &local_ec;
  SStack_100 = 0x32;
  local_ec = 0;
  acmMetrics();
  iVar1 = (**(code **)(**(int **)(iStack_8 + 0x510) + 0x10))
                    (*(int **)(iStack_8 + 0x510),&pSStack_fc);
  if (-1 < iVar1) {
    if (0x31 < *(ushort *)(puRam00000044 + 4) + 0x12) {
      SStack_100 = *(ushort *)(puRam00000044 + 4) + 0x12;
    }
    pvVar2 = GlobalAlloc(0x42,SStack_100);
    pMem = GlobalLock(pvVar2);
    uVar4 = uRam00000040;
    if (pMem != (undefined4 *)0x0) {
      puVar5 = puRam00000044;
      puVar6 = pMem;
      for (uVar3 = uRam00000040 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar5 = (undefined4 *)&stack0xffffff08;
      for (iVar1 = 0x39; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      pSStack_fc = (SIZE_T *)0xe8;
      uStack_2c = 0xc00000;
      local_ec = SStack_100;
      pcStack_e8 = "Audio Capture Format";
      iVar1 = acmFormatChooseA(&pSStack_fc);
      if (iVar1 == 0) {
        iVar1 = FUN_00421b90(iStack_8);
        if (-1 < iVar1) {
          iVar1 = FUN_0057af30(pMem,*(ushort *)(pMem + 4) + 0x12);
          if (-1 < iVar1) {
            (**(code **)(**(int **)(iStack_8 + 0x510) + 0xc))(*(int **)(iStack_8 + 0x510),0);
          }
          FUN_0042af10(iStack_8);
        }
      }
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
    }
    FUN_0057b1c0(0);
  }
  return;
}


