/* Module: aifplug.dll
   Function: FUN_5fbe7e40
   Address: 5fbe7e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbe7e40(byte *param_1,int param_2,int param_3,ushort *param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  
  cVar2 = FUN_5fbe6920(param_4);
  uVar8 = (uint)param_4[6];
  iVar4 = (int)((ulonglong)uVar8 / (ulonglong)(longlong)(int)(uint)param_4[1]);
  if (param_4[1] == 1) {
    uVar5 = FUN_5fbf1070(param_4,param_1,param_4,param_3,param_5,0x3f800000);
    return uVar5;
  }
  pbVar9 = (byte *)(iVar4 * param_2 + param_3);
  switch(CONCAT31(extraout_var,cVar2)) {
  case 0x10:
    if (0 < param_5) {
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + uVar8;
        iVar6 = (int)(short)((ushort)bVar1 << 8 ^ 0x8000);
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        *param_1 = (byte)((uint)iVar6 >> 8) ^ 0x80;
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x11:
    if (0 < param_5) {
      do {
        sVar3 = *(short *)pbVar9;
        pbVar9 = pbVar9 + uVar8;
        if (sVar3 < -0x8000) {
          sVar3 = -0x8000;
        }
        else if (0x7fff < sVar3) {
          sVar3 = 0x7fff;
        }
        *(short *)param_1 = sVar3;
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x12:
    if (0 < param_5) {
      param_4 = (ushort *)param_5;
      do {
        iVar6 = ftol();
        if (iVar6 < -0x800000) {
          iVar7 = -0x800000;
        }
        else {
          iVar7 = 0x7fffff;
          if (iVar6 < 0x800000) {
            iVar7 = iVar6;
          }
        }
        *(short *)param_1 = (short)iVar7;
        param_1[2] = (byte)((uint)iVar7 >> 0x10);
        param_4 = (ushort *)((int)param_4 + -1);
        param_1 = param_1 + iVar4;
      } while (param_4 != (ushort *)0x0);
      return 0;
    }
    break;
  case 0x13:
    if (0 < param_5) {
      do {
        uVar5 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + uVar8;
        *(undefined4 *)param_1 = uVar5;
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  default:
    return 0x80004005;
  case 0x20:
    if (0 < param_5) {
      do {
        uVar5 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + uVar8;
        *(undefined4 *)param_1 = uVar5;
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  return 0;
}


