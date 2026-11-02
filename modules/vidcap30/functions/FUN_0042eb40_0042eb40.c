/* Module: vidcap30.exe
   Function: FUN_0042eb40
   Address: 0042eb40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042eb40(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_0042f4b0(param_1,1);
  if ((param_3 < 1) && (param_3 < 0)) {
    param_2 = 0;
    param_3 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x518) * 0x40;
  iVar1 = *(int *)(iVar2 + 0x434 + param_1);
  iVar2 = iVar2 + 0x418 + param_1;
  *(uint *)(iVar2 + 0x10) = param_2;
  *(int *)(iVar2 + 0x14) = param_3;
  if ((iVar1 <= param_3) && ((iVar1 < param_3 || (*(uint *)(iVar2 + 0x18) < param_2)))) {
    *(uint *)(iVar2 + 0x18) = param_2;
    *(int *)(iVar2 + 0x1c) = param_3;
  }
  FUN_0042f5d0(param_1,1);
  return;
}


