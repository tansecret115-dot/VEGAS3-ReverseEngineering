/* Module: sftrans1.dll
   Function: FUN_005442a0
   Address: 005442a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005442a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x14) == 1) {
    return 0;
  }
  iVar2 = param_2 * 0xc;
  switch(*(undefined4 *)(&DAT_0057694c + iVar2)) {
  case 0:
    *(undefined1 *)(param_1 + 0x88) = 1;
    iVar4 = param_1 + 0x1c;
    break;
  case 1:
    iVar4 = param_1 + 0x20;
    break;
  case 2:
    iVar4 = param_1 + 0x30;
    break;
  case 3:
    iVar4 = param_1 + 0x44;
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x88) = 1;
    iVar4 = param_1 + 100;
    break;
  default:
    iVar4 = param_3;
    if (*(int *)(&DAT_00576948 + iVar2) != 0) {
      return 5;
    }
  }
  iVar1 = *(int *)(&DAT_00576948 + iVar2);
  if (iVar1 == 0) {
    uVar3 = FUN_00544380(param_2,param_3);
    return uVar3;
  }
  if (iVar1 == 1) {
    *(undefined1 *)(*(int *)(&DAT_00576950 + iVar2) + iVar4) = (undefined1)param_3;
    return 0;
  }
  if (iVar1 == 2) {
    *(int *)(*(int *)(&DAT_00576950 + iVar2) + iVar4) = param_3;
    return 0;
  }
  return 5;
}


