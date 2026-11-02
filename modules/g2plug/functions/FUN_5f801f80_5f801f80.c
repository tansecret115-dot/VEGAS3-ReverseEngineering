/* Module: g2plug.dll
   Function: FUN_5f801f80
   Address: 5f801f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f801f80(int param_1)

{
  LPCWSTR lpWideCharStr;
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint local_13c;
  uint local_138;
  int local_134;
  int *local_130;
  CHAR local_12c [259];
  undefined1 local_29;
  int local_28;
  int *local_24 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f86a9b8;
  puStack_10 = &DAT_5f867560;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffeb0;
  piVar1 = (int *)(param_1 + 0x214);
  piVar2 = (int *)*piVar1;
  ExceptionList = &local_14;
  puVar3 = &stack0xfffffeb0;
  if (piVar2 != (int *)0x0) {
    ExceptionList = &local_14;
    (**(code **)(*piVar2 + 8))(piVar2);
    puVar3 = local_1c;
  }
  local_1c = puVar3;
  *piVar1 = 0;
  local_8 = 0;
  local_24[0] = (int *)0x0;
  local_28 = RMACreateRMEdit(piVar1);
  if ((-1 < local_28) &&
     (local_28 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_5f86a750,local_24),
     -1 < local_28)) {
    lpWideCharStr = (LPCWSTR)(param_1 + 0xc);
    if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
      WideCharToMultiByte(0,0,lpWideCharStr,-1,local_12c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x12c) {
      local_12c[0] = '\0';
    }
    local_29 = 0;
    (**(code **)(*local_24[0] + 0x40))(local_24[0],local_12c,1);
    local_130 = (int *)0x0;
    local_28 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_5f86a670,&local_130);
    if (-1 < local_28) {
      *(undefined4 *)(param_1 + 0x218) = 0;
      local_28 = (**(code **)(*local_130 + 0xc))(local_130,&local_134);
      if ((-1 < local_28) && (local_134 != 0)) {
        *(undefined4 *)(param_1 + 0x218) = 1;
      }
      local_28 = (**(code **)(*local_130 + 0x10))(local_130,&local_134);
      if ((-1 < local_28) && (local_134 != 0)) {
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 2;
      }
      local_28 = (**(code **)(*local_130 + 0x1c))(local_130,&local_138,&local_13c);
      if (-1 < local_28) {
        *(uint *)(param_1 + 0x21c) = local_138 & 0xffff;
        *(uint *)(param_1 + 0x220) = local_13c & 0xffff;
      }
      FUN_5f8021a0(local_130);
      (**(code **)(*local_130 + 8))(local_130);
    }
  }
  if (local_24[0] != (int *)0x0) {
    (**(code **)(*local_24[0] + 8))(local_24[0]);
  }
  ExceptionList = local_14;
  return;
}


