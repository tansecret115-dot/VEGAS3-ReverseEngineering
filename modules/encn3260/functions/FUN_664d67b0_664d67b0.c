/* Module: encn3260.dll
   Function: FUN_664d67b0
   Address: 664d67b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_664d67b0(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            char *param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char local_e4 [64];
  char local_a4 [64];
  int local_64 [22];
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  byte local_8;
  byte local_7;
  undefined1 local_6;
  
  sprintf(local_a4,s__ld_ld_664f0514,param_2,param_3);
  local_b = (byte)((uint)param_5 >> 8);
  local_9 = (byte)((uint)param_5 >> 0x18);
  local_8 = local_b ^ local_9;
  local_a = (byte)((uint)param_5 >> 0x10);
  local_c = (byte)param_5;
  local_7 = local_a ^ local_c;
  local_6 = 0;
  sprintf(local_e4,s__p92_s_664f050c,param_5,&local_c);
  FUN_664d6d50(local_64);
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_664d6d80(local_64,(undefined4 *)param_1,~uVar2 - 1);
  uVar2 = 0xffffffff;
  pcVar3 = local_a4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_664d6d80(local_64,(undefined4 *)local_a4,~uVar2 - 1);
  uVar2 = 0xffffffff;
  pcVar3 = param_4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_664d6d80(local_64,(undefined4 *)param_4,~uVar2 - 1);
  uVar2 = 0xffffffff;
  pcVar3 = local_e4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_664d6d80(local_64,(undefined4 *)local_e4,~uVar2 - 1);
  uVar2 = 0xffffffff;
  pcVar3 = param_6;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_664d6d80(local_64,(undefined4 *)param_6,~uVar2 - 1);
  FUN_664d6e40(param_7,local_64);
  return;
}


