/* Module: vegas30k.dll
   Function: FUN_0118dee0
   Address: 0118dee0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_0118dee0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = -(param_3 + (uint)(param_2 != 0));
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x38) = -param_2;
    *(int *)(param_1 + 0x3c) = iVar1;
    uVar2 = FUN_0118e3a0(-param_2,iVar1);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  return -1 >= iVar1;
}


