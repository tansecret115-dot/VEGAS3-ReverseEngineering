/* Module: vegas30.exe
   Function: FUN_0040d540
   Address: 0040d540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d540(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xb4) != 0) && (param_4 == 0)) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | param_2;
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | param_3;
    return;
  }
  param_3 = param_3 | *(uint *)(param_1 + 0x11c);
  param_2 = param_2 | *(uint *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (((param_3 & 0x40000) != 0) && (DAT_00647630 != 0)) {
    FUN_00435bc0(DAT_00647630);
  }
  if (*(int *)(DAT_0064762c + 0x74) != 0) {
    FUN_00573500(param_2,param_3);
  }
  if (DAT_00647630 != 0) {
    FUN_004a0b60(DAT_00647630,param_2,param_3);
  }
  if ((param_2 & 0x8000) != 0) {
    FUN_005625c0(&DAT_0064b538);
  }
  if (*(int *)(DAT_0064762c + 0xa4) != 0) {
    FUN_0051f4a0(param_2,param_3);
  }
  if (*(int *)(DAT_0064762c + 0xa0) != 0) {
    FUN_0044c9a0(param_2,param_3);
  }
  if (*(int *)(DAT_0064762c + 0x78) != 0) {
    FUN_0048ffd0(*(int *)(DAT_0064762c + 0x78),param_2,param_3);
  }
  if (*(int *)(DAT_0064762c + 0x70) != 0) {
    FUN_004e4790(*(int *)(DAT_0064762c + 0x70),param_2,param_3);
  }
  if ((*(int *)(DAT_0064762c + 0x80) != 0) && (((param_2 & 4) != 0 || ((param_2 & 0x400) != 0)))) {
    FUN_00428510(*(int *)(DAT_0064762c + 0x80));
  }
  FUN_005a4e40(param_2,param_3);
  if ((DAT_0064b4a8 != 0) && ((param_3 & 0x4000) != 0)) {
    FUN_00506240(DAT_0064b4a8);
  }
  if ((DAT_0064b184 != 0) && ((param_2 & 0x24) != 0)) {
    FUN_0043b290(DAT_0064b184);
  }
  if ((*(int *)(DAT_0064762c + 0xac) != 0) && ((param_2 & 2) != 0)) {
    FUN_0043a200(*(int *)(DAT_0064762c + 0xac));
    FUN_005fb030(DAT_0064b138);
    FUN_005fb090(DAT_0064b138);
    FUN_00589e40();
  }
  FUN_00422880(param_2,param_3);
  if ((param_2 & 1) != 0) {
    FUN_00435230(DAT_0064b138);
    if ((int)DAT_0064720c < 0) {
      PostMessageA(DAT_00647624,0x10,DAT_0064720c,0);
    }
  }
  if ((param_3 & 0x40000) != 0) {
    iVar1 = Transport_IsAnyPlaying();
    if (iVar1 == 0) {
      FUN_005cb410(DAT_0064b138);
    }
  }
  if (*(int *)(DAT_0064762c + 0x7c) != 0) {
    FUN_005495c0(*(int *)(DAT_0064762c + 0x7c),param_2,param_3);
  }
  if ((param_3 & 0x400000) != 0) {
    FUN_005ec620();
    FUN_005ed690();
    param_2 = param_2 | 0x100;
  }
  iVar1 = DAT_0064b138;
  if (((param_2 & 0x100) != 0) && (DAT_0064b138 != 0)) {
    FUN_005c5ea0(DAT_0064b138);
    FUN_004e4f20();
    FUN_005b83b0(iVar1,1);
    FUN_005bad20(iVar1);
    FUN_005ec7d0();
    FUN_005b84d0(iVar1,1);
  }
  if ((param_2 & 0x2000) != 0) {
    if (*(int *)(DAT_0064762c + 0x84) != 0) {
      FUN_00500190(*(int *)(DAT_0064762c + 0x84),param_2);
    }
    if (*(int *)(DAT_0064762c + 0x88) != 0) {
      FUN_00500210(*(int *)(DAT_0064762c + 0x88),param_2);
    }
    if (*(int *)(DAT_0064762c + 0x8c) != 0) {
      FUN_00500210(*(int *)(DAT_0064762c + 0x8c),param_2);
    }
  }
  return;
}


