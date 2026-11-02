/* Module: rmbe3260.dll
   Function: FUN_6600ef50
   Address: 6600ef50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6600ef50(char *param_1,void *param_2,void *param_3)

{
  LPCSTR _Source;
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _Count;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char local_44 [64];
  
  pcVar7 = param_1;
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar3 = &DAT_6606c7ac;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar5 - 1;
  param_1 = (char *)0x0;
  if (((int)(~uVar5 + 1 + uVar6) < (int)(~uVar4 - 1)) &&
     (iVar2 = FUN_660521e0((byte *)pcVar7,&DAT_6606c7ac,uVar6), iVar2 == 0)) {
    _Source = pcVar7 + uVar6;
    pcVar3 = FUN_66052140(_Source,&DAT_6606c7ac);
    pcVar7 = _Source;
    if (pcVar3 != (char *)0x0) {
      pcVar7 = pcVar3 + uVar6;
      _Count = (int)pcVar3 - (int)_Source;
      if ((int)_Count < 0x40) {
        strncpy(local_44,_Source,_Count);
        param_1 = local_44;
        local_44[_Count] = '\0';
      }
      else {
        param_1 = s__current_6606c7a0;
      }
    }
  }
  if (param_3 != (void *)0x0) {
    if (param_1 == (char *)0x0) {
      param_1 = s__rn_default_6606c794;
    }
    FUN_6605b970(param_3,param_1);
  }
  if (param_2 != (void *)0x0) {
    FUN_6605b970(param_2,pcVar7);
  }
  return 0;
}


