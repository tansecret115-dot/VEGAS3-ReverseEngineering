/* Module: vidpcore.dll
   Function: FUN_5dec6b10
   Address: 5dec6b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dec6b10(LPCSTR param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char local_2c [32];
  undefined8 local_c;
  
  uVar2 = 0;
  local_c._4_4_ = 0;
  puVar1 = &stack0xffffffc8;
  lstrlenA(param_1);
  FUN_5df157d0();
  FUN_5dec67b0(param_1,&stack0xffffffc8);
  iVar3 = 0;
  do {
    puVar1 = (undefined1 *)FUN_5dec6a30(local_2c,puVar1,0x20);
    if (local_2c[0] == '\0') break;
    local_c._4_4_ = uVar2;
    uVar2 = FUN_5dec5610(local_2c,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  if (param_3 == 0) {
    uVar4 = 0x10;
  }
  else {
    uVar4 = 0x28;
  }
  local_c = __allmul(local_c._4_4_,0,uVar4,0);
  local_c = local_c + (ulonglong)uVar2;
  ftol();
  return;
}


