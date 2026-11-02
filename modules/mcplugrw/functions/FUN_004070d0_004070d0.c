/* Module: mcplugrw.dll
   Function: FUN_004070d0
   Address: 004070d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004070d0(HWND param_1,int param_2)

{
  HWND pHVar1;
  BYTE *pBVar2;
  HWND pHVar3;
  int *piVar4;
  uint uVar5;
  uchar local_104 [260];
  
  SetWindowLongA(param_1,-0x15,*(LONG *)(param_2 + 0x1c));
  FUN_0041ff20(param_1,(HFONT)0x0);
  uVar5 = 0x8001;
  piVar4 = (int *)0x0;
  pHVar3 = (HWND)0x0;
  pHVar1 = GetParent(param_1);
  FUN_00429fa0(pHVar1,pHVar3,piVar4,uVar5);
  pBVar2 = FUN_0041f9f0(DAT_004a811c,0x2752);
  FUN_00420fe0(local_104,pBVar2);
  SetDlgItemTextA(param_1,0xe41,(LPCSTR)local_104);
  return 1;
}


