/* Module: rmme3260.dll
   Function: FUN_662410b0
   Address: 662410b0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL __thiscall
FUN_662410b0(void *this,HWND param_1,HWND param_2,int param_3,int param_4,int param_5,int param_6,
            UINT param_7)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  
  DVar1 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x84) == DVar1) {
    FUN_66241320(*(int *)((int)this + 0x6c));
    BVar2 = SetWindowPos(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return BVar2;
  }
  puVar3 = operator_new(0x24);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[2] = param_1;
    puVar3[3] = param_2;
    puVar3[4] = param_3;
    puVar3[5] = param_4;
    puVar3[6] = param_5;
    puVar3[1] = this;
    *puVar3 = 3;
    puVar3[7] = param_6;
    puVar3[8] = param_7;
  }
  FUN_66250b60((void *)(*(int *)((int)this + 0x6c) + 0x98),puVar3);
  FUN_66240340(*(void **)((int)this + 0x6c),2,0);
  return 1;
}


