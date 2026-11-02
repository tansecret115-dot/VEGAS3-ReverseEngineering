/* Module: vegas30k.dll
   Function: _PanInst_Message@16
   Address: 010b3b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _PanInst_Message_16(int param_1,uint param_2,uint param_3,uint param_4)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  
                    /* 0xb3b30  691  _PanInst_Message@16 */
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      return 0;
    }
    switch(param_2) {
    case 1:
    case 2:
    case 5:
      return 0;
    case 7:
      FUN_010b15a0(param_1,param_3);
      return 0;
    case 8:
      FUN_010b15d0(param_1,param_3);
      return 0;
    case 10:
      FUN_010b32d0(param_1,param_3);
      return 0;
    }
  }
  else {
    sVar1 = (short)param_4;
    sVar3 = (short)(param_4 >> 0x10);
    if (param_2 < 0x203) {
      if (param_2 == 0x202) {
        FUN_010b0ca0(param_1,(int)sVar1,(int)sVar3,param_3);
        return 0;
      }
      if (param_2 < 0x101) {
        if (param_2 == 0x100) {
          FUN_010b2e80(param_1,param_3,1,(int)sVar1,param_4 >> 0x10);
          return 0;
        }
        if (param_2 == 0x14) {
          FUN_010af590(param_1,param_3,0);
          return 0;
        }
        if (param_2 == 0x1f) {
          FUN_010b0ca0(param_1,0,0,0);
          return 0;
        }
        if (param_2 == 0x87) {
          return 0;
        }
      }
      else {
        if (param_2 == 0x101) {
          FUN_010b2e80(param_1,param_3,0,(int)sVar1,param_4 >> 0x10);
          return 0;
        }
        if (param_2 == 0x200) {
          if ((*(uint *)(param_1 + 4) & 0x800) == 0) {
            FUN_010b0cc0(param_1,(int)sVar1,(int)sVar3,param_3);
            return 0;
          }
          return 0;
        }
        if (param_2 == 0x201) {
          FUN_010af710(param_1,0,(int)sVar1,(int)sVar3,param_3);
          return 0;
        }
      }
    }
    else {
      switch(param_2) {
      case 0x203:
        FUN_010af710(param_1,1,(int)sVar1,(int)sVar3,param_3);
        return 0;
      case 0x204:
      case 0x206:
        if ((param_3 & 1) != 0) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000;
          return 0;
        }
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffefff;
        return 0;
      case 0x205:
        if ((*(uint *)(param_1 + 4) & 0x1000) != 0) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffefff;
          return 0;
        }
        return 0;
      case 0x20a:
        FUN_010b0d10(param_1,(int)sVar1,(int)sVar3,(int)(short)(param_3 >> 0x10),param_3 & 0xffff);
        return 0;
      case 0x215:
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffefff;
        ClipCursor((RECT *)0x0);
        return 0;
      }
    }
  }
  if (param_2 < 0x400) {
    return 0;
  }
  if (0x7fff < param_2) {
    return 0;
  }
  uVar2 = FUN_010b36a0(param_1,param_2,param_3,param_4);
  return uVar2;
}


