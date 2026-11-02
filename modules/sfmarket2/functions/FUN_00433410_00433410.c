/* Module: sfmarket2.dll
   Function: FUN_00433410
   Address: 00433410
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00433410(void *this,LPCSTR param_1)

{
  WCHAR local_208 [259];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,param_1,-1,local_208,0x104);
  local_2 = 0;
  if (*(int *)((int)this + 0x8a4) == 0) {
    FUN_004450d0(*(void **)((int)this + 0x20),local_208);
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa9);
    DAT_004ab190 = FUN_00445010(*(int *)((int)this + 0x20));
    switch(DAT_004ab190) {
    case 3:
      *(undefined4 *)((int)this + 0x8a4) = 1;
    case 1:
      FUN_004450d0(*(void **)((int)this + 0x20),(LPCWSTR)&stack0xfffffdf4);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa6);
      DAT_004ab190 = 0;
      return 0;
    case 4:
      *(undefined4 *)((int)this + 0x8a4) = 1;
    case 2:
      FUN_004450d0(*(void **)((int)this + 0x20),(LPCWSTR)&stack0xfffffdf4);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa5);
      DAT_004ab190 = 1;
      return 1;
    }
  }
  else {
    if (DAT_004ab190 == 0) {
      FUN_004450d0(*(void **)((int)this + 0x20),local_208);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa6);
      return DAT_004ab190;
    }
    FUN_004450d0(*(void **)((int)this + 0x20),local_208);
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa5);
  }
  return DAT_004ab190;
}


