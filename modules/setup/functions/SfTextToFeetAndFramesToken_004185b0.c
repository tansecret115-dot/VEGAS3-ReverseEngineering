/* Module: Setup.exe
   Function: SfTextToFeetAndFramesToken
   Address: 004185b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall SfTextToFeetAndFramesToken(char const *,struct _sfposfmt const *,int) */

__int64 SfTextToFeetAndFramesToken(char *param_1,_sfposfmt *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  __int64 _Var5;
  uint uVar6;
  char local_2c [32];
  undefined8 local_c;
  
                    /* 0x185b0  62  ?SfTextToFeetAndFramesToken@@YG_JPBDPBU_sfposfmt@@H@Z */
  uVar2 = 0;
  local_c = (ulonglong)(uint)local_c;
  pcVar1 = &stack0xffffffc8;
  lstrlenA(param_1);
  FUN_004321a0();
  FUN_00418250(param_1,&stack0xffffffc8);
  iVar3 = 0;
  do {
    pcVar1 = FUN_004184d0(local_2c,pcVar1,0x20);
    if (local_2c[0] == '\0') break;
    local_c = CONCAT44(uVar2,(uint)local_c);
    uVar2 = _SfTextToLongToken_8(local_2c,(undefined4 *)0x0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  if (param_3 == 0) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = 0x28;
  }
  lVar4 = __allmul(local_c._4_4_,0,uVar6,0);
  local_c = lVar4 + (ulonglong)uVar2;
  _Var5 = ftol();
  return _Var5;
}


