/* Module: vegas30.exe
   Function: FUN_00422880
   Address: 00422880
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422880(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_2 & 0xc000) != 0) || ((param_2 & 0xc) != 0)) {
    FUN_00422550();
  }
  if ((param_2 & 0x8000) != 0) {
    iVar1 = FUN_0040c050(200);
    if (iVar1 != 0) {
      iVar2 = FUN_00422820(iVar1);
      if (iVar2 == 0) {
        if (*(int *)(iVar1 + 0x210) != 0) {
          ShowWindow(*(HWND *)(iVar1 + 600),5);
          ShowWindow(*(HWND *)(iVar1 + 0x254),5);
          DestroyWindow(*(HWND *)(iVar1 + 0x210));
          *(undefined4 *)(iVar1 + 0x210) = 0;
        }
      }
      else if (*(int *)(iVar1 + 0x210) == 0) {
        FUN_004181a0(iVar1);
        ShowWindow(*(HWND *)(iVar1 + 600),0);
        ShowWindow(*(HWND *)(iVar1 + 0x254),0);
        SetWindowPos(*(HWND *)(iVar1 + 0x238),*(HWND *)(iVar1 + 0x210),0,0,0,0,3);
        return;
      }
    }
  }
  return;
}


