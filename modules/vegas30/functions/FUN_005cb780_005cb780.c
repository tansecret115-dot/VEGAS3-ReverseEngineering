/* Module: vegas30.exe
   Function: FUN_005cb780
   Address: 005cb780
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005cb780(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4,undefined4 param_5
                ,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int *_Memory;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = -0x7ff8fff2;
  uVar1 = FUN_005b8900(param_2,param_3);
  uVar2 = FUN_005b87c0(param_3);
  if (uVar2 <= uVar1) {
    return -0x7ffb1fec;
  }
  FUN_005b83b0(param_2,1);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  _Memory = calloc(1,0x700);
  piVar6 = param_4;
  if (_Memory != (int *)0x0) {
    *_Memory = 0x20;
    _Memory[0x18e] = 0x41;
    _Memory[2] = (int)param_2;
    _Memory[1] = param_3;
    iVar7 = DAT_006477b4;
    if (param_3 != 3) {
      iVar7 = DAT_006477b0;
    }
    _Memory[0x1a5] = iVar7;
    if (param_4 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *param_4;
    }
    _Memory[8] = 1;
    _Memory[0x1a4] = iVar7 % 0xff;
    _Memory[0x1a7] = (int)(_Memory + 0x1a8);
    iVar7 = _SfList_CreateExZ_32(_Memory + 9,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    if (iVar7 < 0) {
      free(_Memory);
      FUN_005b84d0(param_2,1);
      return iVar7;
    }
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar6;
    }
LAB_005cb872:
    do {
      iVar3 = 0;
      _Memory[7] = DAT_00646780;
      DAT_00646780 = DAT_00646780 + 1;
      if (0 < iVar5) {
        piVar4 = (int *)piVar6[2];
        do {
          piVar6 = param_4;
          if (*(int *)(*piVar4 + 0x1c) == _Memory[7]) goto LAB_005cb872;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < iVar5);
      }
    } while (_Memory[7] == 0);
    if (piVar6 != (int *)0x0) {
      param_4 = _Memory;
      _SfList_InsertList_16(piVar6,param_5,&param_4,1);
    }
    FUN_005cb690(param_2,_Memory,param_6);
    FUN_005b9000(param_2);
    *(uint *)*param_2 = *(uint *)*param_2 | 4;
    *(uint *)*param_2 = *(uint *)*param_2 | 0x200;
    _Memory[4] = _Memory[4] | 0x200000;
    *(uint *)*param_2 = *(uint *)*param_2 | 0x2000;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = _Memory;
    }
  }
  FUN_005b84d0(param_2,1);
  return iVar7;
}


