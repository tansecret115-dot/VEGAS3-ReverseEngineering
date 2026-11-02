/* Module: mp3plug.dll
   Function: FUN_5f69b520
   Address: 5f69b520
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69b520(void *this,undefined4 *param_1,uint param_2)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(LPCVOID *)((int)this + 0x34) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x34));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x34));
    GlobalFree(pvVar1);
  }
  *(uint *)((int)this + 0x18) =
       *(int *)((int)this + 0x44) + *(int *)((int)this + 0x40) + *(int *)((int)this + 0x3c) + 1 +
       param_2;
  pvVar1 = GlobalAlloc(0x42,param_2);
  puVar2 = GlobalLock(pvVar1);
  *(undefined4 **)((int)this + 0x34) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(uint *)((int)this + 0x38) = param_2;
  }
  return;
}


