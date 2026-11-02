/* Module: vegas30.exe
   Function: FUN_005d0f30
   Address: 005d0f30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005d0f30(undefined4 param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,undefined4 param_7)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = param_2;
  FUN_005d1520(param_2 + 0xe);
  iVar3 = FUN_005d1550(puVar1);
  if (iVar3 == 0) {
    uVar4 = 0x50e1;
  }
  else {
    uVar4 = _SfList_AllocItem_12(puVar1[0x8d],0x20,&param_2);
    puVar2 = param_2;
    if (param_2 != (uint *)0x0) {
      param_2[3] = param_3;
      param_2[4] = param_4;
      param_2[5] = param_5;
      param_2[6] = param_6;
      *param_2 = *param_2 & 0xfffffffd;
      if (DAT_0064ab78 != 0) {
        _fpreset();
      }
      iVar3 = FUN_005d0de0(param_3,param_4,param_5,param_6,puVar2 + 1);
      if (iVar3 < 0) {
        if (DAT_0064ab78 != 0) {
          _fpreset();
        }
        uVar4 = CoCreateInstance((IID *)&param_3,(LPUNKNOWN)0x0,3,(IID *)&DAT_0062f6f8,
                                 (LPVOID *)(puVar2 + 7));
        if ((int)uVar4 < 0) {
          _SfList_DeleteList_16(puVar1[0x8d],0xffffffff,0xffffffff,0);
          return uVar4;
        }
        puVar1[0x90] = puVar1[0x90] + 1;
      }
      iVar3 = _SfList_InsertList_16(puVar1[0x8d],param_7,0,0xffffffff);
      return (uint)(iVar3 < 0);
    }
  }
  return uVar4;
}


