/* Module: vegas30.exe
   Function: FUN_005c69a0
   Address: 005c69a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c69a0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uchar *_Source;
  int iVar3;
  uchar *_Dest;
  undefined4 uVar4;
  undefined1 local_104 [260];
  
  uVar4 = 0;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    free(*(void **)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  _Source = (uchar *)_SfPrepareName_12(param_2,local_104,0x104);
  if (_Source != (uchar *)0x0) {
    iVar3 = lstrlenA((LPCSTR)_Source);
    _Dest = calloc(1,iVar3 + 1);
    *(uchar **)(param_1 + 0x20) = _Dest;
    if (_Dest == (uchar *)0x0) {
      uVar4 = 0x8007000e;
    }
    else {
      _mbscpy(_Dest,_Source);
    }
  }
  if (((*(int *)(param_1 + 4) != 0) && (iVar3 = *(int *)(*(int *)(param_1 + 4) + 8), iVar3 != 0)) &&
     (puVar1 = *(undefined4 **)(iVar3 + 8), puVar1 != (undefined4 *)0x0)) {
    puVar2 = (uint *)*puVar1;
    *puVar2 = *puVar2 | 0x100;
  }
  return uVar4;
}


