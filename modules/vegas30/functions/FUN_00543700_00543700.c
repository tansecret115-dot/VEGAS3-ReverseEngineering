/* Module: vegas30.exe
   Function: FUN_00543700
   Address: 00543700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00543700(undefined4 *param_1,DWORD param_2)

{
  DWORD *_Memory;
  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  _Memory = calloc(1,0x68);
  *param_1 = 0;
  if (_Memory == (DWORD *)0x0) {
    return -0x7ff8fff2;
  }
  pDVar3 = _Memory;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pDVar3 = 0;
    pDVar3 = pDVar3 + 1;
  }
  iVar2 = _SfList_CreateExZ_32(_Memory + 2,4,0xffffffff,0xffffffff,0xc0000000,0,0,0);
  if (-1 < iVar2) {
    iVar2 = _SfList_CreateExZ_32(_Memory + 1,4,0xffffffff,0xffffffff,0xc0000000,0,0,0);
    if (-1 < iVar2) {
      iVar2 = _SfList_CreateExZ_32(_Memory + 3,0x18,0xffffffff,0xffffffff,0x40000004,0,0,0);
      if (-1 < iVar2) {
        _Memory[4] = param_2;
        DVar1 = GetCurrentThreadId();
        _Memory[0x10] = 0xffffffff;
        *_Memory = DVar1;
        _Memory[0x11] = 0xffffffff;
        _Memory[0xf] = 0x19;
        iVar2 = FUN_005432f0(_Memory);
        if (-1 < iVar2) {
          *param_1 = _Memory;
          return 0;
        }
      }
    }
  }
  DVar1 = _Memory[2];
  if (DVar1 != 0) {
    _SfList_Destroy_4(DVar1);
  }
  if (_Memory[1] != 0) {
    _SfList_Destroy_4(_Memory[1]);
  }
  if (_Memory[3] != 0) {
    _SfList_Destroy_4(_Memory[3]);
  }
  free(_Memory);
  return iVar2;
}


