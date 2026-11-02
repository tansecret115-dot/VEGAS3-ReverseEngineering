/* Module: vidcap30.exe
   Function: FUN_00443b80
   Address: 00443b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443b80(int param_1,int param_2,undefined4 param_3)

{
  uchar *_Source;
  int iVar1;
  uchar *_Dest;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  uVar2 = 0;
  FUN_0042f4b0(param_1,1);
  if (*(void **)(param_2 + 0x10) != (void *)0x0) {
    free(*(void **)(param_2 + 0x10));
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  _Source = (uchar *)_SfPrepareName_12(param_3,local_80,0x80);
  if (_Source != (uchar *)0x0) {
    iVar1 = lstrlenA((LPCSTR)_Source);
    _Dest = calloc(1,iVar1 + 1);
    *(uchar **)(param_2 + 0x10) = _Dest;
    if (_Dest == (uchar *)0x0) {
      uVar2 = 0x8007000e;
    }
    else {
      _mbscpy(_Dest,_Source);
    }
  }
  **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x20;
  FUN_0042f5d0(param_1,1);
  return uVar2;
}


