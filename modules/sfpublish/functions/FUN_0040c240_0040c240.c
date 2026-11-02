/* Module: sfpublish.dll
   Function: FUN_0040c240
   Address: 0040c240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040c240(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EDI;
  uint uVar4;
  WINDOWPLACEMENT *pWVar5;
  int *piVar6;
  DWORD DVar7;
  int local_30;
  WINDOWPLACEMENT local_2c;
  
  local_2c.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 4),&local_2c);
  pWVar5 = &local_2c;
  DVar7 = 0x2c;
  uVar4 = 0x3f7;
  iVar3 = FUN_00401310();
  FUN_0041f7b0(iVar3,uVar4,(BYTE *)pWVar5,DVar7);
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  if (puVar1 != (undefined4 *)0x0) {
    piVar6 = &local_30;
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    local_30 = 0;
    iVar3 = (**(code **)*puVar1)(puVar1,&DAT_0043c9e0);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,&DAT_0043cb30,&stack0xffffffc0);
      if (-1 < iVar3) {
        (**(code **)(*piVar6 + 0x18))(piVar6,uVar2);
      }
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    *(undefined4 *)(param_1 + 0x44) = 0xfefefefe;
    (**(code **)(**(int **)(param_1 + 0x54) + 8))(*(int **)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return 0;
}


