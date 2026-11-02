/* Module: vegas30.exe
   Function: FUN_00411f60
   Address: 00411f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411f60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = **(int **)(param_1 + 200);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        EnableWindow(*(HWND *)(*(int *)(*(int *)(*(int *)(param_1 + 200) + 8) + iVar2 * 4) + 8),
                     param_2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    EnableWindow((HWND)*DAT_0064762c,param_2);
    DAT_0064761c = (uint)(param_2 == 0) << 8 | DAT_0064761c & 0xfffffeff;
  }
  return;
}


