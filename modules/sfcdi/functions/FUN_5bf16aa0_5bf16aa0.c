/* Module: sfcdi.dll
   Function: FUN_5bf16aa0
   Address: 5bf16aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf16aa0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  HWND pHVar2;
  int iVar3;
  int nCmdShow;
  uint nCmdShow_00;
  uint nCmdShow_01;
  
  uVar1 = (uint)(param_2 != -1);
  nCmdShow = (-(uint)(uVar1 != 0) & 0xfffffffb) + 5;
  iVar3 = nCmdShow;
  pHVar2 = GetDlgItem((HWND)*param_1,0x473);
  ShowWindow(pHVar2,iVar3);
  iVar3 = nCmdShow;
  pHVar2 = GetDlgItem((HWND)*param_1,0x475);
  ShowWindow(pHVar2,iVar3);
  iVar3 = nCmdShow;
  pHVar2 = GetDlgItem((HWND)*param_1,0x474);
  ShowWindow(pHVar2,iVar3);
  pHVar2 = GetDlgItem((HWND)*param_1,0x476);
  ShowWindow(pHVar2,nCmdShow);
  nCmdShow_00 = -(uint)(uVar1 != 0) & 5;
  nCmdShow_01 = nCmdShow_00;
  pHVar2 = GetDlgItem((HWND)*param_1,0x47a);
  ShowWindow(pHVar2,nCmdShow_01);
  pHVar2 = GetDlgItem((HWND)*param_1,0x479);
  ShowWindow(pHVar2,nCmdShow_00);
  FUN_5bf16940(param_1,uVar1);
  if ((uVar1 == 0) || (iVar3 = 1, param_2 != 1)) {
    iVar3 = 0;
  }
  FUN_5bf16970(param_1,iVar3);
  return;
}


