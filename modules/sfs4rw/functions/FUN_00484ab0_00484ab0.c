/* Module: sfs4rw.dll
   Function: FUN_00484ab0
   Address: 00484ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00484ab0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x16d);
  if (*(uint *)(iVar2 + 8) < *(uint *)(param_1 + 0x10d)) {
    puVar1 = (uint *)(iVar2 + 0xc);
    while( true ) {
      uVar4 = *puVar1;
      if (uVar4 < 8) {
        (**(code **)(*(int *)(param_1 + 0x171) + 4))
                  (param_1,param_2,param_3,param_4,iVar2 + 0x15,puVar1,8);
        uVar4 = *puVar1;
      }
      if (uVar4 != 8) {
        return;
      }
      cVar3 = (**(code **)(*(int *)(param_1 + 0x175) + 4))(param_1,iVar2 + 0x15);
      if (cVar3 == '\0') break;
      if (*(char *)(iVar2 + 0x10) != '\0') {
        *param_3 = *param_3 + 1;
        *(undefined1 *)(iVar2 + 0x10) = 0;
      }
      *puVar1 = 0;
      uVar4 = *(int *)(iVar2 + 8) + 1;
      *(uint *)(iVar2 + 8) = uVar4;
      if (*(uint *)(param_1 + 0x10d) <= uVar4) {
        return;
      }
    }
    if (*(char *)(iVar2 + 0x10) == '\0') {
      *param_3 = *param_3 + -1;
      *(undefined1 *)(iVar2 + 0x10) = 1;
    }
  }
  return;
}


