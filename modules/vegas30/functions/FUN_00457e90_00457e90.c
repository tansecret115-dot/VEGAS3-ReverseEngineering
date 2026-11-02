/* Module: vegas30.exe
   Function: FUN_00457e90
   Address: 00457e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457e90(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  if ((param_3 < 1) && (param_3 < 0)) {
    param_2 = 0;
    param_3 = 0;
  }
  else if ((0x3fffffff < param_3) && ((0x40000000 < param_3 || (param_2 != 0)))) {
    param_2 = 0;
    param_3 = 0x40000000;
  }
  if ((param_2 != *(uint *)(param_1 + 0x600)) || (param_3 != *(int *)(param_1 + 0x604))) {
    if ((param_2 == 0) && (param_3 == 0)) {
      uVar1 = 0;
      uVar3 = 0;
      iVar4 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0xb90);
      iVar4 = *(int *)(param_1 + 0xb94);
      uVar1 = *(uint *)(param_1 + 0xb88);
      iVar2 = *(int *)(param_1 + 0xb8c);
      if (((uVar3 == 0 && iVar4 == 0) || (*(int *)(param_1 + 0x604) < iVar4)) ||
         ((*(int *)(param_1 + 0x604) <= iVar4 && (*(uint *)(param_1 + 0x600) < uVar3)))) {
        uVar1 = 0;
        iVar2 = 0;
        uVar3 = param_2;
        iVar4 = param_3;
      }
      else {
        iVar5 = iVar2 + iVar4 + (uint)CARRY4(uVar1,uVar3);
        if ((param_3 <= iVar5) && ((param_3 < iVar5 || (param_2 < uVar1 + uVar3)))) {
          if ((param_3 < iVar4) || ((param_3 <= iVar4 && (param_2 <= uVar3)))) {
            uVar1 = 0;
            iVar2 = 0;
          }
          else {
            uVar1 = param_2 - uVar3;
            iVar2 = (param_3 - iVar4) - (uint)(param_2 < uVar3);
          }
        }
      }
    }
    *(uint *)(param_1 + 0x600) = param_2;
    *(int *)(param_1 + 0x604) = param_3;
    if (DAT_00647630 == param_1) {
      DAT_0064b4d0 = param_2;
      DAT_0064b4d4 = param_3;
    }
    FUN_004543c0(param_1,uVar1,iVar2,uVar3,iVar4,1);
  }
  return;
}


