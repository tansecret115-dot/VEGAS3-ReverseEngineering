/* Module: rmbe3260.dll
   Function: FUN_660562e0
   Address: 660562e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_660562e0(void *this,byte param_1,byte param_2)

{
  byte bVar1;
  
  *(undefined ***)this = &PTR_LAB_66068a78;
  CMap<>((void *)((int)this + 4),10);
  FUN_6605c3e0((undefined4 *)((int)this + 0x2c));
  FUN_6605b650((undefined4 *)((int)this + 0x45));
  *(undefined ***)this = &PTR_FUN_66068a58;
  bVar1 = (param_1 ^ *(byte *)((int)this + 0x44)) & 1 ^ *(byte *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(byte *)((int)this + 0x44) = bVar1;
  if ((bVar1 & 1) != 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
  }
  *(undefined4 *)((int)this + 0x69) = 0;
  *(byte *)((int)this + 0x44) = (param_2 & 1) << 1 | *(byte *)((int)this + 0x44) & 0xfd;
  return this;
}


