/* Module: vegas30.exe
   Function: FUN_0046ac80
   Address: 0046ac80
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall
FUN_0046ac80(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = false;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = FUN_005b87b0(*(undefined4 *)(param_1 + 4));
  if ((((-1 < param_3) || (bVar5 = param_3 != -2, -1 < param_3)) &&
      (param_3 < *(int *)(param_1 + 0xc))) &&
     (*(int *)(*(int *)(*(int *)(iVar1 + 8) + param_3 * 4) + 4) != param_4)) {
    bVar5 = true;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  param_7 = iVar2 - param_7;
  *(int *)(param_1 + 0x18) = param_7;
  if (param_7 < -1) {
    param_7 = -1;
  }
  else if (1 < param_7) {
    param_7 = 1;
  }
  *(int *)(param_1 + 0x1c) = param_7;
  iVar3 = -1;
  iVar4 = iVar3;
  if (((DAT_00649f40 != 0) && (param_7 != 0)) && (-1 < iVar2)) {
    while ((iVar4 = iVar3, iVar2 < *(int *)(param_1 + 0xc) &&
           (iVar4 = iVar2, (*(byte *)(*(int *)(*(int *)(iVar1 + 8) + iVar2 * 4) + 0x10) & 0x10) == 0
           ))) {
      iVar2 = iVar2 + param_7;
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
        return bVar5;
      }
    }
  }
  *(int *)(param_1 + 0x14) = iVar4;
  return bVar5;
}


