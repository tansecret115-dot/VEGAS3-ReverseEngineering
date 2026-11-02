/* Module: encn3260.dll
   Function: FUN_664ab210
   Address: 664ab210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ab210(int param_1)

{
  HWND pHVar1;
  int iVar2;
  int local_8;
  
  local_8 = param_1;
  pHVar1 = GetCapture();
  local_8 = 0;
  if ((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(*(int *)(param_1 + 0x6c) + 0x1f8) == 0)) {
    iVar2 = FUN_664c3eb0(&DAT_664f0778,(uint)pHVar1,&local_8);
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x1f8) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x1fc) =
           *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x200);
    }
  }
  return;
}


