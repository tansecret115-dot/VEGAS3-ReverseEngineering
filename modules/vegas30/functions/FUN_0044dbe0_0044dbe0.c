/* Module: vegas30.exe
   Function: FUN_0044dbe0
   Address: 0044dbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044dbe0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int lParam;
  int iVar4;
  
  lParam = FUN_00445d30(param_1,0xffffffff);
  uVar3 = DAT_0064b138;
  piVar1 = *(int **)(lParam + 0x60);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if ((int)param_2 < iVar4) {
    iVar4 = piVar1[2];
    iVar2 = piVar1[1];
    FUN_005b83b0(DAT_0064b138,1);
    *(undefined4 *)(iVar2 * param_2 + 0x18 + iVar4) = param_3;
    FUN_005b84d0(uVar3,1);
    if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
      PostMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66f,(param_2 & 0xffff) << 5 | 1,
                   lParam);
    }
    DAT_0064767c = DAT_0064767c | 0x800;
  }
  return;
}


