/* Module: sfnetmedia.dll
   Function: FUN_0040b3d0
   Address: 0040b3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040b3d0(int param_1)

{
  LPCSTR lpString;
  undefined4 uVar1;
  undefined2 local_58 [8];
  undefined2 local_48 [8];
  undefined2 local_38 [8];
  undefined2 local_28 [8];
  undefined2 local_18 [4];
  undefined4 local_10;
  int local_8;
  
  GetDlgItem(*(HWND *)(param_1 + 4),0x1f5);
  lpString = *(LPCSTR *)(*(int *)(param_1 + 0x70) + 0x10);
  local_8 = lstrlenA(*(LPCSTR *)(param_1 + 100));
  lstrlenA(lpString);
  FUN_004323c0();
  FUN_004156f0(&stack0xffffff9c,(BYTE *)"%s?Product=%s&register=%d");
  local_28[0] = 0;
  FUN_0040fc90(local_28,&stack0xffffff9c);
  local_18[0] = 3;
  local_10 = 2;
  local_58[0] = 0;
  local_48[0] = 0;
  local_38[0] = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0xd0))
                    (*(int **)(param_1 + 0x4c),local_28,local_18,local_58,local_48,local_38);
  Ordinal_9(local_38);
  Ordinal_9(local_48);
  Ordinal_9(local_58);
  Ordinal_9(local_18);
  Ordinal_9(local_28);
  return uVar1;
}


