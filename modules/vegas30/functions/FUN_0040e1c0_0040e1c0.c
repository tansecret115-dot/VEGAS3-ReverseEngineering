/* Module: vegas30.exe
   Function: FUN_0040e1c0
   Address: 0040e1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040e1c0(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_100 [256];
  
  puVar3 = &DAT_0060f98c;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    return;
  }
  if ((((param_2 == 0) && (param_4 == 0xffff)) || ((param_4 & 0x2012) != 0)) || (param_3 == 0))
  goto LAB_0040e50c;
  if ((0xa24d < param_3) && (param_3 < 0xa269)) {
    iVar1 = param_3 - 0xa20e;
    uVar2 = _SfGetString_8(DAT_00647204,0x5109);
    SfPrintF(local_100,uVar2,iVar1);
    FUN_004e8390(local_100);
    return;
  }
  if ((0xa315 < param_3) && (param_3 < 0xa331)) {
    iVar1 = param_3 - 0xa2d6;
    uVar2 = _SfGetString_8(DAT_00647204,0x5105);
    SfPrintF(local_100,uVar2,iVar1);
    FUN_004e8390(local_100);
    return;
  }
  if ((0xa202 < param_3) && (param_3 < 0xa223)) {
    iVar1 = param_3 - 0xa202;
    uVar2 = _SfGetString_8(DAT_00647204,0x510a);
    SfPrintF(local_100,uVar2,iVar1);
    FUN_004e8390(local_100);
    return;
  }
  if ((0xa2ca < param_3) && (param_3 < 0xa2eb)) {
    iVar1 = param_3 - 0xa2ca;
    uVar2 = _SfGetString_8(DAT_00647204,0x5106);
    SfPrintF(local_100,uVar2,iVar1);
    FUN_004e8390(local_100);
    return;
  }
  if ((param_3 < 0x1a70) || (0x1b6c < param_3)) {
    if ((param_3 < 0x2198) || (0x2397 < param_3)) {
      if ((0x1b6c < param_3) && (param_3 < 0x1b70)) goto LAB_0040e4f3;
      if ((param_3 < 0x1970) || (0x1a6f < param_3)) {
        if ((param_3 < 6000) || (0x186f < param_3)) {
          if ((0x1c72 < param_3) && (param_3 < 0x205c)) {
            param_3 = 0x6d69;
            goto LAB_0040e4f3;
          }
          if ((param_3 < 0x1b73) || (0x1c72 < param_3)) {
            if ((param_3 < 0xc516) || (0xc52d < param_3)) {
              if ((param_3 < 0xc520) || (0xc522 < param_3)) {
                if ((param_3 < 0x9c41) || (0x9c4d < param_3)) {
                  if (((param_3 < 0x2134) || (0x2165 < param_3)) &&
                     ((param_3 < 0x2166 || (0x2197 < param_3)))) goto LAB_0040e4f3;
                  uVar2 = _SfGetString_8(DAT_00647204,0x6d8b);
                }
                else {
                  uVar2 = _SfGetString_8(DAT_00647204,param_3);
                }
              }
              else {
                param_3 = 0x6db6;
LAB_0040e4f3:
                uVar2 = _SfGetString_8(DAT_00647204,param_3);
              }
            }
            else {
              uVar2 = _SfGetString_8(DAT_00647204,0x6dbe);
            }
          }
          else {
            uVar2 = _SfGetString_8(DAT_00647204,0x6d67);
          }
        }
        else {
          uVar2 = _SfGetString_8(DAT_00647204,0x6d68);
        }
      }
      else {
        uVar2 = _SfGetString_8(DAT_00647204,0x6d65);
      }
    }
    else {
      uVar2 = _SfGetString_8(DAT_00647204,0x6d64);
    }
  }
  else {
    uVar2 = _SfGetString_8(DAT_00647204,0x6d64);
  }
  puVar3 = local_100;
  SfPrintF(puVar3,uVar2);
LAB_0040e50c:
  FUN_004e8390(puVar3);
  return;
}


