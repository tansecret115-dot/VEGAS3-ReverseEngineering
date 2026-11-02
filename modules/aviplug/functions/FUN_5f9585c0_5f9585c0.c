/* Module: aviplug.dll
   Function: FUN_5f9585c0
   Address: 5f9585c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f9585c0(void *this,undefined4 *param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *local_4;
  
  local_4 = this;
  if (DAT_5f9f4108 == 0) {
LAB_5f958649:
    pvVar1 = GlobalAlloc(0x40,0x5c);
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_5f956990(puVar2);
      goto LAB_5f95868a;
    }
  }
  else {
    iVar3 = 0;
    local_4 = (int *)0x0;
    WaitForSingleObject(DAT_5f9f410c,0xffffffff);
    if (DAT_5f9f4138 != (undefined4 *)0x0) {
      (**(code **)*DAT_5f9f4138)(DAT_5f9f4138,&DAT_5f9d9e00,&local_4);
    }
    if (local_4 == (int *)0x0) {
      if (DAT_5f9f4134 != (undefined4 *)0x0) {
        (**(code **)*DAT_5f9f4134)(DAT_5f9f4134,&DAT_5f9d9e00,&local_4);
        if (local_4 != (int *)0x0) goto LAB_5f95861f;
      }
    }
    else {
LAB_5f95861f:
      piVar4 = (int *)0x271c;
      iVar3 = (**(code **)(*local_4 + 0x18))(local_4,0x271c,0);
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    ReleaseMutex(DAT_5f9f410c);
    if (iVar3 != 0) goto LAB_5f958649;
    pvVar1 = GlobalAlloc(0x40,0xac);
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_5f957860(puVar2);
      goto LAB_5f95868a;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_5f95868a:
  *param_1 = puVar2;
  return (-(uint)(puVar2 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


