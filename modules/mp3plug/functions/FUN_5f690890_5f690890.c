/* Module: mp3plug.dll
   Function: FUN_5f690890
   Address: 5f690890
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f690890(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  SIZE_T dwBytes;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  int iVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 local_48 [2];
  int iStack_40;
  undefined4 auStack_38 [2];
  undefined1 auStack_30 [4];
  void *pvStack_2c;
  int *piStack_28;
  void *pvStack_18;
  int *piStack_14;
  void *pvStack_10;
  
  iVar3 = 0;
  local_48[0] = 0;
  iVar1 = (**(code **)*param_2)();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(DAT_5f72bd30 + 0xc))();
    if (iVar1 == 0) {
      FUN_5f69c730(pvStack_10,(uchar *)"SfAcidChunk",local_48,0x18,(uchar *)0x0,(uchar *)0x0);
    }
    puVar5 = auStack_30;
    iVar1 = (**(code **)(iStack_40 + 0x10))();
    if (iVar1 == 0) {
      FUN_5f69c730(pvStack_18,(uchar *)"SfAcidStretchChunk",auStack_38,0x1c,(uchar *)0x0,
                   (uchar *)0x0);
      piStack_14 = (int *)0x0;
      iVar1 = (**(code **)(*unaff_ESI + 0x14))();
      if ((iVar1 == 0) && (piStack_14 != (int *)0x0)) {
        iVar1 = (**(code **)(*piStack_14 + 0x14))(piStack_14,0,0,0,0);
        if ((-1 < iVar1) &&
           ((iVar1 = (**(code **)(*piStack_28 + 0xc))
                               (piStack_28,&stack0xffffff90,0xc,&stack0xffffff8c), -1 < iVar1 &&
            (0 < (int)puVar5)))) {
          dwBytes = (int)puVar5 << 5;
          pvVar2 = GlobalAlloc(0x42,dwBytes);
          pMem = GlobalLock(pvVar2);
          if (pMem != (undefined4 *)0x0) {
            puVar4 = pMem;
            if (0 < (int)puVar5) {
              do {
                (**(code **)(*piStack_28 + 0xc))(piStack_28,puVar4,0x20,&stack0xffffff8c);
                iVar3 = iVar3 + 1;
                puVar4 = puVar4 + 8;
              } while (iVar3 < (int)puVar5);
            }
            iVar1 = FUN_5f69c730(pvStack_2c,"SfAcidStretchList",pMem,dwBytes,(uchar *)0x0,
                                 (uchar *)0x0);
            pvVar2 = GlobalHandle(pMem);
            GlobalUnlock(pvVar2);
            pvVar2 = GlobalHandle(pMem);
            GlobalFree(pvVar2);
          }
        }
        (**(code **)(*piStack_28 + 8))(piStack_28);
      }
    }
    (**(code **)(*unaff_ESI + 8))();
    return iVar1;
  }
  return 0;
}


