/* Module: vidcap30.exe
   Function: FUN_0045efd0
   Address: 0045efd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045efd0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *_Memory;
  bool bVar5;
  
  iVar4 = -0x7ff8fff2;
  bVar5 = false;
  _Memory = (undefined4 *)0x0;
  FUN_0042f4b0(param_1,1);
  iVar2 = FUN_0045f420(param_1,param_3,param_4,0);
  if (iVar2 == 0) {
    _Memory = calloc(1,0x14);
    if (_Memory != (undefined4 *)0x0) {
      *_Memory = 4;
      _Memory[1] = param_3;
      iVar4 = _SfList_CreateExZ_32(_Memory + 4,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
      if (-1 < iVar4) {
        iVar4 = FUN_0045f1b0(param_1,_Memory,param_4,param_5);
        if (-1 < iVar4) {
          while ((bVar5 || (_Memory[2] == 0))) {
            _Memory[2] = DAT_005b6230;
            DAT_005b6230 = DAT_005b6230 + 1;
            iVar2 = FUN_0045f390(param_1,*(undefined4 *)(param_1 + 0x1d0),_Memory[2]);
            bVar5 = iVar2 != 0;
          }
          if (param_3 != (undefined4 *)0x0) {
            puVar1 = param_3 + 4;
            param_3 = _Memory;
            iVar4 = _SfList_InsertList_16(*puVar1,0xffffffff,&param_3,1);
          }
          if (-1 < iVar4) {
            uVar3 = **(uint **)(param_1 + 4);
            if (param_5 == 0) {
              uVar3 = uVar3 | 0x4000;
            }
            else {
              uVar3 = uVar3 | 0x1000;
            }
            **(uint **)(param_1 + 4) = uVar3;
            goto LAB_0045f0e7;
          }
        }
      }
      free(_Memory);
      _Memory = (undefined4 *)0x0;
    }
  }
  else {
    iVar4 = -0x7ffb1fce;
  }
LAB_0045f0e7:
  *param_2 = _Memory;
  FUN_0042f5d0(param_1,1);
  return iVar4;
}


