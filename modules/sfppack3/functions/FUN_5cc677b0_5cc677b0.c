/* Module: sfppack3.dll
   Function: FUN_5cc677b0
   Address: 5cc677b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc677b0(LPCSTR param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  char local_2c [32];
  undefined8 local_c;
  
  uVar2 = 0;
  local_c = (ulonglong)(uint)local_c;
  pcVar1 = &stack0xffffffc8;
  lstrlenA(param_1);
  FUN_5cc845a0();
  FUN_5cc67450(param_1,&stack0xffffffc8);
  iVar3 = 0;
  do {
    pcVar1 = FUN_5cc676d0(local_2c,pcVar1,0x20);
    if (local_2c[0] == '\0') break;
    local_c = CONCAT44(uVar2,(uint)local_c);
    uVar2 = FUN_5cc662c0(local_2c,(undefined4 *)0x0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  if (param_3 == 0) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = 0x28;
  }
  lVar4 = __allmul(local_c._4_4_,0,uVar5,0);
  local_c = lVar4 + (ulonglong)uVar2;
  ftol();
  return;
}


