/* Module: erv23260.dll
   Function: FUN_6380f340
   Address: 6380f340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380f340(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x16] == 4) {
    uVar2 = param_1[8] + param_1[4] + param_1[6] + param_1[2];
    iVar3 = (int)(char)(&DAT_6382e360)[uVar2 & 0xf] + ((int)uVar2 >> 3);
    uVar2 = param_1[9] + param_1[5] + param_1[7] + param_1[3];
    iVar4 = (int)(char)(&DAT_6382e360)[uVar2 & 0xf] + ((int)uVar2 >> 3);
  }
  else {
    iVar3 = (int)(char)(&DAT_6382e358)[param_1[2] & 3] + (param_1[2] >> 1);
    iVar4 = (int)(char)(&DAT_6382e358)[param_1[3] & 3] + (param_1[3] >> 1);
  }
  param_1[0xc] = iVar3;
  param_1[10] = iVar3;
  param_1[0xd] = iVar4;
  param_1[0xb] = iVar4;
  if (param_1[0x16] == 9) {
    piVar1 = (int *)(*(int *)((int)this + 0x1c) + (*param_1 >> 4) * 0x60);
    uVar2 = piVar1[0x12] + piVar1[0x10] + piVar1[0xe] + piVar1[0xc];
    iVar3 = (int)(char)(&DAT_6382e360)[uVar2 & 0xf] + ((int)uVar2 >> 3);
    uVar2 = piVar1[0x13] + piVar1[0x11] + piVar1[0xf] + piVar1[0xd];
    iVar4 = (int)(char)(&DAT_6382e360)[uVar2 & 0xf] + ((int)uVar2 >> 3);
    piVar1[0x17] = iVar4;
    piVar1[0x15] = iVar4;
    piVar1[0x16] = iVar3;
    piVar1[0x14] = iVar3;
    uVar2 = piVar1[2] + piVar1[6] + piVar1[4] + *piVar1;
    iVar3 = (int)(char)(&DAT_6382e360)[uVar2 & 0xf] + ((int)uVar2 >> 3);
    uVar2 = piVar1[3] + piVar1[1] + piVar1[7] + piVar1[5];
    iVar4 = (int)(char)(&DAT_6382e360)[uVar2 & 0xf] + ((int)uVar2 >> 3);
    piVar1[10] = iVar3;
    piVar1[8] = iVar3;
    piVar1[0xb] = iVar4;
    piVar1[9] = iVar4;
  }
  return;
}


