/* Module: vegas30.exe
   Function: FUN_0046a7a0
   Address: 0046a7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0046a7a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_4;
  
  uVar1 = _SfList_AllocItem_12(param_1,0x228,&local_4);
  if (local_4 != (undefined4 *)0x0) {
    puVar2 = local_4;
    for (iVar3 = 0x8a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_4[8] = 0;
    *local_4 = 0x31;
    local_4[1] = param_4;
    local_4[2] = 0xffffffff;
    local_4[4] = param_3;
    local_4[3] = param_5;
    local_4[9] = 0;
    local_4[10] = param_2[4];
    uVar1 = param_2[5];
    local_4[0xc] = 0;
    local_4[0xe] = 0;
    local_4[0xb] = uVar1;
    local_4[0xd] = 0;
    local_4[0xf] = 0x3ff00000;
    uVar1 = FUN_005c9b00(param_4);
    local_4[6] = uVar1;
    local_4[0x24] = 0x41;
    FUN_005bd5b0(param_4);
    if (param_4 == 3) {
      FUN_005bdb60();
    }
    local_4[0x20] = 0;
    local_4[0x21] = 1;
    if ((LPCSTR)param_2[8] == (LPCSTR)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = lstrlenA((LPCSTR)param_2[8]);
      iVar3 = iVar3 + 1;
    }
    puVar2 = calloc(1,iVar3 + 0x28);
    if (puVar2 == (undefined4 *)0x0) {
      _SfList_DeleteList_16(param_1,0xffffffff,0xffffffff,0);
      return 0x8007000e;
    }
    local_4[0x88] = puVar2;
    puVar4 = param_2;
    puVar5 = puVar2;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2[1] = 0;
    iVar3 = FUN_005ec620();
    if (iVar3 != 0) {
      FUN_005ed3f0(puVar2[6]);
    }
    puVar2[8] = 0;
    if (param_2[8] != 0) {
      puVar2[8] = puVar2 + 10;
      _mbscpy((uchar *)(puVar2 + 10),(uchar *)param_2[8]);
    }
    uVar1 = _SfList_InsertList_16(param_1,0xffffffff,0,0xffffffff);
  }
  return uVar1;
}


