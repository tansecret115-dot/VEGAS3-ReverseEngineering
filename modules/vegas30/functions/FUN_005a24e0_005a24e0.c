/* Module: vegas30.exe
   Function: FUN_005a24e0
   Address: 005a24e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_005a24e0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int *_Memory;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *local_10c;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return (int *)0x0;
  }
  if ((*param_1 == 0) && (iVar1 = _SfVideoPlugin_CreateCacheList_4(param_1), iVar1 < 0)) {
    return (int *)0x0;
  }
  _Memory = calloc(1,0x80);
  if (_Memory != (int *)0x0) {
    uVar4 = 1;
    uVar3 = 0;
    uVar2 = FUN_00508ae0(param_2);
    iVar1 = _SfVideoFilterCache_Init_24(_Memory,param_2,uVar2,param_3,uVar3,uVar4);
    if (iVar1 < 0) {
      free(_Memory);
      return (int *)0x0;
    }
    if (param_4 < 0) {
      param_4 = *(int *)*param_1;
    }
    iVar1 = _SfVideoFilterCache_CreateNewCookie_4(*param_1);
    _Memory[0x1c] = iVar1;
    local_10c = _Memory;
    _SfList_InsertList_16(*param_1,param_4,&local_10c,1);
    if ((-1 < param_5) &&
       (iVar1 = _SfVideoPlugin_GetInterface_12(&DAT_006335c8,&local_10c,_Memory[4]), -1 < iVar1)) {
      local_108 = 0x104;
      iVar1 = FUN_00449b50(_Memory[4],local_10c,param_5,local_104,&local_108);
      if (-1 < iVar1) {
        FUN_00449cd0(_Memory[4],local_10c,local_104);
      }
      (**(code **)(*local_10c + 8))(local_10c);
    }
    FUN_005a2630(param_2);
  }
  return _Memory;
}


