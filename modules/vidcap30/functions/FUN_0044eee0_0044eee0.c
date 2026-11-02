/* Module: vidcap30.exe
   Function: FUN_0044eee0
   Address: 0044eee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044eee0(undefined4 *param_1,void *param_2,undefined4 param_3)

{
  void *pvVar1;
  void *_Memory;
  undefined4 uVar2;
  int iVar3;
  
  pvVar1 = param_2;
  iVar3 = 0;
  if (((param_2 == (void *)0x0) || (*(int *)((int)param_2 + 0x43c) != 0)) ||
     (iVar3 = _SfList_CreateExZ_32((int)param_2 + 0x43c,4,0xffffffff,0xffffffff,0x40000000,0,0,0),
     _Memory = param_2, -1 < iVar3)) {
    _Memory = calloc(1,0x440);
    if (_Memory == (void *)0x0) {
      *param_1 = 0;
      return -0x7ff8fff2;
    }
    if (-1 < iVar3) {
      FUN_0044f9f0(_Memory,param_3);
      *(void **)((int)_Memory + 0x438) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        uVar2 = FUN_0044c620(pvVar1);
        param_2 = _Memory;
        iVar3 = _SfList_InsertList_16(*(undefined4 *)((int)pvVar1 + 0x43c),uVar2,&param_2,1);
      }
      if (iVar3 < 0) {
        free(_Memory);
        *param_1 = 0;
        return iVar3;
      }
    }
  }
  *param_1 = _Memory;
  return iVar3;
}


