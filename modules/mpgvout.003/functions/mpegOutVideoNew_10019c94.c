/* Module: mpgvout.003
   Function: mpegOutVideoNew
   Address: 10019c94
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * __cdecl
mpegOutVideoNew(undefined *param_1,uint *param_2,undefined4 param_3,uint param_4,uint param_5,
               uint param_6)

{
  undefined1 uVar1;
  int iVar2;
  uint *_Dst;
  code *pcVar3;
  undefined *puVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  uint uVar8;
  
                    /* 0x19c94  4  mpegOutVideoNew */
  iVar2 = mpegOutVideoCheckSettings(param_2);
  if (iVar2 < 0x20000) {
    pcVar3 = (code *)(*(code *)param_1)("malloc");
    if (pcVar3 == (code *)0x0) {
      pcVar3 = malloc;
    }
    puVar4 = (undefined *)(*(code *)param_1)(&DAT_10019bfc);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = &DAT_10032a34;
    }
    if (DAT_10033340 == (undefined *)0x0) {
      DAT_10033340 = &DAT_1003fa80;
      iVar2 = -0x180;
      do {
        if (iVar2 < 0) {
          DAT_10033340[iVar2] = 0;
        }
        else {
          uVar1 = (undefined1)iVar2;
          if (0xff < iVar2) {
            uVar1 = 0xff;
          }
          DAT_10033340[iVar2] = uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x280);
    }
    _Dst = (uint *)(*pcVar3)(0x910);
    if (_Dst != (uint *)0x0) {
      uVar8 = 0;
      memset(_Dst,0,0x910);
      uVar5 = (*(code *)param_1)("err_printf");
      _Dst[3] = uVar5;
      if (uVar5 == 0) {
        _Dst[3] = (uint)&LAB_10019bcc;
      }
      uVar5 = (*(code *)param_1)("wrn_printf");
      _Dst[4] = uVar5;
      if (uVar5 == 0) {
        _Dst[4] = (uint)&DAT_10019bec;
      }
      uVar5 = (*(code *)param_1)("inf_printf");
      _Dst[5] = uVar5;
      if (uVar5 == 0) {
        _Dst[5] = (uint)FUN_10019bf0;
      }
      uVar5 = (*(code *)param_1)("prg_printf");
      _Dst[6] = uVar5;
      if (uVar5 == 0) {
        _Dst[6] = (uint)&DAT_10019bf4;
      }
      _Dst[7] = (uint)pcVar3;
      _Dst[8] = (uint)puVar4;
      _Dst[2] = 0;
      switch(param_4) {
      default:
        _Dst[1] = 0;
        param_4 = 0;
        break;
      case 1:
        _Dst[1] = 0x20;
        break;
      case 2:
        _Dst[1] = 0xa0;
        break;
      case 3:
        _Dst[1] = 0x260;
        break;
      case 4:
        _Dst[1] = 0x1e0;
        break;
      case 0xffffffff:
        uVar6 = FUN_10001a78();
        _Dst[1] = (uint)uVar6;
        if ((uVar6 & 0x100) == 0) {
          if ((uVar6 & 0x200) == 0) {
            if ((char)_Dst[1] < '\0') {
              param_4 = 2;
            }
            else {
              param_4 = (uint)uVar6 >> 5 & 1;
            }
          }
          else {
            param_4 = 3;
          }
        }
        else {
          param_4 = 4;
        }
      }
      *_Dst = param_4;
      if (_Dst[5] != 0) {
        switch(param_4) {
        case 0:
          pcVar7 = " Plain C/C++ Unsupported\n";
          break;
        case 1:
          pcVar7 = " Vanilla MMX\n";
          break;
        case 2:
          pcVar7 = " 3DNOW\n";
          break;
        case 3:
          pcVar7 = " Intel SSE\n";
          break;
        case 4:
          pcVar7 = " AMD 3DNOWEXT\n";
          break;
        default:
          pcVar7 = " Unsupported MMX-Mode (%d)";
          uVar8 = param_4;
        }
        (*(code *)_Dst[5])(pcVar7,uVar8);
      }
      _Dst[0x10] = param_5;
      _Dst[0x17] = param_6;
      _Dst[0xb6] = 0;
      _Dst[0x187] = 0;
      FUN_10026fe4((int)_Dst,param_2);
    }
  }
  else {
    _Dst = (uint *)0x0;
  }
  return _Dst;
}


