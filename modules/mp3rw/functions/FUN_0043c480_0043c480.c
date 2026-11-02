/* Module: mp3rw.dll
   Function: FUN_0043c480
   Address: 0043c480
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0043c480(void *this,undefined4 param_1,uchar *param_2,uchar *param_3)

{
  uchar local_30c [260];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  if (*(int *)((int)this + 0x20) != 0) {
    _mbscpy(local_30c,param_2);
    if (param_3 != (uchar *)0x0) {
      _mbscat(local_30c,"|");
      _mbscat(local_30c,param_3);
    }
    MultiByteToWideChar(0,1,(LPCSTR)local_30c,-1,local_208,0x104);
    local_2 = 0;
    FUN_0044dec0(*(void **)((int)this + 0x20),local_208);
    (**(code **)(**(int **)((int)this + 0x20) + 8))(param_1);
  }
  return;
}


