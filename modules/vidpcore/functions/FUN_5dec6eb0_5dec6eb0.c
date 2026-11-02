/* Module: vidpcore.dll
   Function: FUN_5dec6eb0
   Address: 5dec6eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dec6eb0(LPCSTR param_1,int *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char local_34 [32];
  int local_14;
  uint uStack_10;
  int local_c;
  int local_8;
  
  uStack_10 = param_3 >> 1 & 1;
  iVar4 = 0;
  iVar5 = 0;
  local_8 = 0;
  local_c = 0;
  puVar1 = &stack0xffffffc0;
  puVar2 = &stack0xffffffc0;
  lstrlenA(param_1);
  FUN_5df157d0();
  FUN_5dec67b0(param_1,&stack0xffffffc0);
  if ((param_3 & 1) == 0) {
    param_3 = 0;
    do {
      puVar2 = (undefined1 *)FUN_5dec6a30(local_34,puVar2,0x20);
      if (local_34[0] == '\0') break;
      iVar3 = FUN_5dec5610(local_34,0);
      param_3 = param_3 + 1;
      iVar4 = iVar5;
      iVar5 = iVar3;
    } while ((int)param_3 < 3);
  }
  else {
    do {
      puVar1 = (undefined1 *)FUN_5dec6a30(local_34,puVar1,0x20);
      if (local_34[0] == '\0') break;
      iVar4 = FUN_5dec5610(local_34,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    local_c = 0;
    iVar5 = local_c;
  }
  local_c = iVar5;
  local_8 = iVar4;
  if (((*param_2 == 5) && (uStack_10 == 0)) && (iVar4 != 0)) {
    local_8 = iVar4 + (((-1 < iVar4) - 1 & 2) - 1);
  }
  local_14 = param_2[9];
  uStack_10 = 0;
  ftol();
  return;
}


