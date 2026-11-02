/* Module: vegas30k.dll
   Function: FUN_011a4c40
   Address: 011a4c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011a4c40(int param_1)

{
  LPVOID *ppv;
  HRESULT HVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  ppv = (LPVOID *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) == 0) {
    HVar1 = CoCreateInstance((IID *)&DAT_011ef590,(LPUNKNOWN)0x0,3,(IID *)&DAT_011ef560,ppv);
    if (HVar1 < 0) {
      return HVar1;
    }
    iVar2 = (**(code **)(*(int *)*ppv + 0x2c))(*ppv,0,0);
    if (iVar2 < 0) {
      (**(code **)(*(int *)*ppv + 8))(*ppv);
      *ppv = (LPVOID)0x0;
      return iVar2;
    }
  }
  pvVar3 = GlobalAlloc(0x40,0x20);
  pvVar4 = GlobalLock(pvVar3);
  if ((pvVar4 != (LPVOID)0x0) &&
     (puVar5 = (undefined4 *)FUN_011b8ad0(param_1), puVar5 != (undefined4 *)0x0)) {
    iVar2 = FUN_011b8bc0();
    if (-1 < iVar2) {
      puVar6 = (undefined4 *)(param_1 + 0x34);
      (**(code **)*puVar5)(puVar5,&DAT_011d9bf0,puVar6);
      puVar5 = (undefined4 *)&stack0xfffffdd0;
      for (iVar2 = 0x89; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      iVar2 = (**(code **)(*(int *)*puVar6 + 0x14))((int *)*puVar6,&stack0xfffffdd0);
      if (iVar2 < 0) {
        (**(code **)(*(int *)*puVar6 + 8))((int *)*puVar6);
      }
      return iVar2;
    }
    FUN_011b8af0();
    pvVar3 = GlobalHandle(puVar5);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(puVar5);
    GlobalFree(pvVar3);
    return iVar2;
  }
  (**(code **)(*(int *)*ppv + 8))(*ppv);
  *ppv = (LPVOID)0x0;
  return -0x7ff8fff2;
}


