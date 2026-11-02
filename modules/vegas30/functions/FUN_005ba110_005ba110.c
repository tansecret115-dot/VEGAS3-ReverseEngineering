/* Module: vegas30.exe
   Function: FUN_005ba110
   Address: 005ba110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ba110(undefined4 param_1,undefined4 param_2)

{
  HDC hdc;
  A_Buffer *this;
  int iVar1;
  HGDIOBJ ho;
  HGLOBAL pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_005b9fc0(param_1,param_2,1);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  FUN_005a5490(iVar1 + 0x108);
  FUN_005a5490(iVar1 + 0x1e0);
  FUN_005a5490(iVar1 + 0x2b8);
  FUN_005a5490(iVar1 + 0x390);
  hdc = *(HDC *)(iVar1 + 0x4b4);
  if (hdc != (HDC)0x0) {
    ho = SelectObject(hdc,*(HGDIOBJ *)(iVar1 + 0x4b0));
    DeleteObject(ho);
    SelectObject(hdc,*(HGDIOBJ *)(iVar1 + 0x4b8));
    DeleteDC(hdc);
    puVar4 = (undefined4 *)(iVar1 + 0x470);
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  FUN_005aa930(iVar1 + 0x4c0);
  FUN_005aa930(iVar1 + 0x740);
  if (*(A_Buffer **)(iVar1 + 0x468) != (A_Buffer *)0x0) {
    A_Buffer::Cleanup(*(A_Buffer **)(iVar1 + 0x468));
    this = *(A_Buffer **)(iVar1 + 0x468);
    if (this != (A_Buffer *)0x0) {
      A_Buffer::Cleanup(this);
      pvVar2 = GlobalHandle(this);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(this);
      GlobalFree(pvVar2);
    }
    *(undefined4 *)(iVar1 + 0x468) = 0;
  }
  FUN_005ba030(param_1,iVar1,1,0);
  return 0;
}


