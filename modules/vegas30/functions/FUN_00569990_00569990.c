/* Module: vegas30.exe
   Function: FUN_00569990
   Address: 00569990
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00569990(int param_1,int param_2)

{
  HDC hDC;
  int iVar1;
  
  hDC = GetDC(*(HWND *)(param_1 + 0x24));
  iVar1 = FUN_00569960();
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffffbff;
    FUN_005708b0(hDC,iVar1 + 0x228,iVar1);
  }
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x400;
  FUN_005708b0(hDC,param_2 + 0x228,param_2);
  ReleaseDC(*(HWND *)(param_1 + 0x24),hDC);
  return;
}


