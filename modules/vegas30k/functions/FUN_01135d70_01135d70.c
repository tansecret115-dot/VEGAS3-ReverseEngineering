/* Module: vegas30k.dll
   Function: FUN_01135d70
   Address: 01135d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_01135d70(int param_1,int *param_2)

{
  int iVar1;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined1 local_10 [16];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_10);
  if (*(int *)(param_1 + 0x14) < unaff_EDI) {
    *(int *)(param_1 + 0x14) = unaff_EDI;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) <= param_2[1]) {
    iVar1 = param_2[1];
  }
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) <= param_2[3]) {
    iVar1 = param_2[3];
  }
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_0113afd0(param_1,unaff_retaddr,param_2,param_1 + 4);
  return param_2;
}


