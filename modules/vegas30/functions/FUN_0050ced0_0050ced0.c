/* Module: vegas30.exe
   Function: FUN_0050ced0
   Address: 0050ced0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050ced0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0050c130(param_1);
  piVar2 = (int *)FUN_00522a00(0xffffffff);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  if (param_2 < iVar3) {
    iVar3 = piVar2[1];
    iVar1 = piVar2[2];
    FUN_005b83b0(DAT_0064b138,1);
    *(undefined4 *)(iVar3 * param_2 + 0xc + iVar1) = param_3;
    FUN_005b84d0(DAT_0064b138,1);
    iVar3 = *(int *)(DAT_0064762c + 0xa4);
    FUN_0050c0d0(iVar3);
    InvalidateRect(*(HWND *)(iVar3 + 0x180),(RECT *)0x0,1);
    if (((*(byte *)(iVar3 + 0x154) & 1) != 0) && (*(HWND *)(iVar3 + 0x168) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(iVar3 + 0x168),(RECT *)0x0,0);
    }
    DAT_0064767c = DAT_0064767c | 0x800;
  }
  return;
}


