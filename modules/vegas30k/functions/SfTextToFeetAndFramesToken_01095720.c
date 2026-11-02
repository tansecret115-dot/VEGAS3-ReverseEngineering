/* Module: vegas30k.dll
   Function: SfTextToFeetAndFramesToken
   Address: 01095720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall SfTextToFeetAndFramesToken(char const *,struct _sfposfmt const *,int) */

__int64 SfTextToFeetAndFramesToken(char *param_1,_sfposfmt *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  __int64 _Var4;
  undefined4 uVar5;
  char local_2c [32];
  undefined8 local_c;
  
                    /* 0x95720  502  ?SfTextToFeetAndFramesToken@@YG_JPBDPBU_sfposfmt@@H@Z */
  uVar2 = 0;
  local_c._4_4_ = 0;
  puVar1 = &stack0xffffffc8;
  lstrlenA(param_1);
  FUN_01002100();
  FUN_010953c0(param_1,&stack0xffffffc8);
  iVar3 = 0;
  do {
    puVar1 = (undefined1 *)FUN_01095640(local_2c,puVar1,0x20);
    if (local_2c[0] == '\0') break;
    local_c._4_4_ = uVar2;
    uVar2 = _SfTextToLongToken_8(local_2c,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  if (param_3 == 0) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = 0x28;
  }
  local_c = __allmul(local_c._4_4_,0,uVar5,0);
  local_c = local_c + (ulonglong)uVar2;
  _Var4 = ftol();
  return _Var4;
}


