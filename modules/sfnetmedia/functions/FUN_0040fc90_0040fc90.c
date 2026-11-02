/* Module: sfnetmedia.dll
   Function: FUN_0040fc90
   Address: 0040fc90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 * __thiscall FUN_0040fc90(void *this,LPCSTR param_1)

{
  int iVar1;
  void **ppvVar2;
  void *pvStack_14;
  
  pvStack_14 = this;
  iVar1 = Ordinal_9();
  if (iVar1 < 0) {
    *(undefined2 *)this = 10;
    *(int *)((int)this + 8) = iVar1;
  }
  *(undefined2 *)this = 8;
  if (param_1 == (LPCSTR)0x0) {
    ppvVar2 = (void **)0x0;
  }
  else {
    ppvVar2 = &pvStack_14;
    iVar1 = lstrlenA(param_1);
    FUN_004323c0();
    pvStack_14 = (void *)((uint)pvStack_14 & 0xffff0000);
    MultiByteToWideChar(0,0,param_1,-1,(LPWSTR)&pvStack_14,iVar1 + 1);
  }
  iVar1 = Ordinal_2(ppvVar2);
  *(int *)((int)this + 8) = iVar1;
  if ((iVar1 == 0) && (param_1 != (LPCSTR)0x0)) {
    *(undefined2 *)this = 10;
    *(undefined4 *)((int)this + 8) = 0x8007000e;
  }
  return this;
}


