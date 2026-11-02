/* Module: vegas30.exe
   Function: FUN_0044db10
   Address: 0044db10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044db10(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int lParam;
  HGLOBAL pvVar2;
  int iVar3;
  
  lParam = FUN_00445d30(param_1,0xffffffff);
  piVar1 = *(int **)(lParam + 0x60);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((int)param_2 < iVar3) {
    iVar3 = piVar1[1] * param_2 + piVar1[2];
    if (iVar3 != 0) {
      if (*(LPCVOID *)(iVar3 + 0x14) != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x14));
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x14));
        GlobalFree(pvVar2);
      }
      _SfList_DeleteList_16(*(undefined4 *)(lParam + 0x60),param_2,1,1);
    }
    if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
      PostMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66f,(param_2 & 0xffff) << 5 | 4,
                   lParam);
    }
    DAT_0064767c = DAT_0064767c | 0x800;
  }
  FUN_00453250(DAT_00647630,0);
  return;
}


