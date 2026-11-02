/* Module: vidcap30.exe
   Function: FUN_00453860
   Address: 00453860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 *
FUN_00453860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            LONG *param_5)

{
  LONG LVar1;
  undefined4 *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  _Memory = calloc(1,0x60);
  if (_Memory == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar2 = _SfList_CreateExZ_32(_Memory + 0xb,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (iVar2 < 0) {
    free(_Memory);
    return (undefined4 *)0x0;
  }
  _Memory[1] = param_2;
  *_Memory = 0x60;
  _Memory[2] = param_1;
  _Memory[0xc] = 0;
  _Memory[0xd] = 0xffffffff;
  _Memory[0x11] = 0;
  _Memory[0x12] = 0;
  _Memory[0x13] = 0;
  ((RECT *)(_Memory + 5))->left = *param_5;
  _Memory[6] = param_5[1];
  _Memory[7] = param_5[2];
  LVar1 = param_5[3];
  _Memory[9] = 1;
  _Memory[8] = LVar1;
  FUN_00453960(_Memory,0x607,param_3,0);
  FUN_00453960(_Memory,0x608,param_4,0);
  DVar3 = GetSysColor(0xf);
  _Memory[0xe] = DVar3;
  uVar4 = _SfGetUIFont_4(100);
  _Memory[0xf] = uVar4;
  uVar4 = _SfGetUIFont_4(0x68);
  _Memory[0x10] = uVar4;
  InvalidateRect((HWND)_Memory[2],(RECT *)(_Memory + 5),1);
  return _Memory;
}


