/* Module: vegas30.exe
   Function: FUN_005bea00
   Address: 005bea00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_005bea00(int param_1,undefined4 param_2,undefined4 param_3,LPSTR param_4,int param_5,
            uint *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPCSTR lpString2;
  uint uVar4;
  undefined4 uVar5;
  int local_108;
  undefined1 local_104 [260];
  
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),0);
  uVar4 = 1;
  iVar2 = FUN_005be790(param_2,param_3,&local_108);
  if (iVar2 == 1) {
    piVar1 = *(int **)(param_1 + 0x78);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((local_108 < 0) || (iVar2 + -1 < local_108)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[2] + local_108 * 4);
    }
    if (iVar2 == 0) goto LAB_005beb61;
    iVar3 = FUN_00508960(local_104,iVar2,0x104);
  }
  else {
    if (iVar2 == 2) {
      if (local_108 == 0) {
        uVar5 = 0x698f;
      }
      else if (local_108 == 1) {
        uVar5 = 0x6990;
      }
      else {
        if (local_108 != 2) goto LAB_005beb61;
        uVar5 = 0x6991;
      }
      lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,uVar5);
      lstrcpynA(param_4,lpString2,param_5);
      param_4[param_5 + -1] = '\0';
      goto LAB_005beb61;
    }
    if (iVar2 != 3) goto LAB_005beb61;
    piVar1 = *(int **)(param_1 + 0x7c);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((local_108 < 0) || (iVar2 + -1 < local_108)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[2] + local_108 * 4);
    }
    if (iVar2 == 0) goto LAB_005beb61;
    iVar3 = FUN_00508960(local_104,iVar2,0x104);
  }
  if (iVar3 != 0) {
    FUN_0050ab70(local_104,param_4,param_5);
  }
  uVar4 = ~*(uint *)(iVar2 + 0x78) & 1;
LAB_005beb61:
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar4;
  }
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),0);
  return;
}


