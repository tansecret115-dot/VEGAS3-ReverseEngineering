/* Module: wavplug.dll
   Function: DllRegisterServer
   Address: 5f3810f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint DllRegisterServer(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_4b0;
  undefined1 local_4ac;
  undefined4 local_4ab;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480 [8];
  undefined4 local_460;
  undefined4 local_45c;
  undefined2 local_458;
  undefined4 local_456 [62];
  char local_35c [21];
  undefined4 local_347;
  undefined4 local_258;
  undefined1 local_254;
  undefined4 local_253;
  char local_230 [4];
  char local_22c [4];
  undefined4 local_228 [8];
  undefined4 local_208;
  undefined4 local_204;
  undefined2 local_200;
  undefined4 local_1fe [62];
  undefined4 local_104 [5];
  undefined4 local_f0 [60];
  
                    /* 0x10f0  5  DllRegisterServer */
  uVar1 = FUN_5f399390(DAT_5f3db000);
  uVar2 = FUN_5f399390(DAT_5f3db000);
  if (-1 < (int)uVar1) {
    local_4ac = DAT_5f3ca44c;
    local_4b0 = DAT_5f3ca448;
    puVar6 = &local_4ab;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 2) = 0;
    local_488 = DAT_5f3ca440;
    local_484 = DAT_5f3ca444;
    puVar6 = local_480;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_460 = DAT_5f3ca434;
    local_45c = DAT_5f3ca438;
    local_458 = DAT_5f3ca43c;
    puVar6 = local_456;
    for (iVar3 = 0x3e; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    pcVar4 = "Sonic Foundry Wave64";
    pcVar5 = local_35c;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    *pcVar5 = *pcVar4;
    puVar6 = &local_347;
    for (iVar3 = 0x3b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 2) = 0;
    FUN_5f381390(DAT_5f3db000,1,(LPCSTR)&local_4b0);
    uVar1 = uVar2;
  }
  local_254 = DAT_5f3ca418;
  local_258 = DAT_5f3ca414;
  puVar6 = &local_253;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_230[0] = s_sfafile_5f3ca40c[0];
  local_230[1] = s_sfafile_5f3ca40c[1];
  local_230[2] = s_sfafile_5f3ca40c[2];
  local_230[3] = s_sfafile_5f3ca40c[3];
  local_22c[0] = s_sfafile_5f3ca40c[4];
  local_22c[1] = s_sfafile_5f3ca40c[5];
  local_22c[2] = s_sfafile_5f3ca40c[6];
  local_22c[3] = s_sfafile_5f3ca40c[7];
  puVar6 = local_228;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_208 = DAT_5f3ca3ec;
  local_204 = DAT_5f3ca3f0;
  local_200 = DAT_5f3ca3f4;
  puVar6 = local_1fe;
  for (iVar3 = 0x3e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  pcVar4 = "Sonic Foundry Audio";
  puVar6 = local_104;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_f0;
  for (iVar3 = 0x3c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_5f381390(DAT_5f3db000,0,(LPCSTR)&local_258);
  uVar2 = FUN_5f399390(DAT_5f3db000);
  if ((int)uVar1 < 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


