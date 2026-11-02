/* Module: wmfplug2.dll
   Function: FUN_0040deb0
   Address: 0040deb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __fastcall FUN_0040deb0(int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pMem;
  int *unaff_EBP;
  LPVOID pvVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  int *piStack_68;
  undefined1 *puStack_64;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_18;
  int *piStack_10;
  
  iVar4 = 0;
  local_48[0] = 0;
  if (*(undefined4 **)(param_1 + 0x238) != (undefined4 *)0x0) {
    local_4c = 0;
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x238))();
    if (-1 < iVar1) {
      puStack_64 = auStack_40;
      piStack_68 = &DAT_0047ad40;
      puStack_6c = (undefined4 *)0x40df00;
      iVar1 = (**(code **)(DAT_0047ad40 + 0xc))();
      if (iVar1 == 0) {
        puStack_70 = local_48;
        puStack_6c = (undefined4 *)0x18;
        (**(code **)(*piStack_10 + 0x18))(piStack_10,0,L"SfAcidChunk");
      }
      puStack_6c = &uStack_30;
      iVar1 = (**(code **)(*unaff_EBP + 0x10))();
      if (iVar1 == 0) {
        pwVar5 = L"SfAcidStretchChunk";
        (**(code **)(*piStack_10 + 0x18))(piStack_10,0,L"SfAcidStretchChunk",2,auStack_38);
        uStack_30 = 0;
        iVar1 = (**(code **)(*(int *)pwVar5 + 0x14))(pwVar5,&uStack_30);
        if ((iVar1 == 0) && (piStack_18 != (int *)0x0)) {
          iVar1 = (**(code **)(*piStack_18 + 0x14))(piStack_18,0,0,0,0);
          if ((-1 < iVar1) &&
             ((iVar1 = (**(code **)(*piStack_2c + 0xc))(piStack_2c,&puStack_70,0xc,&stack0xffffff8c)
              , -1 < iVar1 && (0 < (int)piStack_68)))) {
            pvVar2 = GlobalAlloc(0x42,(int)piStack_68 << 5);
            pMem = GlobalLock(pvVar2);
            if (pMem != (LPVOID)0x0) {
              pvVar3 = pMem;
              if (0 < (int)piStack_68) {
                do {
                  (**(code **)(*piStack_2c + 0xc))(piStack_2c,pvVar3,0x20,&stack0xffffff8c);
                  iVar4 = iVar4 + 1;
                  pvVar3 = (LPVOID)((int)pvVar3 + 0x20);
                } while (iVar4 < (int)piStack_68);
              }
              (**(code **)(*piStack_10 + 0x18))(piStack_10,0,L"SfAcidStretchList",2,pMem,4);
              pvVar2 = GlobalHandle(pMem);
              GlobalUnlock(pvVar2);
              pvVar2 = GlobalHandle(pMem);
              GlobalFree(pvVar2);
            }
          }
          (**(code **)(*piStack_2c + 8))(piStack_2c);
        }
      }
      (**(code **)(*piStack_68 + 8))();
    }
    return (undefined1 *)&local_4c;
  }
  return (undefined1 *)0x0;
}


