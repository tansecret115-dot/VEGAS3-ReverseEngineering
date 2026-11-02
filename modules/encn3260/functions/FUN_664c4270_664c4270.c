/* Module: encn3260.dll
   Function: FUN_664c4270
   Address: 664c4270
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664c4270(void *this,UINT *param_1,HWND param_2)

{
  int iVar1;
  
  if (param_2 == (HWND)0x0) {
    if (*(int *)((int)this + 0x10) == 0) {
      return -0x7ffbfff9;
    }
    iVar1 = *(int *)((int)this + 0xc);
    while (iVar1 == 0) {
      Sleep(0);
      iVar1 = *(int *)((int)this + 0xc);
    }
    iVar1 = PostThreadMessageA(*(DWORD *)((int)this + 0x14),*param_1,param_1[1],param_1[2]);
  }
  else {
    iVar1 = PostMessageA(param_2,*param_1,param_1[1],param_1[2]);
  }
  if (iVar1 == 0) {
    GetLastError();
  }
  return (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
}


