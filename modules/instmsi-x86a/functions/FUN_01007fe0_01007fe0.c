/* Module: InstMsi-x86a.exe
   Function: FUN_01007fe0
   Address: 01007fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_01007fe0(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  byte local_2d4 [24];
  short local_2bc [94];
  short local_200 [256];
  
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 1;
    uVar2 = FUN_01007dc0(param_1,4);
    local_2d4[iVar5] = (byte)uVar2;
    iVar5 = iVar4;
  } while (iVar4 < 0x14);
  if (*(int *)(param_1 + 0x2ebc) != 0) {
    return false;
  }
  iVar5 = 0;
  FUN_01008dbc(local_200,local_2d4,param_1,0x14,(int)local_2d4,8,(undefined4 *)local_200,
               (int)local_2bc);
  if (0 < param_2) {
    do {
      sVar3 = *(short *)((int)local_200 + ((*(uint *)(param_1 + 0x2eb0) & 0xff7fffff) >> 0x17));
      if (sVar3 < 0) {
        uVar2 = 0x800000;
        do {
          if ((uVar2 & *(uint *)(param_1 + 0x2eb0)) == 0) {
            sVar3 = local_2bc[-sVar3 * 2];
          }
          else {
            sVar3 = local_2bc[-sVar3 * 2 + 1];
          }
          uVar2 = uVar2 >> 1;
        } while (sVar3 < 0);
      }
      FUN_01007cf0(param_1,local_2d4[sVar3]);
      if (*(int *)(param_1 + 0x2ebc) != 0) {
        return false;
      }
      if (sVar3 == 0x11) {
        uVar2 = FUN_01007dc0(param_1,4);
        iVar4 = (uVar2 & 0xff) + 4;
        if (param_2 <= (int)(iVar5 + 4 + (uVar2 & 0xff))) {
          iVar4 = param_2 - iVar5;
        }
        for (; 0 < iVar4; iVar4 = iVar4 + -1) {
          *(undefined1 *)(iVar5 + param_4) = 0;
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 + -1;
      }
      else if (sVar3 == 0x12) {
        uVar2 = FUN_01007dc0(param_1,5);
        iVar4 = (uVar2 & 0xff) + 0x14;
        if (param_2 <= (int)(iVar5 + 0x14 + (uVar2 & 0xff))) {
          iVar4 = param_2 - iVar5;
        }
        for (; 0 < iVar4; iVar4 = iVar4 + -1) {
          *(undefined1 *)(iVar5 + param_4) = 0;
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 + -1;
      }
      else if (sVar3 == 0x13) {
        uVar2 = FUN_01007dc0(param_1,1);
        iVar4 = (uVar2 & 0xff) + 4;
        if (param_2 <= (int)(iVar5 + 4 + (uVar2 & 0xff))) {
          iVar4 = param_2 - iVar5;
        }
        sVar3 = *(short *)((int)local_200 + ((*(uint *)(param_1 + 0x2eb0) & 0xff7fffff) >> 0x17));
        if (sVar3 < 0) {
          uVar2 = 0x800000;
          do {
            if ((uVar2 & *(uint *)(param_1 + 0x2eb0)) == 0) {
              sVar3 = local_2bc[-sVar3 * 2];
            }
            else {
              sVar3 = local_2bc[-sVar3 * 2 + 1];
            }
            uVar2 = uVar2 >> 1;
          } while (sVar3 < 0);
        }
        FUN_01007cf0(param_1,local_2d4[sVar3]);
        uVar1 = (&DAT_010015e1)[(uint)*(byte *)(iVar5 + param_3) - (int)sVar3];
        for (; 0 < iVar4; iVar4 = iVar4 + -1) {
          *(undefined1 *)(iVar5 + param_4) = uVar1;
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 + -1;
      }
      else {
        *(undefined *)(iVar5 + param_4) =
             (&DAT_010015e1)[(uint)*(byte *)(iVar5 + param_3) - (int)sVar3];
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  return *(int *)(param_1 + 0x2ebc) == 0;
}


