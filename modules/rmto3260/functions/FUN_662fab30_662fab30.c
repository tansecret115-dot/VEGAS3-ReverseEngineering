/* Module: rmto3260.dll
   Function: FUN_662fab30
   Address: 662fab30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662fab30(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_10;
  uint local_c;
  char local_5;
  
  local_5 = '\0';
  if (*(ushort *)((int)this + 0x38) < 3) {
    return -0x7ffbfffc;
  }
  iVar3 = *param_2;
  iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x20))(iVar3,0);
  do {
    if (iVar1 != 0) break;
    iVar2 = (**(code **)(**(int **)((int)this + 4) + 0x28))(&local_10,8);
    if (iVar2 == 8) {
      local_c = FUN_662f2c20(local_c);
      local_10 = FUN_662f2c20(local_10);
      if (local_10 == param_1) {
        local_5 = '\x01';
        *param_2 = iVar3;
      }
      else {
        iVar3 = iVar3 + local_c;
        iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x20))(iVar3,0);
      }
    }
    else {
      iVar1 = -0x7ffbf03e;
    }
  } while (local_5 == '\0');
  if (local_5 != '\0') {
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x20))(iVar3,0);
    }
    if (local_5 != '\0') {
      return iVar1;
    }
  }
  return -0x7ffbf03e;
}


