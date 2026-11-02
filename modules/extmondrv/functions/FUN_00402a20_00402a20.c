/* Module: extmondrv.dll
   Function: FUN_00402a20
   Address: 00402a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00402a20(void *this,undefined4 param_1,wchar_t *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined ***)this = &PTR_LAB_0044d720;
  *(undefined ***)((int)this + 4) = &PTR_LAB_0044d70c;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x90));
  FUN_00404600((undefined4 *)((int)this + 0x28));
  puVar2 = &DAT_0044d608;
  puVar3 = (undefined4 *)((int)this + 0x70);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  wcscpy((wchar_t *)((int)this + 0xcc),param_2);
  InterlockedIncrement((LONG *)&DAT_0045b00c);
  return this;
}


