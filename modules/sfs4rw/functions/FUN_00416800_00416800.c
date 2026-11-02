/* Module: sfs4rw.dll
   Function: FUN_00416800
   Address: 00416800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00416800(void *this,uint param_1)

{
  char *pcVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_350;
  char local_34c [259];
  undefined1 local_249;
  short local_248 [292];
  
  if (((*(int *)((int)this + 0x7ec) != 0) && (*(int *)((int)this + 0x7f4) != 0)) &&
     (*(short *)((int)this + 0x7e8) == 0)) {
    if (*(int *)((int)this + 0x7f0) != 0) {
      uVar3 = FUN_00416910((int)this);
      return uVar3;
    }
    pcVar5 = local_34c;
    lstrcpynA(local_34c,(LPCSTR)((int)this + 0x374),0x104);
    local_249 = 0;
    while (local_34c[0] != '\0') {
      if (*pcVar5 == '\\') {
        *pcVar5 = ' ';
      }
      pcVar1 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      local_34c[0] = *pcVar1;
    }
    uVar4 = 0xf0000000;
    if (param_1 != 0) {
      uVar4 = param_1;
    }
    sVar2 = FUN_0041b2e0((undefined4 *)0x0,*(uint *)((int)this + 0x7f4),uVar4,500,local_248,
                         (undefined4 *)pcVar5,&local_350,(undefined4 *)((int)this + 0x7f0));
    *(short *)((int)this + 0x7f8) = sVar2;
    if (sVar2 == 0) {
      uVar3 = FUN_00416910((int)this);
      return uVar3;
    }
    *(undefined4 *)((int)this + 0x7fc) = 0;
  }
  return 0x80004005;
}


