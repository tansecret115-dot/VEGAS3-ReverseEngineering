/* Module: mp3plug.dll
   Function: FUN_5f69c060
   Address: 5f69c060
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69c060(void *this,int param_1,uchar *param_2)

{
  void *this_00;
  HGLOBAL hMem;
  undefined4 *puVar1;
  uchar *this_01;
  int iVar2;
  
  this_00 = (void *)FUN_5f69bf30(this,param_1,0);
  if (this_00 != (void *)0x0) {
    FUN_5f69a9d0(this_00,param_2);
    return 0;
  }
  hMem = GlobalAlloc(0x40,0x2c);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    this_01 = (uchar *)0x0;
  }
  else {
    this_01 = (uchar *)FUN_5f69a8b0(puVar1);
  }
  FUN_5f69a6d0(this_01,2,param_1);
  FUN_5f69a9d0(this_01,param_2);
  param_2 = this_01;
  iVar2 = FUN_5f6b5190(*(int **)((int)this + 0x18),-1,(int *)&param_2,1);
  return iVar2;
}


