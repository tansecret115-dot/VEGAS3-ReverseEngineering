/* Module: vegas30k.dll
   Function: SfVideoPlugin_SmartEnum
   Address: 01024bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfVideoPlugin_SmartEnum(struct tSFLIST * *,struct HSFMETRIC__ *,int,int) */

int SfVideoPlugin_SmartEnum(tSFLIST **param_1,HSFMETRIC__ *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int local_164 [10];
  CHAR local_13c [208];
  undefined1 local_6c;
  int local_34 [9];
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x24bb0  523  ?SfVideoPlugin_SmartEnum@@YGHPAPAUtSFLIST@@PAUHSFMETRIC__@@HH@Z
                        */
  local_34[0] = 0;
  local_34[4] = 0;
  local_34[1] = 0;
  local_34[5] = 0;
  local_34[2] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[3] = 0;
  local_10 = _SfGetMetricBinary_16(param_2,0,local_34,0x10);
  local_34[8] = _SfGetMetric_8(param_2,1);
  local_8 = _SfGetMetric_8(param_2,2);
  FUN_01024730(local_34 + 4,&local_c,&DAT_011e6868);
  local_c = local_c + param_4;
  iVar1 = 4;
  bVar7 = true;
  piVar4 = local_34 + 4;
  piVar3 = local_34;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar7 = *piVar4 == *piVar3;
    piVar4 = piVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar7);
  if ((((bVar7) && (local_10 == 0x10)) && (local_8 != 0)) &&
     ((local_34[8] == local_c && (param_3 == 0)))) {
    iVar1 = _SfList_CreateExZ_32(param_1,0x130,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if ((-1 < iVar1) && (iVar1 = 0, 0 < local_8)) {
      while( true ) {
        piVar4 = local_164;
        for (iVar2 = 0x4c; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
        iVar2 = _SfGetMetricBinary_16(param_2,iVar1 + 3,local_164,0x130);
        if (iVar2 != 0x130) break;
        _SfList_InsertList_16(*param_1,iVar1,local_164,1);
        iVar1 = iVar1 + 1;
        if (local_8 <= iVar1) {
          return 1;
        }
      }
      _SfList_Destroy_4(*param_1);
      *param_1 = (tSFLIST *)0x0;
      iVar1 = SfVideoPlugin_SmartEnum(param_1,param_2,1,param_4);
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_010248c0(param_1,&DAT_011e6868,param_4);
    if (iVar1 < 0) {
      return 0;
    }
    iVar1 = *(int *)*param_1;
    iVar2 = 0;
    local_10 = 0;
    if (0 < iVar1) {
      do {
        piVar3 = (int *)(*(int *)(*param_1 + 4) * iVar2 + *(int *)(*param_1 + 8));
        piVar4 = local_164;
        for (iVar2 = 0x4c; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
        param_4 = 0;
        if (0 < local_8) {
          do {
            _SfGetMetricBinary_16(param_2,param_4 + 3,local_164,0x130);
            iVar2 = 4;
            bVar7 = true;
            piVar4 = local_164;
            piVar5 = piVar3;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar7 = *piVar4 == *piVar5;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (bVar7);
            if (bVar7) {
              FUN_01002100();
              FUN_01002100();
              lstrcpynA(&stack0xfffffe90,(LPCSTR)(piVar3 + 10),0x105);
              local_6c = 0;
              lstrcpynA(&stack0xfffffe90,local_13c,0x105);
              local_6c = 0;
              iVar2 = lstrcmpA(&stack0xfffffe90,&stack0xfffffe90);
              if (iVar2 != 0) {
                piVar3[0x4b] = piVar3[0x4b] | 1;
              }
              break;
            }
            param_4 = param_4 + 1;
          } while (param_4 < local_8);
        }
        iVar2 = local_10 + 1;
        local_10 = iVar2;
      } while (iVar2 < iVar1);
    }
    _SfSetMetricBinary_16(param_2,0,local_34 + 4,0x10);
    _SfSetMetric_12(param_2,1,local_c);
    _SfSetMetric_12(param_2,2,iVar1);
    iVar6 = 0;
    iVar2 = local_8;
    if (0 < iVar1) {
      do {
        _SfSetMetricBinary_16
                  (param_2,iVar6 + 3,*(int *)(*param_1 + 4) * iVar6 + *(int *)(*param_1 + 8),0x130);
        iVar6 = iVar6 + 1;
        iVar2 = local_8;
      } while (iVar6 < iVar1);
    }
    for (; iVar6 = local_8, iVar1 < local_8; iVar1 = iVar1 + 1) {
      local_8 = iVar2;
      _SfDeleteMetric_12(param_2,iVar1 + 3,3);
      iVar2 = local_8;
      local_8 = iVar6;
    }
  }
  return 1;
}


