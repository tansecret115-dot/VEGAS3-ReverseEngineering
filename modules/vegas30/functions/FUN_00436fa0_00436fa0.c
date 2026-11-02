/* Module: vegas30.exe
   Function: FUN_00436fa0
   Address: 00436fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00436fa0(char *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    *param_2 = 0;
    return;
  }
  iVar3 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar3 + 0x18) & 2) != 2) {
    bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
    iVar2 = *(int *)(iVar3 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 0x10);
    }
  }
  *param_2 = iVar3;
  return;
}


