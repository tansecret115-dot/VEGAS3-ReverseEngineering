/* Module: vegas30.exe
   Function: FUN_0050ce30
   Address: 0050ce30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050ce30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00522a00(0xffffffff);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (param_2 < iVar2) {
    FUN_005b83b0(DAT_0064b138,1);
    _SfList_DeleteList_16(piVar1,param_2,1,1);
    FUN_005b84d0(DAT_0064b138,1);
    FUN_0050c0d0(param_1);
    InvalidateRect(*(HWND *)(param_1 + 0x180),(RECT *)0x0,1);
    if (((*(byte *)(param_1 + 0x154) & 1) != 0) && (*(HWND *)(param_1 + 0x168) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 0x168),(RECT *)0x0,0);
    }
    DAT_0064767c = DAT_0064767c | 0x800;
  }
  FUN_00453250(DAT_00647630,0);
  return;
}


