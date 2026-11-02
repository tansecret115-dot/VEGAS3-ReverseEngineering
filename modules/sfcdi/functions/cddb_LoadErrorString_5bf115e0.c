/* Module: sfcdi.dll
   Function: cddb_LoadErrorString
   Address: 5bf115e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cddb_LoadErrorString(long,char *,unsigned int) */

int cddb_LoadErrorString(long param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x115e0  150  ?cddb_LoadErrorString@@YGHJPADI@Z */
  uVar1 = 0x145;
  if (param_1 < 0x4e005) {
    if (param_1 == 0x4e004) {
      uVar1 = 0x15f;
    }
    else {
      switch(param_1) {
      case -0x7ffb1f1d:
        uVar1 = 0x13c;
        break;
      case -0x7ffb1f1c:
        uVar1 = 0x13d;
        break;
      case -0x7ffb1f1b:
        uVar1 = 0x13e;
        break;
      case -0x7ffb1f1a:
        uVar1 = 0x13f;
        break;
      case -0x7ffb1f19:
        uVar1 = 0x140;
        break;
      case -0x7ffb1f18:
        uVar1 = 0x141;
        break;
      case -0x7ffb1f17:
        uVar1 = 0x142;
        break;
      case -0x7ffb1f16:
        uVar1 = 0x144;
        break;
      case -0x7ffb1f15:
        uVar1 = 0x143;
        break;
      case -0x7ffb1f14:
        uVar1 = 0x148;
        break;
      case -0x7ffb1f13:
        uVar1 = 0x149;
        break;
      case -0x7ffb1f12:
        uVar1 = 0x14a;
        break;
      case -0x7ffb1f11:
        uVar1 = 0x14b;
        break;
      case -0x7ffb1f10:
        uVar1 = 0x160;
      }
    }
  }
  iVar2 = FUN_5bf27f10(DAT_5bf65fc4,uVar1,param_2,param_3);
  return iVar2;
}


