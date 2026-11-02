/* Module: vegas30.exe
   Function: FUN_006053a0
   Address: 006053a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_006053a0(int param_1,int param_2)

{
  char *pcVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_350 [4];
  char local_34c [259];
  undefined1 local_249;
  undefined1 local_248 [584];
  
  if (((*(int *)(param_1 + 0x7ec) != 0) && (*(int *)(param_1 + 0x7f4) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7f0) != 0) {
      uVar3 = FUN_006054b0();
      return uVar3;
    }
    pcVar5 = local_34c;
    lstrcpynA(local_34c,(LPCSTR)(param_1 + 0x374),0x104);
    local_249 = 0;
    while (local_34c[0] != '\0') {
      if (*pcVar5 == '\\') {
        *pcVar5 = ' ';
      }
      pcVar1 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      local_34c[0] = *pcVar1;
    }
    iVar4 = -0x10000000;
    if (param_2 != 0) {
      iVar4 = param_2;
    }
    sVar2 = FUN_00609e50(0,*(undefined4 *)(param_1 + 0x7f4),iVar4,500,local_248,pcVar5,local_350,
                         param_1 + 0x7f0);
    *(short *)(param_1 + 0x7f8) = sVar2;
    if (sVar2 == 0) {
      uVar3 = FUN_006054b0();
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
  }
  return 0x80004005;
}


