/* Module: encn3260.dll
   Function: FUN_66495e80
   Address: 66495e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66495e80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  (**(code **)(**(int **)this + 0x18))(*(int **)this,&local_c);
  if (999999 < local_8) {
    local_c = local_8 / 1000000 + local_c;
    local_8 = local_8 % 1000000;
  }
  iVar1 = local_c - *(int *)(param_1 + 8);
  for (iVar2 = local_8 - *(int *)(param_1 + 0xc); iVar2 < 0; iVar2 = iVar2 + 1000000) {
    iVar1 = iVar1 + -1;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar1;
  iVar2 = *(int *)(param_1 + 0x14) + iVar2;
  *(int *)(param_1 + 0x14) = iVar2;
  while (999999 < iVar2) {
    iVar2 = *(int *)(param_1 + 0x14) + -1000000;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(int *)(param_1 + 8) = local_c;
  *(int *)(param_1 + 0xc) = local_8;
  return;
}


