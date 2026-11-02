/* Module: vidcap30.exe
   Function: FUN_0045fbd0
   Address: 0045fbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045fbd0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *_Memory;
  
  puVar1 = param_1;
  iVar4 = -0x7ff8fff2;
  _Memory = (undefined4 *)0x0;
  FUN_0042f4b0(param_1,1);
  iVar2 = param_3;
  iVar3 = FUN_0045f7b0(puVar1,param_3,param_6,param_7);
  if (iVar3 == 0) {
    _Memory = calloc(1,0x18);
    if (_Memory != (undefined4 *)0x0) {
      _Memory[4] = param_6;
      *_Memory = 5;
      _Memory[1] = iVar2;
      _Memory[3] = param_5;
      _Memory[5] = param_7;
      do {
        do {
          _Memory[2] = DAT_005b6234;
          DAT_005b6234 = DAT_005b6234 + 1;
          iVar3 = FUN_0045f710(puVar1,puVar1[0x74],_Memory[2]);
        } while (iVar3 != 0);
      } while (_Memory[2] == 0);
      param_1 = _Memory;
      iVar4 = _SfList_InsertList_16(*(undefined4 *)(iVar2 + 0x10),param_4,&param_1,1);
      *(uint *)puVar1[1] = *(uint *)puVar1[1] | 0x8000;
      if (iVar4 < 0) {
        free(_Memory);
        _Memory = (undefined4 *)0x0;
      }
    }
  }
  else {
    iVar4 = -0x7ffb1fce;
  }
  *param_2 = _Memory;
  FUN_0042f5d0(puVar1,1);
  return iVar4;
}


