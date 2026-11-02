/* Module: vegas30.exe
   Function: FUN_004ab190
   Address: 004ab190
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ab190(int param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  puVar3 = param_3;
  iVar4 = param_2;
  iVar5 = 0;
  local_c = 0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 == 0) {
    pcVar1 = (char *)FUN_005ec620();
  }
  else {
    pcVar1 = (char *)FUN_005bad20(param_2);
  }
  local_8 = iVar4;
  if (iVar4 == 0) {
    local_8 = DAT_0064b138;
  }
  if (pcVar1 == (char *)0x0) goto LAB_004ab2e3;
  FUN_005b83b0(local_8,1);
  iVar6 = param_2;
  iVar2 = 0;
  local_4 = 0;
  if (*pcVar1 != '\0') {
    iVar2 = *(int *)(pcVar1 + 4);
  }
  if (iVar4 == 0) {
    local_c = 0;
    param_2 = param_1;
    iVar5 = -0x7fffbffb;
    if (*pcVar1 != '\0') {
      iVar5 = -0x7ffb1ff6;
      iVar6 = FUN_00436ff0(&param_2);
      if ((*(byte *)(iVar6 + 0x18) & 2) != 2) {
        local_c = *(undefined4 *)(iVar6 + 4);
        iVar5 = 0;
      }
    }
LAB_004ab299:
    if ((-1 < iVar5) && (iVar4 != 0)) {
      if (*pcVar1 == '\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(pcVar1 + 4);
      }
      if (iVar2 != iVar6) {
        FUN_004eb2b0(iVar4);
      }
    }
    if (local_4 != 0) {
      FUN_004ea040(iVar4,0);
    }
  }
  else {
    iVar5 = FUN_004e9f70(param_2,0x21e,param_1);
    if ((-1 < iVar5) && (iVar5 = FUN_004eb0f0(iVar6,0x26,0), -1 < iVar5)) {
      if (*pcVar1 == '\0') {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(pcVar1 + 4);
      }
      local_4 = 1;
      iVar5 = FUN_005ec8a0(param_1,&local_c,0,0);
      iVar4 = param_2;
      goto LAB_004ab299;
    }
  }
  FUN_005b84d0(local_8,1);
  puVar3 = param_3;
  if (iVar5 < 0) {
    iVar5 = FUN_004ab180(iVar5);
    puVar3 = param_3;
  }
LAB_004ab2e3:
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = local_c;
  }
  return iVar5;
}


