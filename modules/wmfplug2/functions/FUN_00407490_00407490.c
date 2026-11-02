/* Module: wmfplug2.dll
   Function: FUN_00407490
   Address: 00407490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407490(int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  uint uVar3;
  int *unaff_ESI;
  int iVar4;
  short unaff_DI;
  int *piVar5;
  int *piVar6;
  undefined4 *puStack_2c;
  undefined *puStack_28;
  undefined4 **ppuStack_24;
  undefined4 *local_10 [2];
  uint local_8;
  int *local_4;
  
  iVar4 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    return 0;
  }
  puStack_2c = *(undefined4 **)(param_1 + 0x28);
  if (puStack_2c != (undefined4 *)0x0) {
    ppuStack_24 = local_10;
    puStack_28 = &DAT_0047b600;
    local_4 = (int *)(param_1 + 0x30);
    iVar4 = (**(code **)*puStack_2c)();
    if (iVar4 < 0) {
      return -0x7fffbffb;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar4 = FUN_0042c080((int *)(param_1 + 0x30),4,-1,-1,0x80000002);
    if (-1 < iVar4) {
      piVar6 = (int *)0x0;
      local_8 = 0;
      iVar1 = (**(code **)(*unaff_ESI + 0x14))
                        (unaff_ESI,&stack0xffffffec,L"SfAcidChunk",&stack0xffffffe8);
      if (((-1 < iVar1) && (unaff_DI == 0x18)) &&
         (iVar4 = (**(code **)(*piVar6 + 0x14))
                            (piVar6,&puStack_2c,L"SfAcidChunk",&stack0xffffffd0,param_1 + 0x54,
                             &stack0xffffffe0), -1 < iVar4)) {
        *(undefined4 *)(param_1 + 0x6c) = 1;
      }
      iVar1 = (**(code **)(*piVar6 + 0x14))
                        (piVar6,&puStack_2c,L"SfAcidStretchChunk",&stack0xffffffd0,0,
                         &stack0xffffffe0);
      if ((-1 < iVar1) && ((short)local_8 == 0x1c)) {
        piVar6 = (int *)(param_1 + 0x34);
        iVar4 = (**(code **)(*unaff_ESI + 0x14))
                          (unaff_ESI,&stack0xffffffec,L"SfAcidStretchChunk",&stack0xffffffe8);
        if (-1 < iVar4) {
          *(undefined4 *)(param_1 + 0x50) = 1;
        }
        iVar4 = (**(code **)(*piVar6 + 0x14))
                          (piVar6,&puStack_2c,L"SfAcidStretchList",&stack0xffffffd0,0,
                           &stack0xffffffe0);
        if ((-1 < iVar4) && ((short)local_8 != 0)) {
          pvVar2 = GlobalAlloc(0x42,local_8 & 0xffff);
          piVar6 = GlobalLock(pvVar2);
          if (piVar6 == (int *)0x0) {
            iVar4 = -0x7ff8fff2;
          }
          else {
            iVar4 = (**(code **)(*unaff_ESI + 0x14))
                              (unaff_ESI,&stack0xffffffec,L"SfAcidStretchList",&stack0xffffffe8,
                               piVar6);
            if (-1 < iVar4) {
              piVar5 = piVar6;
              for (uVar3 = (local_8 & 0xffff) >> 5; uVar3 != 0; uVar3 = uVar3 - 1) {
                iVar4 = FUN_0042bd50((int *)*local_10[0],piVar5,0x20,-1,(int *)0x0);
                piVar5 = piVar5 + 8;
              }
            }
            pvVar2 = GlobalHandle(piVar6);
            GlobalUnlock(pvVar2);
            pvVar2 = GlobalHandle(piVar6);
            GlobalFree(pvVar2);
          }
        }
      }
    }
    (**(code **)(*unaff_ESI + 8))();
  }
  return iVar4;
}


