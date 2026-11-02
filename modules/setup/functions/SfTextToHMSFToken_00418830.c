/* Module: Setup.exe
   Function: SfTextToHMSFToken
   Address: 00418830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall SfTextToHMSFToken(char const *,struct _sfposfmt const *,int,char const * *) */

__int64 SfTextToHMSFToken(char *param_1,_sfposfmt *param_2,int param_3,char **param_4)

{
  undefined4 uVar1;
  int iVar2;
  LPCSTR pCVar3;
  undefined4 uVar4;
  int unaff_EDI;
  __int64 _Var5;
  char local_50 [32];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x18830  63  ?SfTextToHMSFToken@@YG_JPBDPBU_sfposfmt@@HPAPBD@Z */
  local_10 = 0;
  local_8 = 0;
  local_c = 0;
  pCVar3 = &stack0xffffffa4;
  iVar2 = lstrlenA(param_1);
  FUN_004321a0();
  local_14 = &stack0xffffffa4;
  FUN_004321a0();
  local_18 = &stack0xffffffa4;
  FUN_00418350(param_1,&stack0xffffffa4,(int *)&stack0xffffffa4,iVar2 << 2);
  if (param_3 == 0) {
    iVar2 = 0;
    uVar4 = 0;
    do {
      pCVar3 = FUN_004184d0(local_50,pCVar3,0x20);
      uVar1 = local_8;
      local_20 = local_c;
      local_28 = uVar4;
      if (local_50[0] == '\0') break;
      local_8 = local_c;
      local_10 = uVar4;
      local_20 = _SfTextToLongToken_8(local_50,(undefined4 *)0x0);
      iVar2 = iVar2 + 1;
      uVar4 = uVar1;
      local_28 = uVar1;
      local_c = local_20;
    } while (iVar2 < 4);
  }
  else {
    iVar2 = 0;
    uVar4 = 0;
    pCVar3 = &stack0xffffffa4;
    do {
      pCVar3 = FUN_004184d0(local_50,pCVar3,0x20);
      uVar1 = local_8;
      if (local_50[0] == '\0') break;
      local_10 = uVar4;
      local_8 = _SfTextToLongToken_8(local_50,(undefined4 *)0x0);
      iVar2 = iVar2 + 1;
      uVar4 = uVar1;
    } while (iVar2 < 3);
    local_20 = 0;
    local_28 = uVar4;
  }
  if (param_4 != (char **)0x0) {
    *param_4 = param_1 + *(int *)(local_18 + ((int)pCVar3 - (int)local_14) * 4);
  }
  local_2c = local_10;
  local_24 = local_8;
  local_30 = 0;
  _Var5 = SfHMSFToNanoTime((_smpteval *)&local_30,
                           (double)CONCAT44(unaff_EDI,*(undefined4 *)(param_2 + 0xc)));
  return _Var5;
}


