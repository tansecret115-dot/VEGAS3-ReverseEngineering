/* Module: vegas30.exe
   Function: FUN_00419310
   Address: 00419310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419310(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  int *piVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int local_654;
  int *local_650;
  undefined1 local_638 [256];
  undefined1 auStack_538 [4];
  int local_534 [3];
  undefined1 local_528 [1308];
  int iStack_c;
  
  piVar4 = local_534;
  for (iVar1 = 0x14d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar1 = 0;
  iVar3 = 0;
  local_650 = (int *)0x0;
  local_654 = 0;
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 2:
    if (*(int *)(*(int *)(param_1 + 0x94) + 0x244) == 0) {
      piVar4 = *(int **)(*(int *)(param_1 + 0x94) + 0x234);
      if (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
      }
      puVar5 = local_528;
    }
    else {
      iVar1 = FUN_005d0420();
      puVar5 = local_528;
    }
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 0x94) + 0x234);
      if (piVar4 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar4;
      }
      if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
        puVar6 = (uint *)0x0;
      }
      else {
        puVar6 = *(uint **)(piVar4[2] + iVar3 * 4);
      }
      if (puVar6 == (uint *)0x0) break;
      iVar2 = FUN_00508b40(local_638);
      if (iVar2 == 0) {
        _SfLoadString_16(DAT_00647204,0x50be);
      }
      else {
        FUN_0050ab70(local_638);
      }
      *(int *)(puVar5 + 0x20) = iVar3;
      iVar3 = iVar3 + 1;
      *(uint *)(puVar5 + 0x24) = *puVar6 >> 1 & 1;
      puVar5 = puVar5 + 0x28;
    } while (iVar3 < iVar1);
    local_534[0] = 0x534;
    local_534[2] = ((uint)(1 < iVar3) ^ local_534[2]) & 1 ^ local_534[2] | 6;
    local_534[1] = iVar3;
    goto switchD_0041934e_default;
  case 3:
  case 4:
    iVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0xb8))();
    if ((-1 < iVar1) && (local_650 != (int *)0x0)) {
      piVar4 = &local_654;
      piVar9 = (int *)0x0;
      piVar8 = local_650;
      iVar1 = (**(code **)(*local_650 + 0xc))();
      if (iVar1 == 0) {
        puVar5 = auStack_538;
        do {
          piVar10 = piVar9;
          (**(code **)(*piVar9 + 0x10))(piVar9,&DAT_006336f8,&stack0xfffff9a4);
          piVar7 = (int *)&stack0xfffff99c;
          (**(code **)(*piVar4 + 0xc))(piVar4);
          iVar1 = FUN_00508b40(&stack0xfffff9a4,&stack0xfffff994,0x104);
          if (iVar1 == 0) {
            _SfLoadString_16(DAT_00647204,0x50be,puVar5,0x20);
          }
          else {
            FUN_0050ab70(&stack0xfffff9a4,puVar5,0x20);
          }
          (**(code **)(*piVar8 + 8))(piVar8);
          *(int *)(puVar5 + 0x20) = iVar3;
          iVar1 = (**(code **)(*piVar9 + 0x50))(piVar9);
          *(uint *)(puVar5 + 0x24) = (uint)(iVar1 == 0);
          (**(code **)(*piVar7 + 8))(piVar7);
          iVar3 = iVar3 + 1;
          puVar5 = puVar5 + 0x28;
          param_1 = iStack_c;
        } while ((iVar3 < 0x20) &&
                (iVar1 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1,&stack0xfffff99c,0),
                param_1 = iStack_c, piVar9 = piVar10, iVar1 == 0));
      }
LAB_00419639:
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    break;
  case 5:
    iVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0xb8))();
    if ((-1 < iVar1) && (local_650 != (int *)0x0)) {
      piVar4 = &local_654;
      piVar9 = (int *)0x0;
      piVar8 = local_650;
      iVar1 = (**(code **)(*local_650 + 0xc))();
      if (iVar1 == 0) {
        puVar5 = auStack_538;
        do {
          piVar10 = piVar9;
          (**(code **)(*piVar9 + 0x10))(piVar9,&DAT_006336f8,&stack0xfffff9a4);
          piVar7 = (int *)&stack0xfffff99c;
          (**(code **)(*piVar4 + 0xc))(piVar4);
          iVar1 = FUN_00508b40(&stack0xfffff9a4,&stack0xfffff994,0x104);
          if (iVar1 == 0) {
            _SfLoadString_16(DAT_00647204,0x50be,puVar5,0x20);
          }
          else {
            FUN_0050ab70(&stack0xfffff9a4,puVar5,0x20);
          }
          (**(code **)(*piVar8 + 8))(piVar8);
          *(int *)(puVar5 + 0x20) = iVar3;
          iVar1 = (**(code **)(*piVar9 + 0x50))(piVar9);
          *(uint *)(puVar5 + 0x24) = (uint)(iVar1 == 0);
          (**(code **)(*piVar7 + 8))(piVar7);
          iVar3 = iVar3 + 1;
          puVar5 = puVar5 + 0x28;
          param_1 = iStack_c;
        } while ((iVar3 < 0x20) &&
                (iVar1 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1,&stack0xfffff99c,0),
                param_1 = iStack_c, piVar9 = piVar10, iVar1 == 0));
      }
      goto LAB_00419639;
    }
    break;
  default:
    goto switchD_0041934e_default;
  }
  local_534[0] = 0x534;
  local_534[2] = ((uint)(1 < iVar3) ^ local_534[2]) & 1 ^ local_534[2] | 6;
  local_534[1] = iVar3;
switchD_0041934e_default:
  *(int *)(param_1 + 0x1b8) = iVar3;
  if (*(HWND *)(param_1 + 0x1b4) != (HWND)0x0) {
    SendMessageA(*(HWND *)(param_1 + 0x1b4),0x608,0,(LPARAM)local_534);
  }
  return;
}


