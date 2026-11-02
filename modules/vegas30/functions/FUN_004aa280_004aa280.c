/* Module: vegas30.exe
   Function: FUN_004aa280
   Address: 004aa280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_004aa280(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_4;
  
  local_4 = 0;
  iVar2 = FUN_004aa0b0(param_1,param_2,0,&local_4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = *(int *)(iVar2 + 0x24);
  uVar4 = *(uint *)(iVar2 + 0x20);
  do {
    iVar2 = FUN_004aa110(param_1,param_2,local_4,&local_4);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar2 + 0x24);
    if ((iVar3 <= iVar1) && ((iVar3 < iVar1 || (uVar4 <= *(uint *)(iVar2 + 0x20))))) {
      iVar3 = iVar1;
      uVar4 = *(uint *)(iVar2 + 0x20);
    }
  } while (*(int *)(iVar2 + 0x10) <= param_2);
  return CONCAT44(iVar3,uVar4);
}


