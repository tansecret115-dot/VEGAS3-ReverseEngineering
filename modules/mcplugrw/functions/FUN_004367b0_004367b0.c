/* Module: mcplugrw.dll
   Function: FUN_004367b0
   Address: 004367b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004367b0(void *this,LPCSTR param_1)

{
  WCHAR local_208 [259];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,param_1,-1,local_208,0x104);
  local_2 = 0;
  if (*(int *)((int)this + 0x8a4) == 0) {
    FUN_0044dec0(*(void **)((int)this + 0x20),local_208);
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa9);
    DAT_004aedf0 = FUN_0044de00(*(int *)((int)this + 0x20));
    switch(DAT_004aedf0) {
    case 3:
      *(undefined4 *)((int)this + 0x8a4) = 1;
    case 1:
      FUN_0044dec0(*(void **)((int)this + 0x20),(LPCWSTR)&stack0xfffffdf4);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa6);
      DAT_004aedf0 = 0;
      return 0;
    case 4:
      *(undefined4 *)((int)this + 0x8a4) = 1;
    case 2:
      FUN_0044dec0(*(void **)((int)this + 0x20),(LPCWSTR)&stack0xfffffdf4);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa5);
      DAT_004aedf0 = 1;
      return 1;
    }
  }
  else {
    if (DAT_004aedf0 == 0) {
      FUN_0044dec0(*(void **)((int)this + 0x20),local_208);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa6);
      return DAT_004aedf0;
    }
    FUN_0044dec0(*(void **)((int)this + 0x20),local_208);
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa5);
  }
  return DAT_004aedf0;
}


