/* Module: vegas30.exe
   Function: FUN_005c9a40
   Address: 005c9a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c9a40(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uchar *_Source;
  int iVar1;
  uchar *_Dest;
  undefined4 uVar2;
  undefined1 local_104 [260];
  
  FUN_005b83b0(param_1,1);
  uVar2 = 0;
  if (*(void **)(param_3 + 0xc) != (void *)0x0) {
    free(*(void **)(param_3 + 0xc));
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  _Source = (uchar *)_SfPrepareName_12(param_4,local_104,0x104);
  if (_Source != (uchar *)0x0) {
    iVar1 = lstrlenA((LPCSTR)_Source);
    _Dest = calloc(1,iVar1 + 1);
    *(uchar **)(param_3 + 0xc) = _Dest;
    if (_Dest == (uchar *)0x0) {
      uVar2 = 0x8007000e;
    }
    else {
      _mbscpy(_Dest,_Source);
    }
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 0x100;
  if (((*(uint *)(param_3 + 0x10) & 0x400) != 0) ||
     ((*(uint *)(*(int *)(param_3 + 8) + 0x10) & 0x200) != 0)) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
  }
  FUN_005b84d0(param_1,1);
  return uVar2;
}


