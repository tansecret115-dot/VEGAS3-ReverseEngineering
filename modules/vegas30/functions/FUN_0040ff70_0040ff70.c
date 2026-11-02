/* Module: vegas30.exe
   Function: FUN_0040ff70
   Address: 0040ff70
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_0040ff70(void)

{
  void *pvVar1;
  int iVar2;
  BOOL BVar3;
  HWND hWnd;
  undefined4 uVar4;
  tagRECT *lpRect;
  tagRECT local_10;
  
  pvVar1 = calloc(1,0x128);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  iVar2 = _SfList_CreateExZ_32((int)pvVar1 + 0xcc,4,0x10,0x10,0,0,0,0);
  if (iVar2 != 0) {
    return (void *)0x0;
  }
  iVar2 = _SfList_CreateExZ_32((int)pvVar1 + 200,4,0x20,0x10,0,0,0,0);
  if (iVar2 != 0) {
    return (void *)0x0;
  }
  if (DAT_006477dc < 4) {
    BVar3 = SystemParametersInfoA(0x30,0,&local_10,0);
    if (BVar3 == 0) {
      lpRect = &local_10;
      hWnd = GetDesktopWindow();
      GetClientRect(hWnd,lpRect);
    }
    DAT_006477dc = ((local_10.bottom - local_10.top) * 2) / 5;
    DAT_0064aa4c = 0;
  }
  uVar4 = FUN_004e7800();
  *(undefined4 *)((int)pvVar1 + 0x60) = uVar4;
  iVar2 = 3;
  if (DAT_0064aa4c == 0) {
    iVar2 = DAT_006477dc;
  }
  *(int *)((int)pvVar1 + 0x44) = iVar2;
  *(undefined4 *)((int)pvVar1 + 0x40) = DAT_006477d8;
  *(undefined4 *)((int)pvVar1 + 0x38) = DAT_006477d0;
  *(undefined4 *)((int)pvVar1 + 0x48) = 0xc;
  *(undefined4 *)((int)pvVar1 + 0x120) = 0;
  return pvVar1;
}


