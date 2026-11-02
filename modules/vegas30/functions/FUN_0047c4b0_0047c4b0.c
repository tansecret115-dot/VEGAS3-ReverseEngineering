/* Module: vegas30.exe
   Function: FUN_0047c4b0
   Address: 0047c4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047c4b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  puVar2 = calloc(1,0x34);
  if (puVar2 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  puVar1 = puVar2 + 0xc;
  *puVar1 = 0;
  iVar3 = param_6;
  if (param_6 == 0) {
    iVar3 = -1;
  }
  iVar3 = _SfList_CreateExZ_32(puVar1,0x10,iVar3,0xffffffff,0x40000004,0,0,0);
  if (-1 < iVar3) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[8] = param_2;
    *puVar2 = 0x40;
    puVar2[4] = param_5;
    puVar2[9] = param_3;
    puVar2[10] = param_4;
    uVar4 = FUN_0052b980(param_5);
    puVar2[0xb] = uVar4;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 4;
    if (param_7 == 0) {
      FUN_00478140(puVar2);
      *param_1 = puVar2;
      return iVar3;
    }
    iVar3 = _SfList_InsertList_16(*puVar1,0,param_7,param_6);
    if (-1 < iVar3) {
      *param_1 = puVar2;
      return iVar3;
    }
  }
  FUN_0047c480(puVar2);
  return iVar3;
}


