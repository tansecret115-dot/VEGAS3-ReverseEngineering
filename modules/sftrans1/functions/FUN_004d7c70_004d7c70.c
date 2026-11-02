/* Module: sftrans1.dll
   Function: FUN_004d7c70
   Address: 004d7c70
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong FUN_004d7c70(LPCSTR param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  char local_3c [32];
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  local_10 = 0;
  local_8 = 0;
  local_c = 0;
  iVar1 = lstrlenA(param_1);
  pcVar2 = &stack0xffffffb8;
  FUN_00551640();
  local_18 = &stack0xffffffb8;
  FUN_00551640();
  local_1c = &stack0xffffffb8;
  FUN_004d7960(param_1,&stack0xffffffb8,&stack0xffffffb8,iVar1 << 2);
  iVar1 = 0;
  pcVar5 = &stack0xffffffb8;
  if (param_3 == 0) {
    param_3 = 0;
    local_14 = 0;
    do {
      uVar3 = _ismbcspace((int)*pcVar2);
      param_3 = param_3 | uVar3;
      pcVar2 = (char *)FUN_004d7ae0(local_3c,pcVar2,0x20);
      if (local_3c[0] == '\0') break;
      local_10 = local_8;
      local_8 = local_c;
      local_c = iVar6;
      iVar6 = FUN_004d66c0(local_3c,0);
      local_14 = lstrlenA(local_3c);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    if ((param_3 == 0) && (iVar1 < 2)) {
      iVar6 = iVar6 * 1000;
    }
    else {
      iVar1 = local_14;
      if (3 < local_14) {
        iVar4 = local_14 + -3;
        iVar1 = local_14 - iVar4;
        do {
          iVar6 = iVar6 / 10;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (iVar1 == 1) {
        iVar6 = iVar6 * 100;
      }
      else if (iVar1 == 2) {
        iVar6 = iVar6 * 10;
      }
    }
  }
  else {
    do {
      pcVar2 = (char *)FUN_004d7ae0(local_3c,pcVar5,0x20);
      if (local_3c[0] == '\0') break;
      local_10 = local_8;
      local_8 = local_c;
      local_c = FUN_004d66c0(local_3c,0);
      iVar1 = iVar1 + 1;
      pcVar5 = pcVar2;
    } while (iVar1 < 3);
    iVar6 = 0;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(param_1 + *(int *)(local_1c + ((int)pcVar2 - (int)local_18) * 4));
  }
  lVar7 = __allmul(local_10,local_10 >> 0x1f,0x3c,0);
  lVar7 = __allmul(lVar7 + local_8,0x3c,0);
  lVar7 = __allmul(lVar7 + local_c,1000,0);
  return lVar7 + iVar6;
}


