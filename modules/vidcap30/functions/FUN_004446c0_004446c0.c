/* Module: vidcap30.exe
   Function: FUN_004446c0
   Address: 004446c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004446c0(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined1 *param_5
                )

{
  int *piVar1;
  int *_Memory;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_1;
  
  iVar5 = -0x7ff8fff2;
  FUN_0042f4b0(param_2,1);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  _Memory = calloc(1,0x18);
  if (_Memory != (int *)0x0) {
    *_Memory = 2;
    _Memory[1] = param_2;
    iVar5 = _SfList_CreateExZ_32(_Memory + 4,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    piVar1 = param_3;
    if (iVar5 < 0) {
      free(_Memory);
      FUN_0042f5d0(param_2,1);
      return iVar5;
    }
    if (param_3 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_3;
    }
LAB_0044474a:
    do {
      _Memory[2] = DAT_005b58cc;
      DAT_005b58cc = DAT_005b58cc + 1;
      iVar2 = 0;
      if (0 < iVar4) {
        piVar3 = (int *)param_3[2];
        do {
          if (*(int *)(*piVar3 + 8) == _Memory[2]) goto LAB_0044474a;
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < iVar4);
      }
    } while (_Memory[2] == 0);
    if (param_3 != (int *)0x0) {
      param_3 = _Memory;
      _SfList_InsertList_16(piVar1,param_4,&param_3,1);
    }
    puVar6 = param_5;
    if (param_5 == (undefined1 *)0x0) {
      puVar6 = &local_1;
    }
    FUN_00443310(param_2,_Memory,puVar6);
    FUN_00443420(param_2,_Memory,&local_1);
    **(uint **)(param_2 + 4) = **(uint **)(param_2 + 4) | 4;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = _Memory;
    }
  }
  FUN_0042f5d0(param_2,1);
  return iVar5;
}


