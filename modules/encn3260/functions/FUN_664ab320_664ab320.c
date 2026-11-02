/* Module: encn3260.dll
   Function: FUN_664ab320
   Address: 664ab320
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL __thiscall FUN_664ab320(void *this,HWND param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  
  DVar1 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x84) == DVar1) {
    FUN_664ab6b0(*(int *)((int)this + 0x6c));
    BVar2 = UpdateWindow(param_1);
    return BVar2;
  }
  puVar3 = operator_new(0x24);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = this;
    *puVar3 = 1;
    puVar3[2] = param_1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
  }
  FUN_664baab0((void *)(*(int *)((int)this + 0x6c) + 0x98),puVar3);
  FUN_664aa6d0(*(void **)((int)this + 0x6c),2,0);
  return 1;
}


