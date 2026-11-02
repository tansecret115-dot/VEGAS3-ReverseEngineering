/* Module: vegas30.exe
   Function: FUN_0041ada0
   Address: 0041ada0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041ada0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_EBX;
  WPARAM WVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = param_2;
  iVar2 = param_1;
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 2:
    FUN_005b8630(*(undefined4 *)(param_1 + 700));
    FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(iVar2 + 0x1bc),*(undefined4 *)(iVar2 + 0x94),
                 *(undefined4 *)(iVar2 + 0x80));
    FUN_004e9f70(*(undefined4 *)(iVar2 + 700),0x218,0);
    FUN_004ea250(*(undefined4 *)(iVar2 + 700),*(undefined4 *)(iVar2 + 0x94),0x21,0);
    Transport_Suspend();
    iVar3 = param_2;
    FUN_005d1250(*(undefined4 *)(iVar2 + 700),*(undefined4 *)(iVar2 + 0x94),param_2);
    Transport_Resume(0);
    FUN_004eb2b0(*(undefined4 *)(iVar2 + 700));
    FUN_004ea040(*(undefined4 *)(iVar2 + 700),0);
    iVar4 = FUN_005d1590(*(undefined4 *)(iVar2 + 0x94));
    if (iVar4 == 0) {
      *(uint *)**(undefined4 **)(iVar2 + 700) = *(uint *)**(undefined4 **)(iVar2 + 700) | 8;
      FUN_00422110(iVar2,1);
      return;
    }
    FUN_00419310(iVar2);
    if (iVar3 < 1) {
      WVar6 = 0;
    }
    else {
      WVar6 = iVar3 - 1;
    }
    if (*(HWND *)(iVar2 + 0x1b4) != (HWND)0x0) {
      SendMessageA(*(HWND *)(iVar2 + 0x1b4),0x602,WVar6,0);
    }
    FUN_0041a890(iVar2,WVar6);
    return;
  case 3:
  case 4:
    break;
  case 5:
    iVar4 = FUN_00418e90(*(undefined4 *)(param_1 + 0x90));
    iVar3 = param_2;
    param_1 = 0;
    FUN_0041aa30(iVar2,param_2,&param_1);
    if (param_1 != 0) {
      iVar5 = Transport_IsPreviewPlaying();
      if (iVar5 != 0) {
        FUN_00561900(*(undefined4 *)(iVar2 + 0x94),*(undefined4 *)(iVar2 + 0x98),0,
                     *(undefined4 *)(iVar2 + 0x90));
      }
      (**(code **)(**(int **)(iVar2 + 0x90) + 0x90))(*(int **)(iVar2 + 0x90),param_1);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      if (iVar5 != 0 && iVar4 != 1) {
        FUN_005618a0(*(undefined4 *)(iVar2 + 0x94),*(undefined4 *)(iVar2 + 0x98),0,
                     *(undefined4 *)(iVar2 + 0x90));
      }
    }
    FUN_00419310(iVar2);
    if (iVar3 < 1) {
      WVar6 = 0;
    }
    else {
      WVar6 = iVar3 - 1;
    }
    SendMessageA(*(HWND *)(iVar2 + 0x1b4),0x602,WVar6,0);
    FUN_00418c70(iVar2);
    FUN_0041a890(iVar2,WVar6);
    return;
  default:
    goto switchD_0041adb9_default;
  }
  param_1 = 0;
  FUN_0041aa30(iVar2,param_2,&param_1);
  if (param_1 == 0) {
    return;
  }
  FUN_005b8630(*(undefined4 *)(iVar2 + 700));
  if (*(int *)(iVar2 + 0x8c) == 4) {
    FUN_005b4320(1,*(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(iVar2 + 0x1bc),0,
                 *(undefined4 *)(iVar2 + 0x80));
    FUN_004e9f70(*(undefined4 *)(iVar2 + 700),*(int *)(iVar2 + 0x88) + 0xca,0);
    uVar8 = *(undefined4 *)(iVar2 + 0x88);
    uVar7 = 1;
LAB_0041b04d:
    FUN_004ea590(*(undefined4 *)(iVar2 + 700),uVar7,uVar8,0x1d);
  }
  else if (*(int *)(iVar2 + 0x8c) == 3) {
    FUN_005b4320(4,*(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(iVar2 + 0x1bc),0,
                 *(undefined4 *)(iVar2 + 0x80));
    FUN_004e9f70(*(undefined4 *)(iVar2 + 700),*(int *)(iVar2 + 0x88) + 0x198,0);
    uVar8 = *(undefined4 *)(iVar2 + 0x88);
    uVar7 = 4;
    goto LAB_0041b04d;
  }
  Transport_Suspend();
  (**(code **)(**(int **)(iVar2 + 0x90) + 0x90))(*(int **)(iVar2 + 0x90),param_1);
  (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  Transport_Resume(0);
  puVar1 = *(undefined4 **)(iVar2 + 700);
  iVar4 = FUN_00418e90(*(undefined4 *)(iVar2 + 0x90));
  if (iVar4 == 0) {
    uVar8 = *(undefined4 *)(iVar2 + 0x88);
    *(uint *)*puVar1 = *(uint *)*puVar1 | 0x8000;
    if (*(int *)(iVar2 + 0x8c) == 3) {
      FUN_00422110(iVar2,1);
      FUN_00422ed0(puVar1,uVar8,0);
      FUN_004eb2b0(puVar1);
      FUN_004ea040(puVar1,0);
      return;
    }
    FUN_00422110(iVar2,1);
    FUN_004eb2b0(puVar1);
    FUN_004ea040(puVar1,0);
    return;
  }
  FUN_00419310(iVar2);
  if (iVar3 < 1) {
    WVar6 = 0;
  }
  else {
    WVar6 = iVar3 - 1;
  }
  if (*(HWND *)(iVar2 + 0x1b4) != (HWND)0x0) {
    SendMessageA(*(HWND *)(iVar2 + 0x1b4),0x602,WVar6,0);
  }
  FUN_0041a890(iVar2,WVar6);
  FUN_004eb2b0(puVar1);
  FUN_004ea040(puVar1,0);
switchD_0041adb9_default:
  return;
}


