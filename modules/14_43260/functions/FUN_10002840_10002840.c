/* Module: 14_43260.dll
   Function: FUN_10002840
   Address: 10002840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_10002840(void *this,int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 8000) && ((short)param_1[1] == 0x10)) && (*(short *)((int)param_1 + 6) == 1)) {
    FUN_10001a30((int)this);
    iVar1 = FUN_10001d50((int)this);
    if (iVar1 != -1) {
      *(undefined4 *)((int)this + 0x28c) = 0;
      *(undefined4 *)((int)this + 0x290) = 0;
      *(undefined4 *)((int)this + 0x294) = 0;
      *(undefined4 *)((int)this + 0x298) = 0;
      *(undefined4 *)((int)this + 0x29c) = 0;
      *(int *)((int)this + 0x290) = (int)this + 0x14;
      *(int *)((int)this + 0x294) = (int)this + 0x3c;
      *(int *)((int)this + 0x298) = (int)this + 100;
      *(undefined4 *)((int)this + 0x2a0) = 0;
      *(undefined4 *)((int)this + 0x2a4) = 0;
      *(undefined4 *)((int)this + 0x2a8) = 0;
      *(undefined4 *)((int)this + 0x2ac) = 0;
      *(undefined4 *)((int)this + 0x2b0) = 0;
      iVar1 = *(int *)((int)this + 0x298);
      *(int *)((int)this + 0x2a4) = iVar1 + 0x28;
      *(int *)((int)this + 0x2a8) = iVar1 + 0x50;
      *(int *)((int)this + 0x2ac) = iVar1 + 0x78;
      *(undefined4 *)((int)this + 0x2b4) = 0;
      *(undefined4 *)((int)this + 0x2b8) = 0;
      *(undefined4 *)((int)this + 700) = 0;
      *(undefined4 *)((int)this + 0x2c0) = 0;
      *(undefined4 *)((int)this + 0x2c4) = 0;
      iVar1 = *(int *)((int)this + 0x2ac);
      *(int *)((int)this + 0x2b8) = iVar1 + 0x28;
      *(int *)((int)this + 700) = iVar1 + 0x50;
      *(int *)((int)this + 0x2c0) = iVar1 + 0x78;
      *(int *)((int)this + 0x2c4) = iVar1 + 0xa0;
      *(undefined4 *)((int)this + 0x2c8) = 0;
      *(undefined4 *)((int)this + 0x2cc) = 0;
      *(undefined4 *)((int)this + 0x2d0) = 0;
      *(undefined4 *)((int)this + 0x2d4) = 0;
      *(undefined4 *)((int)this + 0x2d8) = 0;
      iVar1 = *(int *)((int)this + 0x2c4);
      *(int *)((int)this + 0x2cc) = iVar1 + 0x28;
      *(int *)((int)this + 0x2d0) = iVar1 + 0x50;
      *(int *)((int)this + 0x2d4) = iVar1 + 0x78;
      *(int *)((int)this + 0x2d8) = iVar1 + 0xa0;
      FUN_10002980((int)this);
      return 0;
    }
  }
  return 0xffffffff;
}


