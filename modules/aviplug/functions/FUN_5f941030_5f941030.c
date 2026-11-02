/* Module: aviplug.dll
   Function: FUN_5f941030
   Address: 5f941030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f941030(DWORD param_1,LPCSTR param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 == (LPCSTR)0x0) {
    **(undefined4 **)(param_1 + 0x24) = 0x4b4e554a;
    iVar2 = *(int *)(param_1 + 0x24);
    uVar3 = *(uint *)(iVar2 + 4);
    iVar4 = (uVar3 & 1) + uVar3;
    puVar1 = (undefined4 *)(iVar4 + 8 + iVar2);
    if (*(int *)(iVar4 + 8 + iVar2) == 0x4b4e554a) {
      *(uint *)(iVar2 + 4) = puVar1[1] + 8 + uVar3;
      *puVar1 = 0;
      puVar1[1] = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24);
    MultiByteToWideChar(0,1,param_2,-1,(LPWSTR)(iVar2 + 8),0x104);
    *(undefined2 *)(iVar2 + 0x20e) = 0;
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 1;
  FUN_5f93f330(param_1);
  return;
}


