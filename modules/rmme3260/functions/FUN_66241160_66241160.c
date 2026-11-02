/* Module: rmme3260.dll
   Function: FUN_66241160
   Address: 66241160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66241160(void *this,HWND param_1,HRGN param_2,BOOL param_3)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DVar1 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x84) == DVar1) {
    FUN_66241320(*(int *)((int)this + 0x6c));
    iVar2 = SetWindowRgn(param_1,param_2,param_3);
    return iVar2;
  }
  puVar3 = operator_new(0x24);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[2] = param_1;
    puVar3[1] = this;
    *puVar3 = 4;
    puVar3[3] = param_2;
    puVar3[4] = param_3;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
  }
  FUN_66250b60((void *)(*(int *)((int)this + 0x6c) + 0x98),puVar3);
  FUN_66240340(*(void **)((int)this + 0x6c),2,0);
  return 1;
}


