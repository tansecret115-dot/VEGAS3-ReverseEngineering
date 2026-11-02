/* Module: 28_83260.dll
   Function: FUN_100037b0
   Address: 100037b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_100037b0(void *this,ushort *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ushort local_4c [32];
  undefined4 *local_c;
  uint local_8;
  
  local_8 = 0;
  FUN_100047a0((short *)param_1,(float *)&DAT_1000c588);
  param_1 = local_4c;
  local_c = &DAT_1000c588;
  do {
    DAT_1000c9dc = DAT_1000c9dc + 5;
    if (DAT_1000c9dc == 0x3c) {
      DAT_1000c9dc = 0;
    }
    puVar1 = &DAT_1000c3bc + DAT_1000c9dc;
    puVar3 = local_c;
    puVar4 = &DAT_1000c3a8 + DAT_1000c9dc;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 **)((int)this + 0x974) = puVar1;
    if (local_8 != 0) {
      DAT_1000c924 = 0x80;
    }
    else {
      DAT_1000c924 = 0x40;
    }
    local_8 = (uint)(local_8 == 0);
    FUN_10003950(this,param_1);
    param_1 = param_1 + 1;
    FUN_10003ba0(this);
    local_c = local_c + 5;
  } while ((int)local_c < 0x1000c808);
  iVar2 = FUN_10003de0(param_2,local_4c,(int *)0x20);
  return (iVar2 != -1) - 1;
}


