/* Module: vidcap30.exe
   Function: FUN_00443c20
   Address: 00443c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443c20(int param_1,int param_2,LPCSTR param_3)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  undefined1 *puVar3;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0042f4b0(param_1,1);
  if (param_3 == (LPCSTR)0x0) {
    if (*(void **)(param_2 + 0x14) != (void *)0x0) {
      free(*(void **)(param_2 + 0x14));
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
  }
  else {
    iVar1 = lstrlenA(param_3);
    iVar1 = iVar1 + 1;
    if (iVar1 < 0x105) {
      iVar2 = lstrlenA(param_3);
      _Size = iVar2 + 1;
    }
    else {
      iVar1 = 0x104;
      _Size = 0x104;
    }
    puVar3 = calloc(1,_Size);
    if (puVar3 == (undefined1 *)0x0) {
      local_4 = 0x8007000e;
      **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x40;
    }
    else {
      iVar1 = _SfPrepareName_12(param_3,puVar3,iVar1);
      if (*(void **)(param_2 + 0x14) != (void *)0x0) {
        free(*(void **)(param_2 + 0x14));
        *(undefined4 *)(param_2 + 0x14) = 0;
      }
      if (iVar1 == 0) {
        *puVar3 = 0;
        *(undefined1 **)(param_2 + 0x14) = puVar3;
        **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x40;
      }
      else {
        *(int *)(param_2 + 0x14) = iVar1;
        **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x40;
      }
    }
  }
  FUN_0042f5d0(param_1,1);
  return local_4;
}


