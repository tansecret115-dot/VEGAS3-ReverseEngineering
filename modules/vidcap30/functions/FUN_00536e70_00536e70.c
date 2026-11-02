/* Module: vidcap30.exe
   Function: FUN_00536e70
   Address: 00536e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00536e70(int param_1,undefined4 param_2,uchar *param_3,uchar *param_4)

{
  uchar local_30c [260];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    _mbscpy(local_30c,param_3);
    if (param_4 != (uchar *)0x0) {
      _mbscat(local_30c,"|");
      _mbscat(local_30c,param_4);
    }
    MultiByteToWideChar(0,1,(LPCSTR)local_30c,-1,local_208,0x104);
    local_2 = 0;
    FUN_00555170(local_208);
    (**(code **)(**(int **)(param_1 + 0x20) + 8))(param_2);
  }
  return;
}


