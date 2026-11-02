/* Module: sfnetmedia.dll
   Function: FUN_0040b580
   Address: 0040b580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040b580(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  HWND hWnd;
  uint uVar4;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else {
    iVar1 = **(int **)((int)this + 0x74) + -1;
    if (iVar1 < param_1) {
      param_1 = iVar1;
    }
  }
  *(int *)((int)this + 0x78) = param_1;
  iVar1 = *(int *)((*(int **)((int)this + 0x74))[2] + param_1 * 4);
  *(int *)((int)this + 0x70) = iVar1;
  iVar1 = FUN_00410250(iVar1);
  if (iVar1 != 0) {
    FUN_0040dae0((int)this);
  }
  FUN_004100d0(*(int *)((int)this + 0x70));
  uVar4 = 0x6b;
  puVar2 = (undefined4 *)FUN_004012d0();
  puVar3 = (uchar *)FUN_00418380(puVar2,uVar4);
  FUN_004170b0(*(HWND *)((int)this + 4),puVar3);
  hWnd = GetDlgItem(*(HWND *)((int)this + 4),0x1f5);
  ShowWindow(hWnd,0);
  FUN_0040b4b0((int)this);
  return 0;
}


