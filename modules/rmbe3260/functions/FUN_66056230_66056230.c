/* Module: rmbe3260.dll
   Function: FUN_66056230
   Address: 66056230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66056230(void *this,char *param_1,byte param_2,byte param_3)

{
  LSTATUS LVar1;
  
  *(undefined ***)this = &PTR_LAB_66068a78;
  CMap<>((void *)((int)this + 4),10);
  FUN_6605c3e0((undefined4 *)((int)this + 0x2c));
  FUN_6605b650((undefined4 *)((int)this + 0x45));
  *(byte *)((int)this + 0x44) =
       (param_2 ^ *(byte *)((int)this + 0x44)) & 1 ^ *(byte *)((int)this + 0x44);
  *(undefined ***)this = &PTR_FUN_66068a58;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  FUN_6605b970((undefined4 *)((int)this + 0x45),param_1);
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x51));
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,s_RVEncoderStats_6606f3b0,0,0xf003f,
                        (PHKEY)((int)this + 0x69));
  if (LVar1 != 0) {
    *(PHKEY)((int)this + 0x69) = (HKEY)0x0;
  }
  *(byte *)((int)this + 0x44) = (param_3 & 1) << 1 | *(byte *)((int)this + 0x44) & 0xfd;
  return this;
}


