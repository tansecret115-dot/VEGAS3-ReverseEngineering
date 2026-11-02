/* Module: sfmarket2.dll
   Function: FUN_0040d9d0
   Address: 0040d9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040d9d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  HWND hWnd;
  LRESULT LVar4;
  int *unaff_EDI;
  uint uVar5;
  WINDOWPLACEMENT *pWVar6;
  int *piVar7;
  DWORD DVar8;
  int local_30;
  WINDOWPLACEMENT local_2c;
  
  GetWindowPlacement(*(HWND *)(param_1 + 4),&local_2c);
  pWVar6 = &local_2c;
  DVar8 = 0x2c;
  uVar5 = 3;
  iVar3 = FUN_00401340();
  FUN_004292a0(iVar3,uVar5,(BYTE *)pWVar6,DVar8);
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (puVar1 != (undefined4 *)0x0) {
    piVar7 = &local_30;
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    local_30 = 0;
    iVar3 = (**(code **)*puVar1)(puVar1,&DAT_004a4120);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,&DAT_004a4090,&stack0xffffffc0);
      if (-1 < iVar3) {
        (**(code **)(*piVar7 + 0x18))(piVar7,uVar2);
      }
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7);
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    *(undefined4 *)(param_1 + 0x44) = 0xfefefefe;
    (**(code **)(**(int **)(param_1 + 0x50) + 8))(*(int **)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x10b0) != 0) {
    hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x1f9);
    if (hWnd != (HWND)0x0) {
      LVar4 = SendMessageA(hWnd,0xf0,0,0);
      **(LRESULT **)(param_1 + 0x10b0) = LVar4;
    }
  }
  return 0;
}


