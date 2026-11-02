/* Module: rmbe3260.dll
   Function: FUN_66046910
   Address: 66046910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66046910(void *this,undefined4 param_1,int *param_2,ushort *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  switch(param_1) {
  case 0:
    *param_2 = *(int *)((int)this + 10);
    iVar2 = -1;
    pcVar3 = *(char **)((int)this + 10);
    break;
  case 1:
    *param_2 = (int)this + 0xe;
    *param_3 = 4;
    return 0;
  case 2:
    *param_2 = (int)this + 0x12;
    *param_3 = 10;
    return 0;
  case 3:
    *param_2 = (int)this + 0x1c;
    *param_3 = 10;
    return 0;
  case 4:
    *param_2 = *(int *)((int)this + 0x26);
    iVar2 = -1;
    pcVar3 = *(char **)((int)this + 0x26);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *param_3 = ~(ushort)iVar2;
    return 0;
  case 5:
    *param_2 = (int)this + 0x2a;
    *param_3 = 2;
    return 0;
  case 6:
    *param_2 = (int)this + 0x2c;
    *param_3 = 4;
    return 0;
  case 7:
    *param_2 = *(int *)((int)this + 0x30);
    iVar2 = -1;
    pcVar3 = *(char **)((int)this + 0x30);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *param_3 = ~(ushort)iVar2;
    return 0;
  default:
    return 0x40012;
  case 0xe:
    *param_2 = (int)this + 0x44;
    *param_3 = 4;
    return 0;
  case 0x13:
    *param_2 = (int)this + 0x40;
    *param_3 = 4;
    return 0;
  case 0x14:
    *param_2 = (int)this + 0x48;
    *param_3 = 4;
    return 0;
  }
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *param_3 = ~(ushort)iVar2;
  return 0;
}


