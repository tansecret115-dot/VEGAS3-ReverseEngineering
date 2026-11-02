/* Module: vegas30.exe
   Function: FUN_004457c0
   Address: 004457c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004457c0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *local_314 [63];
  undefined1 uStack_215;
  WCHAR aWStack_214 [6];
  undefined1 auStack_208 [520];
  
  if (param_1 == 0) {
    return 0x80004005;
  }
  if ((*(int *)(param_1 + 0xa8) == 5) && (piVar7 = *(int **)(param_1 + 0xb0), piVar7 != (int *)0x0))
  {
    iVar1 = (**(code **)(*piVar7 + 0x28))(piVar7,local_314);
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x48))(*(int **)(param_1 + 0xb0));
    if (-1 < iVar1) {
      piVar7 = (int *)0x104;
      (**(code **)(*local_314[0] + 0x34))(local_314[0],auStack_208);
      if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_214,-1,&stack0xfffffce8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      uStack_215 = 0;
      pcVar2 = (char *)FUN_005ec620();
      if ((*pcVar2 != '\0') &&
         (iVar1 = FUN_00436ff0(&stack0xfffffce4), (*(byte *)(iVar1 + 0x18) & 2) != 2)) {
        *(uint *)(*(int *)(iVar1 + 4) + 0x134) = *(uint *)(*(int *)(iVar1 + 4) + 0x134) | 0x80;
        DAT_0064767c = DAT_0064767c | 0x100;
      }
      (**(code **)(*piVar7 + 8))(piVar7);
    }
  }
  if ((*(byte *)(param_1 + 0x9c) & 8) == 0) {
    return 0;
  }
  uVar4 = 0;
  if (param_2 == 0) {
    FUN_004eb2b0(*(undefined4 *)(param_1 + 0x88));
    iVar1 = *(int *)(param_1 + 0xb4);
    if (iVar1 != 0) {
      uVar3 = *(int *)(iVar1 + 0x7c) + 1;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      *(uint *)(iVar1 + 0x7c) = uVar3;
    }
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
    case 7:
    case 8:
      uVar4 = FUN_004ea040(*(undefined4 *)(param_1 + 0x88),0);
      uVar5 = *(undefined4 *)(param_1 + 0x88);
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xac) + 8);
      break;
    case 2:
    case 3:
      uVar4 = FUN_004ea040(*(undefined4 *)(param_1 + 0x88),0);
      uVar6 = *(undefined4 *)(param_1 + 0xac);
      uVar5 = *(undefined4 *)(param_1 + 0x88);
      break;
    case 4:
    case 6:
      uVar4 = FUN_004ea040(*(undefined4 *)(param_1 + 0x88),0);
      uVar5 = *(undefined4 *)(param_1 + 0x88);
      uVar6 = 0;
      break;
    case 5:
      uVar4 = FUN_004ea040(*(undefined4 *)(param_1 + 0x88),0);
      uVar5 = *(undefined4 *)(param_1 + 0x88);
      uVar6 = 0;
      break;
    default:
      goto switchD_00445940_default;
    }
    FUN_005410b0(uVar5,uVar6,0);
  }
switchD_00445940_default:
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffff7;
  return uVar4;
}


