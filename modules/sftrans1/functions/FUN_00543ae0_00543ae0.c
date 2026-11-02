/* Module: sftrans1.dll
   Function: FUN_00543ae0
   Address: 00543ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00543ae0(int param_1,undefined4 *param_2,int *param_3)

{
  LPCVOID pMem;
  uint uVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (*param_3 != 0) {
    *param_3 = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0xa4) < **(int **)(param_1 + 0xa0)) {
    FUN_00543790();
    puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0xa0) + 8) + *(int *)(param_1 + 0xa4) * 4)
    ;
    if (puVar5 != (undefined4 *)0x0) {
      *param_2 = *puVar5;
      param_2[1] = puVar5[1];
      _mbscpy((uchar *)(param_2 + 4),(uchar *)(puVar5 + 4));
      param_2[0xc] = puVar5[0xc];
      param_2[0xd] = puVar5[0xd];
      param_2[0xe] = puVar5[0xe];
      param_2[0xf] = puVar5[0xf];
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(puVar5 + 0x10);
      param_2[0x12] = puVar5[0x12];
      *(undefined1 *)(param_2 + 0x13) = *(undefined1 *)(puVar5 + 0x13);
      param_2[0x14] = puVar5[0x14];
      pMem = (LPCVOID)param_2[2];
      uVar1 = puVar5[3];
      puVar5 = (undefined4 *)puVar5[2];
      if (pMem != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
        param_2[2] = 0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        pvVar2 = GlobalAlloc(0x40,uVar1 * 2);
        puVar3 = GlobalLock(pvVar2);
        param_2[2] = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          for (uVar4 = (uVar1 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar3 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar3 = puVar3 + 1;
          }
          for (uVar4 = uVar1 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          param_2[3] = uVar1;
        }
      }
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
      return 0;
    }
  }
  return 0x80004005;
}


