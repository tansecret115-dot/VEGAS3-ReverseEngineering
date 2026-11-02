/* Module: vidcap30.exe
   Function: FUN_00460780
   Address: 00460780
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_00460780(undefined4 param_1,undefined4 param_2,uchar *param_3,undefined4 param_4,
                   undefined4 param_5,LONG *param_6)

{
  void *_Memory;
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  _Memory = calloc(1,0x50);
  if (_Memory == (void *)0x0) {
    return (void *)0x0;
  }
  iVar1 = FUN_00460b30(_Memory,param_3);
  if (iVar1 == 0) {
    free(_Memory);
    return (void *)0x0;
  }
  *(undefined4 *)((int)_Memory + 4) = param_2;
  *(undefined4 *)((int)_Memory + 8) = param_1;
  ((RECT *)((int)_Memory + 0x14))->left = *param_6;
  *(LONG *)((int)_Memory + 0x18) = param_6[1];
  *(LONG *)((int)_Memory + 0x1c) = param_6[2];
  *(LONG *)((int)_Memory + 0x20) = param_6[3];
  FUN_00460f60(_Memory,param_4,0);
  FUN_00460fd0(_Memory,param_5,0);
  DVar2 = GetSysColor(8);
  *(DWORD *)((int)_Memory + 0x34) = DVar2;
  DVar2 = GetSysColor(5);
  *(DWORD *)((int)_Memory + 0x38) = DVar2;
  uVar3 = _SfGetUIFont_4(100);
  *(undefined4 *)((int)_Memory + 0x30) = uVar3;
  _mbscpy(*(uchar **)((int)_Memory + 0x28),param_3);
  InvalidateRect(*(HWND *)((int)_Memory + 8),(RECT *)((int)_Memory + 0x14),1);
  return _Memory;
}


