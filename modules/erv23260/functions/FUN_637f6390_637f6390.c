/* Module: erv23260.dll
   Function: FUN_637f6390
   Address: 637f6390
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_637f6390(void *this,int param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_8 = param_1;
  param_1 = 0;
  local_c = 0x10;
  pbVar1 = param_2;
  do {
    param_2 = (byte *)0x10;
    pbVar2 = pbVar1;
    do {
      iVar3 = (uint)pbVar2[local_8 - (int)pbVar1] - (uint)*pbVar2;
      if (iVar3 < 0) {
        iVar3 = (uint)*pbVar2 - (uint)pbVar2[local_8 - (int)pbVar1];
      }
      param_1 = param_1 + iVar3;
      pbVar2 = pbVar2 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != (byte *)0x0);
    local_8 = local_8 + *(int *)((int)this + 0x1c);
    pbVar1 = pbVar1 + *(int *)((int)this + 0x1c);
    local_c = local_c + -1;
  } while (local_c != 0);
  if ((*(int *)((int)this + 4) != 0x15) && (*(int *)((int)this + 4) != 0x16)) {
    return param_1 < 0xed9;
  }
  return param_1 <= (int)((-(uint)(*(int *)((int)this + 0x38) != 0) & 0x898) + 0x640);
}


