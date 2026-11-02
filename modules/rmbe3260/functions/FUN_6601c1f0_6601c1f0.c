/* Module: rmbe3260.dll
   Function: FUN_6601c1f0
   Address: 6601c1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6601c1f0(int param_1)

{
  int iVar1;
  undefined1 local_10c [256];
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x20) + 0xc))
                    (param_1 + 0x20,&DAT_66065aa8,0,&DAT_66065a98,&local_8);
  if (-1 < iVar1) {
    (**(code **)(**(int **)(param_1 + 0x78) + 0x3c))(*(int **)(param_1 + 0x78),local_10c,0xff);
    (**(code **)(*local_8 + 0x10))(local_8,3,local_10c);
    (**(code **)(*local_8 + 0xc))(local_8,0,0);
    local_c = (int *)0x0;
    iVar1 = (**(code **)*local_8)(local_8,&DAT_66065a78,&local_c);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x18))(*(int **)(param_1 + 0x8c),local_c);
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
    }
  }
  return iVar1;
}


