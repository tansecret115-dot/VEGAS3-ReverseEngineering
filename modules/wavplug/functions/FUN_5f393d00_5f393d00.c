/* Module: wavplug.dll
   Function: FUN_5f393d00
   Address: 5f393d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f393d00(HKEY param_1)

{
  bool bVar1;
  HGLOBAL pvVar2;
  LPVOID this;
  undefined4 *this_00;
  int iVar3;
  undefined4 *puVar4;
  uint local_8;
  int local_4;
  
  bVar1 = false;
  puVar4 = &DAT_5f3d9e68;
  do {
    pvVar2 = GlobalAlloc(0x40,0xc08);
    this = GlobalLock(pvVar2);
    if (this == (LPVOID)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_5f3bbb60(this,puVar4[-0x10],(HKEY__)puVar4[-0xf],(uchar *)puVar4[-0xe],
                             puVar4 + -0xd,(int)(puVar4 + -6),*puVar4,puVar4[1],0,2,0,
                             (uchar *)"Software\\Sonic Foundry\\",(uchar *)0x0);
    }
    iVar3 = FUN_5f3bea60(this_00,&local_4,&local_8,param_1,(uint *)0x0,(undefined4 *)0x0);
    if ((iVar3 == 0) || ((0x4e12b < iVar3 && (iVar3 < 0x4e133)))) {
      bVar1 = true;
    }
    FUN_5f3bed50(this_00,local_8,local_8);
    if (this_00 != (undefined4 *)0x0) {
      FUN_5f3bbd70(this_00);
      pvVar2 = GlobalHandle(this_00);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(this_00);
      GlobalFree(pvVar2);
    }
  } while ((!bVar1) && (puVar4 = puVar4 + 0x12, (int)puVar4 < 0x5f3d9fd0));
  return;
}


