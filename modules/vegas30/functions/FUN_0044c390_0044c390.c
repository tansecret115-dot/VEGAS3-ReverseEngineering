/* Module: vegas30.exe
   Function: FUN_0044c390
   Address: 0044c390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c390(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  WPARAM wParam;
  undefined4 uVar5;
  int *unaff_EDI;
  LPARAM lParam;
  undefined4 *puVar6;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  uVar5 = 0;
  piVar1 = (int *)(param_2 + 0xf4);
  local_8 = 0;
  local_4 = 0;
  local_c = 0;
  if (*(int *)(param_2 + 0xf4) == 0) {
    if ((*(int *)(param_2 + 0x50) == 0) || (*(int *)(*(int *)(param_2 + 0x50) + 0x18) == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005f13f0(*(undefined4 *)(param_2 + 4));
    }
    if (iVar3 == 0) {
      return 0;
    }
    if (*piVar1 == 0) {
      FUN_005f6990(piVar1);
    }
  }
  puVar2 = (undefined4 *)*piVar1;
  if (puVar2 != (undefined4 *)0x0) {
    puVar6 = &local_c;
    iVar4 = (**(code **)*puVar2)(puVar2);
    iVar3 = local_8;
    if ((-1 < iVar4) && (unaff_EDI != (int *)0x0)) {
      *(int *)(local_8 + 0xac) = param_2;
      *(undefined4 *)(local_8 + 0xa0) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(local_8 + 0xa4) = *(undefined4 *)(param_2 + 0x34);
      iVar4 = (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,&stack0xffffffec);
      if ((-1 < iVar4) && (puVar6 != (undefined4 *)0x0 || unaff_EDI != (int *)0x0)) {
        *(undefined4 *)(iVar3 + 0xa8) = 5;
        *(int **)(iVar3 + 0xb0) = &DAT_00610db0;
        *(uint *)(iVar3 + 0x9c) = *(uint *)(iVar3 + 0x9c) & 0xfffffd0b | 0x100;
        FUN_00446940(iVar3);
        lParam = 0;
        wParam = FUN_00445160(iVar3);
        SendMessageA(*(HWND *)(iVar3 + 0x144),0x602,wParam,lParam);
        FUN_00444b90(iVar3,0);
        FUN_00444b90(iVar3,1);
        FUN_00445cb0(iVar3);
        uVar5 = 1;
      }
      (**(code **)(DAT_00610db0 + 8))(&DAT_00610db0);
    }
  }
  return uVar5;
}


