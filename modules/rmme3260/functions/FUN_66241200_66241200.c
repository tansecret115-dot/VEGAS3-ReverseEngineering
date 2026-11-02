/* Module: rmme3260.dll
   Function: FUN_66241200
   Address: 66241200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66241200(void *this,int param_1)

{
  DWORD DVar1;
  undefined4 *puVar2;
  
  DVar1 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x84) == DVar1) {
    FUN_66241320(*(int *)((int)this + 0x6c));
    FUN_6623f010(this,param_1);
    return;
  }
  puVar2 = operator_new(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = this;
    *puVar2 = 5;
    puVar2[2] = param_1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
  }
  FUN_66250b60((void *)(*(int *)((int)this + 0x6c) + 0x98),puVar2);
  FUN_66240340(*(void **)((int)this + 0x6c),2,0);
  return;
}


