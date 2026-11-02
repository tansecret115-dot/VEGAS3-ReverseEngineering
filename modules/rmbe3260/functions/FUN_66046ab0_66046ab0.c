/* Module: rmbe3260.dll
   Function: FUN_66046ab0
   Address: 66046ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66046ab0(void *this,undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  switch(param_1) {
  case 0:
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar3);
    *(char **)((int)this + 10) = pcVar2;
    break;
  case 1:
    *(undefined4 *)((int)this + 0xe) = *(undefined4 *)param_2;
    return 0;
  case 2:
    *(undefined4 *)((int)this + 0x12) = *(undefined4 *)param_2;
    *(undefined4 *)((int)this + 0x16) = *(undefined4 *)(param_2 + 4);
    *(undefined2 *)((int)this + 0x1a) = *(undefined2 *)(param_2 + 8);
    return 0;
  case 3:
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)param_2;
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_2 + 4);
    *(undefined2 *)((int)this + 0x24) = *(undefined2 *)(param_2 + 8);
    return 0;
  case 4:
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar3);
    *(char **)((int)this + 0x26) = pcVar2;
    break;
  case 5:
    *(undefined2 *)((int)this + 0x2a) = *(undefined2 *)param_2;
    return 0;
  case 6:
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)param_2;
    return 0;
  case 7:
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar3);
    *(char **)((int)this + 0x30) = pcVar2;
    break;
  default:
    return 0;
  case 0xe:
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)param_2;
    return 0;
  case 0x13:
    *(undefined4 *)((int)this + 0x40) = *(undefined4 *)param_2;
    return 0;
  case 0x14:
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)param_2;
    return 0;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return 0;
}


