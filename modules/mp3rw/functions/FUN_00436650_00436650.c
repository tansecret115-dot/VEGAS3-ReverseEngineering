/* Module: mp3rw.dll
   Function: FUN_00436650
   Address: 00436650
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00436650(void *this,LPCSTR param_1)

{
  WCHAR local_208 [259];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,param_1,-1,local_208,0x104);
  local_2 = 0;
  if (*(int *)((int)this + 0x8a0) == 0) {
    FUN_0044dec0(*(void **)((int)this + 0x20),local_208);
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa4);
    DAT_004aedec = FUN_0044de00(*(int *)((int)this + 0x20));
    switch(DAT_004aedec) {
    case 3:
      *(undefined4 *)((int)this + 0x8a0) = 1;
    case 1:
      FUN_0044dec0(*(void **)((int)this + 0x20),(LPCWSTR)&stack0xfffffdf4);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa6);
      DAT_004aedec = 0;
      return 0;
    case 4:
      *(undefined4 *)((int)this + 0x8a0) = 1;
    case 2:
      FUN_0044dec0(*(void **)((int)this + 0x20),(LPCWSTR)&stack0xfffffdf4);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa5);
      DAT_004aedec = 1;
      return 1;
    }
  }
  else {
    if (DAT_004aedec == 0) {
      FUN_0044dec0(*(void **)((int)this + 0x20),local_208);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa6);
      return DAT_004aedec;
    }
    FUN_0044dec0(*(void **)((int)this + 0x20),local_208);
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa5);
  }
  return DAT_004aedec;
}


